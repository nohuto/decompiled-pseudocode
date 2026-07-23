/*
 * XREFs of _LdrpInitializeTls@0 @ 0x4B2E14F7
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     _LdrpAllocateTlsEntry@20 @ 0x4B2E1766 (_LdrpAllocateTlsEntry@20.c)
 *     _RtlSetBits@12 @ 0x4B2E1AA0 (_RtlSetBits@12.c)
 *     _RtlClearBits@12 @ 0x4B2E1AE0 (_RtlClearBits@12.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __stdcall LdrpInitializeTls()
{
  PLDR_DATA_TABLE_ENTRY Flink; // esi
  ULONG v1; // ebx
  PLDR_DATA_TABLE_ENTRY v2; // edi
  PVOID v3; // eax
  ULONG v4; // esi
  int result; // eax
  unsigned int v6; // edi
  unsigned int *Heap; // eax
  SIZE_T v8; // [esp-4h] [ebp-18h]
  ULONG Size; // [esp+Ch] [ebp-8h] BYREF
  ULONG NumberToSet; // [esp+10h] [ebp-4h] BYREF

  NumberToSet = 0;
  Flink = dword_4B3A5D8C;
  if ( IsListEmpty((struct _LIST_ENTRY *)&dword_4B3A5D8C) )
    goto LABEL_6;
  v1 = 1;
  do
  {
    v2 = Flink;
    Flink = (PLDR_DATA_TABLE_ENTRY)Flink->InLoadOrderLinks.Flink;
    v3 = RtlImageDirectoryEntryToData(v2->DllBase, 1u, 9u, &Size);
    Size = (ULONG)v3;
    if ( v3 )
    {
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrtls.c",
          577,
          "LdrpInitializeTls",
          2,
          "DLL \"%wZ\" has TLS information at %p\n",
          &v2->FullDllName,
          v3);
      result = LdrpAllocateTlsEntry(&NumberToSet, 0, 0);
      if ( result < 0 )
        return result;
      v2->TlsIndex = -1;
    }
  }
  while ( Flink != (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C );
  v4 = NumberToSet;
  if ( NumberToSet )
  {
    v6 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      v1 = (NumberToSet + 39) >> 5;
      LODWORD(v8) = 4 * v1;
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, v8);
      if ( !Heap )
        return -1073741801;
      v4 = NumberToSet;
    }
    else
    {
      Heap = (unsigned int *)&LdrpStaticTlsBitmapVector;
    }
    LdrpTlsBitmap.SizeOfBitMap = v6;
    LdrpActualBitmapSize = v1;
    LdrpTlsBitmap.Buffer = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0, v4);
    RtlClearBits(&LdrpTlsBitmap, v4, 8u);
  }
  else
  {
LABEL_6:
    LdrpTlsBitmap.SizeOfBitMap = 0;
    LdrpTlsBitmap.Buffer = 0;
  }
  return LdrpAllocateTls();
}
