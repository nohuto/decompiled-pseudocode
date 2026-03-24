/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x14086A160
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CB970 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 16), BugCheckParameter4);
}
