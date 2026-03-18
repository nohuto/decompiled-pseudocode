/*
 * XREFs of CmpCallbackFatalFilter @ 0x140866A24
 * Callers:
 *     CmpFireCleanupNotifications @ 0x1405CEEC4 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
