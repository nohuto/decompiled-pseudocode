/*
 * XREFs of MiUnlockStealVm @ 0x14025B2B0
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiAttachThreadDone @ 0x1402FA198 (MiAttachThreadDone.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rdi

  MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_OWORD *)(a1 + 72), 0);
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
