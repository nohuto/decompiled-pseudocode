/*
 * XREFs of sub_1800049B0 @ 0x1800049B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN sub_1800049B0()
{
  BOOLEAN (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (BOOLEAN (*)(void))qword_18004FD90;
  v1 = 0;
  if ( qword_18004FD90 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = (BOOLEAN (*)(void))GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_18004FD90 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
