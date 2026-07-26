/*
 * XREFs of ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1C006F214
 * Callers:
 *     ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1C005F050 (-ndisBugcheckHandler@@YAXPEAXK@Z.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01398AC (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeShutdown(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SHUTDOWN_ACTION a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  __int64 v5; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( a2 != NdisShutdownBugCheck && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEEu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2);
  DriverHandle->MiniportDriverCharacteristics.ShutdownHandlerEx(a1->MiniportAdapterContext, a2);
  if ( a2 != NdisShutdownBugCheck && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = a2;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEFu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      v5);
  }
}
