/*
 * XREFs of sub_180004F18 @ 0x180004F18
 * Callers:
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 * Callees:
 *     sub_180004688 @ 0x180004688 (sub_180004688.c)
 *     sub_180004710 @ 0x180004710 (sub_180004710.c)
 *     sub_1800065A4 @ 0x1800065A4 (sub_1800065A4.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 */

__int64 __fastcall sub_180004F18(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *Heap; // rax
  __int64 v9; // rbx
  int v10; // edi
  DWORD CurrentThreadId; // eax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v9 = (__int64)Heap;
  if ( Heap )
  {
    sub_180004688(Heap);
    v10 = TpAllocWork(v9 + 120, &sub_18000E2A0, v9, 0LL);
    if ( v10 >= 0 )
      v10 = 0;
    if ( v10 >= 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 96)) <= 1 )
        __fastfail(0xEu);
      CurrentThreadId = GetCurrentThreadId();
      ++*(_QWORD *)(v9 + 112);
      *(_DWORD *)(v9 + 128) = CurrentThreadId;
      sub_1800065A4(v9, a2);
      sub_1800065A4(v9, a3);
      *(_QWORD *)(v9 + 32) = a1;
      sub_180004710(a1, v9);
      *a4 = v9;
      v10 = 0;
      v9 = 0LL;
    }
    if ( v9 )
      sub_1800286D8(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
