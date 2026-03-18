/*
 * XREFs of TR_TransfersReclaimed @ 0x1C000BBB4
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1C000BA38 (Bulk_ProcessTransferCompletion.c)
 *     Control_ProcessTransferCompletion @ 0x1C0019B38 (Control_ProcessTransferCompletion.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0019E60 (Control_EP_ReclaimTransfers.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C0042A20 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_TransfersReclaimed(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v2 + 37)
    || (v5 = *(_QWORD *)(v2 + 136), _InterlockedIncrement((volatile signed __int32 *)(v5 + 20)) == *(_DWORD *)(v5 + 8)) )
  {
    ESM_AddEvent((KSPIN_LOCK *)(v2 + 288), 138);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
           WdfDriverGlobals,
           v3,
           "Transfer Ring Tag",
           1267LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
}
