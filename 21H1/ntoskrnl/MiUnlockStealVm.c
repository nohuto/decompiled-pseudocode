/*
 * XREFs of MiUnlockStealVm @ 0x14034B18C
 * Callers:
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 * Callees:
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  struct _DMA_ADAPTER *v4; // rdi

  MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_OWORD *)(a1 + 72), 0, v2, v3);
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v4 = *(struct _DMA_ADAPTER **)(a1 + 56);
    if ( v4 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      HalPutDmaAdapter(v4);
    }
  }
}
