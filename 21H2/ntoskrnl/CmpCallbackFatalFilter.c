/*
 * XREFs of CmpCallbackFatalFilter @ 0x1409100F4
 * Callers:
 *     CmpFireCleanupNotifications @ 0x1406C25A0 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
