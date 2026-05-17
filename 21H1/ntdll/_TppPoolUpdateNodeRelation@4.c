/*
 * XREFs of _TppPoolUpdateNodeRelation@4 @ 0x4B2B36E2
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall TppPoolUpdateNodeRelation(void **this)
{
  unsigned int Heap; // ebx
  int v3; // esi
  _DWORD *v4; // ecx
  void **v5; // edx
  _DWORD *v6; // edi
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v8 = 1;
  v9 = 76 * TppNumberNodes;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 76 * TppNumberNodes);
  if ( !Heap )
    return -1073741801;
  v3 = ZwQuerySystemInformationEx(107, &v8, 4, Heap, v9, &v9);
  if ( v3 >= 0 )
  {
    memset(this[8], 0, 12 * TppNumberNodes);
    v4 = (_DWORD *)Heap;
    if ( Heap < Heap + v9 )
    {
      v5 = this;
      do
      {
        v6 = (char *)v5[8] + 12 * v4[2];
        *v6++ = v4[8];
        *v6 = v4[9];
        v6[1] = v4[10];
        v4 = (_DWORD *)((char *)v4 + v4[1]);
      }
      while ( (unsigned int)v4 < Heap + v9 );
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return v3;
}
