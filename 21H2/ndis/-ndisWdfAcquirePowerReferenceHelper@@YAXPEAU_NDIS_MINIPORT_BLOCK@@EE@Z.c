/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A8304
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7150 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8688 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A88DC (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A840C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  unsigned __int8 v6; // dl
  int v7; // ebx

  v7 = ((__int64 (__fastcall *)(void *))a1->DriverHandle->CxBlock->Chars.EvtCxPowerReference)(a1->MiniportAdapterContext);
  if ( v7 < 0 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xFu,
      0x21u,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)a1,
      v7);
  if ( v7 != 259 && (a2 || a3) )
    ndisWdfSelectiveSuspendResumeOperations(a1, v6, v7 < 0);
}
