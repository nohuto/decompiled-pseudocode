/*
 * XREFs of sub_18000DD50 @ 0x18000DD50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char sub_18000DD50()
{
  __int64 (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (__int64 (*)(void))qword_1802184F8;
  v1 = 0;
  if ( qword_1802184F8 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_1802184F8 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
