/*
 * XREFs of MiUnlockStealVm @ 0x140353A68
 * Callers:
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     KeForceDetachProcess @ 0x140317684 (KeForceDetachProcess.c)
 *     MiAttachThreadDone @ 0x140353D64 (MiAttachThreadDone.c)
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
