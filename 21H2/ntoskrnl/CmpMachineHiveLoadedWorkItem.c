/*
 * XREFs of CmpMachineHiveLoadedWorkItem @ 0x140861F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpMachineHiveCallbackFatalFilter @ 0x1409101DC (CmpMachineHiveCallbackFatalFilter.c)
 */

__int64 __fastcall CmpMachineHiveLoadedWorkItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 96) = KeGetCurrentThread();
  result = (*(__int64 (__fastcall **)(_QWORD))(a2 + 80))(*(_QWORD *)(a2 + 88));
  *(_QWORD *)(a2 + 96) = 0LL;
  return result;
}
