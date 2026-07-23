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
  unsigned int SizeOfBitMap; // esi
  unsigned int *v4; // edi
  ULONG ClearBitsAndSet; // eax
  PVOID Heap; // edi
  SIZE_T v8; // [esp-4h] [ebp-18h]
  size_t v9; // [esp-4h] [ebp-18h]

  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v4 = a1;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    LdrpTlsBitmap.SizeOfBitMap = 8;
    LdrpTlsBitmap.Buffer = (unsigned int *)&LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1;
LABEL_6:
    RtlClearBits(&LdrpTlsBitmap, SizeOfBitMap + 1, 7u);
    *((_BYTE *)LdrpTlsBitmap.Buffer + (SizeOfBitMap >> 3)) |= 1 << (SizeOfBitMap & 7);
    *v4 = SizeOfBitMap;
    *a2 = 1;
    return 0;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *v4 = ClearBitsAndSet;
    *a2 = 0;
    return 0;
  }
  if ( (LdrpTlsBitmap.SizeOfBitMap + 39) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  LODWORD(v8) = 4 * ((SizeOfBitMap + 39) >> 5);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, v8);
  if ( Heap )
  {
    LdrpActualBitmapSize = (SizeOfBitMap + 39) >> 5;
    LODWORD(v9) = (SizeOfBitMap + 7) >> 3;
    memcpy(Heap, LdrpTlsBitmap.Buffer, v9);
    if ( (_UNKNOWN *)LdrpTlsBitmap.Buffer != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LdrpTlsBitmap.Buffer);
    LdrpTlsBitmap.Buffer = (unsigned int *)Heap;
    v4 = a1;
    LdrpTlsBitmap.SizeOfBitMap = SizeOfBitMap + 8;
    goto LABEL_6;
  }
  return -1073741801;
}
