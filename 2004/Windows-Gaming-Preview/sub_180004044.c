/*
 * XREFs of sub_180004044 @ 0x180004044
 * Callers:
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_180004674 @ 0x180004674 (sub_180004674.c)
 *     sub_180004CAC @ 0x180004CAC (sub_180004CAC.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 *     sub_180007110 @ 0x180007110 (sub_180007110.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004044(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, __int64, __int64); // r10
  HMODULE ModuleHandleW; // rax

  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))NtQueryWnfStateData;
  if ( NtQueryWnfStateData )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  NtQueryWnfStateData = (__int64)GetProcAddress(ModuleHandleW, "NtQueryWnfStateData");
  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))NtQueryWnfStateData;
  if ( NtQueryWnfStateData )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  else
    return 3221225785LL;
}
