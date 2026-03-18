/*
 * XREFs of IsSetPointerSupported @ 0x1C00CB83C
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0032EB4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetPointerSupported()
{
  if ( qword_1C02504D0 )
    return qword_1C02504D0();
  else
    return 3221225659LL;
}
