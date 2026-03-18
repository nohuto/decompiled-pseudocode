/*
 * XREFs of IsPostIAMShellHookMessageExSupported @ 0x1C0062A28
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006DFDC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPostIAMShellHookMessageExSupported()
{
  if ( qword_1C0252A88 )
    return qword_1C0252A88();
  else
    return 3221225659LL;
}
