/*
 * XREFs of sub_180021EF8 @ 0x180021EF8
 * Callers:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021EF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FARPROC RtlRegisterFeatureConfigurationChangeNotification; // rax
  HMODULE ModuleHandleW; // rax

  RtlRegisterFeatureConfigurationChangeNotification = (FARPROC)qword_18021F878;
  if ( qword_18021F878 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlRegisterFeatureConfigurationChangeNotification)(
             a1,
             a2,
             a3,
             a4);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlRegisterFeatureConfigurationChangeNotification = GetProcAddress(
                                                        ModuleHandleW,
                                                        "RtlRegisterFeatureConfigurationChangeNotification");
  qword_18021F878 = (__int64)RtlRegisterFeatureConfigurationChangeNotification;
  if ( RtlRegisterFeatureConfigurationChangeNotification )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlRegisterFeatureConfigurationChangeNotification)(
             a1,
             a2,
             a3,
             a4);
  else
    return 3221225785LL;
}
