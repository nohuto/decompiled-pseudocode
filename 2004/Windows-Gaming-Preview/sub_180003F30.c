/*
 * XREFs of sub_180003F30 @ 0x180003F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN sub_180003F30()
{
  BOOLEAN (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (BOOLEAN (*)(void))qword_18005AC58;
  v1 = 0;
  if ( qword_18005AC58 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = (BOOLEAN (*)(void))GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_18005AC58 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
