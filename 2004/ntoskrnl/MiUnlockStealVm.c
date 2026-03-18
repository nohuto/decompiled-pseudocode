/*
 * XREFs of MiUnlockStealVm @ 0x14031BE4C
 * Callers:
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MiAttachThreadDone @ 0x14031E494 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
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
