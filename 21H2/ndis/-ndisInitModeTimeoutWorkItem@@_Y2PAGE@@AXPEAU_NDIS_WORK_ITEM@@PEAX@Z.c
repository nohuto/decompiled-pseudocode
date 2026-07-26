/*
 * XREFs of ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0109EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0109F80 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010A01C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_40794e22ea4b3ffbe11f0bfca6bec0f0_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport(a2, 0x17u);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_40794e22ea4b3ffbe11f0bfca6bec0f0_Traceguids,
      a2);
}
