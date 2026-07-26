/*
 * XREFs of ?ndisFInvokeCancelOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAX@Z @ 0x1C006772C
 * Callers:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C00995D4 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(struct _NDIS_FILTER_BLOCK *a1, void *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi

  FilterDriver = a1->FilterDriver;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x6Au,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
  FilterDriver->DefaultFilterCharacteristics.CancelOidRequestHandler(a1->FilterModuleContext, a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x6Bu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
}
