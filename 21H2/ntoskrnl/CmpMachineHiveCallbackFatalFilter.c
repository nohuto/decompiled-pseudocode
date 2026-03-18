/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x1409101DC
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x140861F60 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 80), BugCheckParameter4);
}
