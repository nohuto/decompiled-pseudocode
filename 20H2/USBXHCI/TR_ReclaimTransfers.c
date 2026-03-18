/*
 * XREFs of TR_ReclaimTransfers @ 0x1C000BC5C
 * Callers:
 *     ESM_ReclaimingTransfersAfterEndpointStop @ 0x1C000F270 (ESM_ReclaimingTransfersAfterEndpointStop.c)
 *     ESM_RequeuingPendingTransfersAfterHaltClear @ 0x1C004F980 (ESM_RequeuingPendingTransfersAfterHaltClear.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ReclaimTransfers(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    v2,
    "Transfer Ring Tag",
    1248LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 72LL))(a1);
}
