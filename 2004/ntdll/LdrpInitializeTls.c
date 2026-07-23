/*
 * XREFs of LdrpInitializeTls @ 0x1800473D8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateTls @ 0x180048150 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18004839C (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x180048990 (RtlSetBits.c)
 *     RtlClearBits @ 0x18004B790 (RtlClearBits.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // rbp
  ULONG v5; // ebx
  __int64 result; // rax
  unsigned int v7; // esi
  unsigned int *Heap; // rax
  ULONG NumberToSet; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18016A4D0;
  NumberToSet = 0;
  if ( (__int64 *)qword_18016A4D0 == &qword_18016A4D0 )
    goto LABEL_9;
  v1 = 1LL;
  do
  {
    v2 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3u, (PVOID)v2[6], 0LL, &OutHeaders);
    if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      v3 = RtlpImageDirectoryEntryToDataEx(v2[6], 1, 9u, &v10, (char **)&v11);
      v4 = v11;
      if ( v3 < 0 )
        v4 = 0LL;
      v11 = v4;
      if ( v4 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            (__int64)"DLL \"%wZ\" has TLS information at %p\n",
            v2 + 9,
            v4);
        result = LdrpAllocateTlsEntry(v4, (_DWORD)v2, (unsigned int)&NumberToSet, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v2 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18016A4D0 );
  v5 = NumberToSet;
  if ( NumberToSet )
  {
    v7 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      v1 = ((unsigned __int64)v7 + 31) >> 5;
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 4 * v1);
      if ( !Heap )
        return 3221225495LL;
      v5 = NumberToSet;
    }
    else
    {
      Heap = (unsigned int *)&LdrpStaticTlsBitmapVector;
    }
    LdrpActualBitmapSize = v1;
    LdrpTlsBitmap.SizeOfBitMap = v7;
    LdrpTlsBitmap.Buffer = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0, v5);
    RtlClearBits(&LdrpTlsBitmap, v5, 8u);
  }
  else
  {
LABEL_9:
    LdrpTlsBitmap.SizeOfBitMap = 0;
    LdrpTlsBitmap.Buffer = 0LL;
  }
  return LdrpAllocateTls();
}
