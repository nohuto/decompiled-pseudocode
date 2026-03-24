/*
 * XREFs of MiUnlockStealVm @ 0x14026D310
 * Callers:
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 * Callees:
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x1402BA388 (KeForceDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiAttachThreadDone @ 0x1402EF448 (MiAttachThreadDone.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rdi

  MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess(a1 + 72, 0LL);
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v2 = *(struct _DMA_ADAPTER **)(a1 + 56);
    if ( v2 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      HalPutDmaAdapter(v2);
    }
  }
}
