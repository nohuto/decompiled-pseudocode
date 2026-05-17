/*
 * XREFs of _LdrpAcquireTlsIndex@8 @ 0x4B2E185E
 * Callers:
 *     _LdrpAllocateTlsEntry@20 @ 0x4B2E1766 (_LdrpAllocateTlsEntry@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlFindClearBitsAndSet@12 @ 0x4B2E1990 (_RtlFindClearBitsAndSet@12.c)
 *     _RtlClearBits@12 @ 0x4B2E1AE0 (_RtlClearBits@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpAcquireTlsIndex(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // esi
  unsigned int *v4; // edi
  unsigned int ClearBitsAndSet; // eax
  void *Heap; // edi

  v2 = LdrpTlsBitmap;
  v4 = a1;
  if ( !LdrpTlsBitmap )
  {
    LdrpTlsBitmap = 8;
    dword_4B3A5C94 = &LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1;
LABEL_6:
    RtlClearBits(&LdrpTlsBitmap, v2 + 1, 7);
    *((_BYTE *)dword_4B3A5C94 + (v2 >> 3)) |= 1 << (v2 & 7);
    *v4 = v2;
    *a2 = 1;
    return 0;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *v4 = ClearBitsAndSet;
    *a2 = 0;
    return 0;
  }
  if ( (unsigned int)(LdrpTlsBitmap + 39) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap += 8;
    goto LABEL_6;
  }
  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 4 * ((v2 + 39) >> 5));
  if ( Heap )
  {
    LdrpActualBitmapSize = (v2 + 39) >> 5;
    memcpy(Heap, dword_4B3A5C94, (v2 + 7) >> 3);
    if ( dword_4B3A5C94 != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)dword_4B3A5C94);
    dword_4B3A5C94 = Heap;
    v4 = a1;
    LdrpTlsBitmap = v2 + 8;
    goto LABEL_6;
  }
  return -1073741801;
}
