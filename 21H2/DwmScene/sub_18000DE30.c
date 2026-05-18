/*
 * XREFs of sub_18000DE30 @ 0x18000DE30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char sub_18000DE30()
{
  __int64 (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (__int64 (*)(void))qword_18021F628;
  v1 = 0;
  if ( qword_18021F628 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_18021F628 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
