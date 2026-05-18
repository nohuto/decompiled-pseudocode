/*
 * XREFs of sub_180021E64 @ 0x180021E64
 * Callers:
 *     sub_180021490 @ 0x180021490 (sub_180021490.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021E64(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  FARPROC RtlQueryFeatureConfiguration; // rax
  HMODULE ModuleHandleW; // rax

  RtlQueryFeatureConfiguration = (FARPROC)qword_18021F870;
  if ( qword_18021F870 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))RtlQueryFeatureConfiguration)(a1, a2, a3, a4);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlQueryFeatureConfiguration = GetProcAddress(ModuleHandleW, "RtlQueryFeatureConfiguration");
  qword_18021F870 = (__int64)RtlQueryFeatureConfiguration;
  if ( RtlQueryFeatureConfiguration )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))RtlQueryFeatureConfiguration)(a1, a2, a3, a4);
  else
    return 3221225785LL;
}
