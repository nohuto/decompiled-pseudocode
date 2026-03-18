/*
 * XREFs of HUBFDO_ReleaseWdfPowerReference @ 0x1C000CCC0
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x1C00088A0 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x1C00088E0 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 *     HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x1C0008930 (HUBHSM_SignalingPnPPowerEventOnPendingStop.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C0008A90 (HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset.c)
 *     HUBHSM_WaitingForEnableInterruptsOnSx @ 0x1C0008B00 (HUBHSM_WaitingForEnableInterruptsOnSx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBFDO_ReleaseWdfPowerReference(__int64 a1)
{
  KIRQL v2; // bl

  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    v2 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 16),
      0LL,
      1969LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    KeLowerIrql(v2);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFBFFF);
  }
}
