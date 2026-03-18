/*
 * XREFs of IsSetPointerSupported @ 0x1C00CBD7C
 * Callers:
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0063108 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetPointerSupported()
{
  if ( qword_1C0258490 )
    return qword_1C0258490();
  else
    return 3221225659LL;
}
