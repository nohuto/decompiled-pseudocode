/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x1408657F0
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B5C80 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 16), BugCheckParameter4);
}
