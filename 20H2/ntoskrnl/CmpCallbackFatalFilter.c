/*
 * XREFs of CmpCallbackFatalFilter @ 0x14086C444
 * Callers:
 *     CmpFireCleanupNotifications @ 0x1405D5368 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
