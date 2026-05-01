/*
 * XREFs of sub_180004F0C @ 0x180004F0C
 * Callers:
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall sub_180004F0C(__int64 a1)
{
  FARPROC result; // rax
  HMODULE ModuleHandleW; // rax

  result = (FARPROC)qword_18005AB70;
  if ( qword_18005AB70 )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  result = GetProcAddress(ModuleHandleW, "RtlUnregisterFeatureConfigurationChangeNotification");
  qword_18005AB70 = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
