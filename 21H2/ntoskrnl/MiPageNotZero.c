/*
 * XREFs of MiPageNotZero @ 0x14054F3B0
 * Callers:
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(__m128i *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  __m128i *v7; // r10
  __int64 v8; // r9
  signed __int64 v9; // rax
  ULONG_PTR v10; // rcx
  ULONG v11; // ebp
  __int64 v12; // rbx

  _InterlockedAdd(&dword_140C4E814, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  v8 = 4096LL;
  if ( BugCheckParameter1 < &BugCheckParameter1[256] )
  {
    while ( 1 )
    {
      if ( v7->m128i_i32[0] )
      {
        v9 = (char *)v7 - (char *)BugCheckParameter1;
        if ( v8 != 4096 )
          v9 = v8;
        ++v4;
        v8 = v9;
        if ( v4 != 1 )
          goto LABEL_12;
        v5 = (unsigned __int16)v7 & 0xFFF;
        v6 = v7->m128i_i32[0];
        if ( ((v7->m128i_i32[0] - 1) & v7->m128i_i32[0]) != 0 )
          break;
      }
      v7 = (__m128i *)((char *)v7 + 4);
      if ( v7 >= &BugCheckParameter1[256] )
        goto LABEL_10;
    }
    v4 = 2;
  }
LABEL_10:
  if ( v4 == 1 )
    _InterlockedAdd(&dword_140C4E810, 1u);
LABEL_12:
  v10 = 0LL;
  v11 = 299;
  if ( v4 != 1 )
  {
    v10 = v8;
    v11 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v11, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, v10, -(__int64)(v4 != 1) & 0x1000);
  v12 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 320), 0, 0);
  if ( (ULONG_PTR *)v12 != &MiSystemPartition )
    KeSetEvent(qword_140C50F00, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140C4E77C, 1, 0) )
  {
    stru_140C4E790.List.Flink = 0LL;
    dword_140C4E780 = v6;
    qword_140C4E788 = v5 + (BugCheckParameter2 << 12);
    stru_140C4E790.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_140C4E790.Parameter = &dword_140C4E778;
    dword_140C4E778 = v11;
    ExQueueWorkItem(&stru_140C4E790, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
