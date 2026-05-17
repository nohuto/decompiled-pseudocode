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

int __thiscall LdrpInitializeTls(void *this)
{
  int *v1; // esi
  unsigned int v2; // ebx
  int *v3; // edi
  void *v4; // eax
  int v5; // esi
  int result; // eax
  int v7; // edi
  void *Heap; // eax
  void *v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v10 = 0;
  v1 = (int *)dword_4B3A5D8C;
  if ( (int *)dword_4B3A5D8C == &dword_4B3A5D8C )
    goto LABEL_6;
  v2 = 1;
  do
  {
    v3 = v1;
    v1 = (int *)*v1;
    v4 = RtlImageDirectoryEntryToData(this, v3[6], 1, 9, (int)&v9);
    v9 = v4;
    if ( v4 )
    {
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrtls.c",
          577,
          "LdrpInitializeTls",
          2,
          "DLL \"%wZ\" has TLS information at %p\n",
          v3 + 9,
          v4);
      result = LdrpAllocateTlsEntry(&v10, 0, 0);
      if ( result < 0 )
        return result;
      *((_WORD *)v3 + 29) = -1;
    }
  }
  while ( v1 != &dword_4B3A5D8C );
  v5 = v10;
  if ( v10 )
  {
    v7 = v10 + 8;
    if ( (unsigned int)(v10 + 8) > 0x20 )
    {
      v2 = (unsigned int)(v10 + 39) >> 5;
      Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 4 * v2);
      if ( !Heap )
        return -1073741801;
      v5 = v10;
    }
    else
    {
      Heap = &LdrpStaticTlsBitmapVector;
    }
    LdrpTlsBitmap = v7;
    LdrpActualBitmapSize = v2;
    dword_4B3A5C94 = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0, v5);
    RtlClearBits(&LdrpTlsBitmap, v5, 8);
  }
  else
  {
LABEL_6:
    LdrpTlsBitmap = 0;
    dword_4B3A5C94 = 0;
  }
  return LdrpAllocateTls();
}
