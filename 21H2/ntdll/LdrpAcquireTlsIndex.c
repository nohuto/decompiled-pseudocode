/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180054E64
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x180054D18 (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180054FE0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x180058550 (RtlClearBits.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(unsigned int *a1, _BYTE *a2)
{
  unsigned int SizeOfBitMap; // ebx
  ULONG ClearBitsAndSet; // eax
  unsigned int *Heap; // rax
  unsigned int *v8; // r14

  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    LdrpTlsBitmap.SizeOfBitMap = 8;
    LdrpTlsBitmap.Buffer = (unsigned int *)&LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
LABEL_6:
    RtlClearBits(&LdrpTlsBitmap, SizeOfBitMap + 1, 7u);
    _bittestandset((signed __int32 *)LdrpTlsBitmap.Buffer, SizeOfBitMap);
    *a1 = SizeOfBitMap;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(LdrpTlsBitmap.SizeOfBitMap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  Heap = (unsigned int *)RtlAllocateHeap(
                           NtCurrentPeb()->ProcessHeap,
                           NtdllBaseTag + 786432,
                           4 * (((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap, LdrpTlsBitmap.Buffer, (unsigned __int64)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)LdrpTlsBitmap.Buffer != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LdrpTlsBitmap.Buffer);
    LdrpTlsBitmap.SizeOfBitMap = SizeOfBitMap + 8;
    LdrpTlsBitmap.Buffer = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
