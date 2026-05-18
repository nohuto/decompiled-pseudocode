/*
 * XREFs of sub_180021DF8 @ 0x180021DF8
 * Callers:
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021DF8(__int64 a1)
{
  FARPROC RtlNotifyFeatureUsage; // rax
  HMODULE ModuleHandleW; // rax

  RtlNotifyFeatureUsage = (FARPROC)qword_18021F888;
  if ( qword_18021F888 )
    return ((__int64 (__fastcall *)(__int64))RtlNotifyFeatureUsage)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlNotifyFeatureUsage = GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
  qword_18021F888 = (__int64)RtlNotifyFeatureUsage;
  if ( RtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(__int64))RtlNotifyFeatureUsage)(a1);
  else
    return 3221225785LL;
}
