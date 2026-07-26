/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A88DC
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BB00 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C00735B8 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A747C (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0084318 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A5A20 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C00A5A98 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00A6F68 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A8304 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  __int64 SelectiveSuspend; // rbx
  char v7; // bp
  KIRQL v8; // r15
  _DWORD *v9; // rcx
  PKSPIN_LOCK v10; // rcx
  __int64 v11; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]

  SelectiveSuspend = (__int64)a1->SelectiveSuspend;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)SelectiveSuspend, 1) )
  {
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v9, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
  }
  else
  {
    if ( !*(_DWORD *)(SelectiveSuspend + 512)
      && !*(_DWORD *)(SelectiveSuspend + 516)
      && !*(_DWORD *)(SelectiveSuspend + 528)
      && !*(_DWORD *)(SelectiveSuspend + 532)
      && !*(_DWORD *)(SelectiveSuspend + 520)
      && !*(_DWORD *)(SelectiveSuspend + 524)
      && !*(_DWORD *)(SelectiveSuspend + 576)
      && !*(_DWORD *)(SelectiveSuspend + 508) )
    {
      v7 = 1;
      KeClearEvent((PRKEVENT)(SelectiveSuspend + 272));
    }
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, a2, a3);
    KeReleaseSpinLock(v10, v8);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x25u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        (char)a1,
        a2);
    if ( (byte_1C00E6181 & 8) != 0 )
    {
      LODWORD(Timeout) = a2;
      McTemplateK0qq_EtwWriteTransfer(
        v11,
        &SSResumeRequested,
        &a1->InterfaceGuid,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        (__int64)Timeout);
    }
    if ( v7 )
      ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
    else
      KeWaitForSingleObject((PVOID)(SelectiveSuspend + 272), Executive, 0, 0, 0LL);
  }
}
