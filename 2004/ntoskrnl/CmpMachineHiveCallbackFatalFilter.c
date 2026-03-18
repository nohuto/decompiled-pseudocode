/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x140866B10
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B8DF0 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 16), BugCheckParameter4);
}
