/*
 * XREFs of sub_180021AD4 @ 0x180021AD4
 * Callers:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_1800042EC @ 0x1800042EC (sub_1800042EC.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_180023764 @ 0x180023764 (sub_180023764.c)
 *     sub_180023A40 @ 0x180023A40 (sub_180023A40.c)
 *     sub_1800255FC @ 0x1800255FC (sub_1800255FC.c)
 *     sub_1800632E8 @ 0x1800632E8 (sub_1800632E8.c)
 * Callees:
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180021AD4(_QWORD *a1, const void *a2, unsigned int a3, __int64 a4)
{
  size_t v5; // rbp
  unsigned int v8; // ebx
  _QWORD *Heap; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  RtlAcquireSRWLockExclusive(a4 + 24);
  v8 = 0;
  if ( *(_BYTE *)(a4 + 32) || (int)RtlQueryWnfMetaNotification(&v13, 2LL, *a1, 0LL) >= 0 && !v13 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v5 + 28));
    if ( Heap )
    {
      Heap[2] = *a1;
      memcpy((char *)Heap + 28, a2, v5);
      *((_DWORD *)Heap + 6) = v5;
      v11 = *(_QWORD **)(a4 + 8);
      if ( *v11 != a4 )
        __fastfail(3u);
      *Heap = a4;
      Heap[1] = v11;
      *v11 = Heap;
      *(_QWORD *)(a4 + 8) = Heap;
      if ( !*(_BYTE *)(a4 + 32) )
      {
        v12 = *(_QWORD *)(a4 + 16);
        *(_BYTE *)(a4 + 32) = 1;
        TpPostWork(v12);
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = RtlPublishWnfStateData(*a1, 0LL, a2, (unsigned int)v5, 0LL);
  }
  RtlReleaseSRWLockExclusive(a4 + 24);
  return v8;
}
