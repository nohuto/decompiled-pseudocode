/*
 * XREFs of sub_1800040EC @ 0x1800040EC
 * Callers:
 *     sub_180004674 @ 0x180004674 (sub_180004674.c)
 *     sub_180004CAC @ 0x180004CAC (sub_180004CAC.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800040EC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int); // r10
  HMODULE ModuleHandleW; // rax

  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  NtUpdateWnfStateData = (__int64)GetProcAddress(ModuleHandleW, "NtUpdateWnfStateData");
  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  else
    return 3221225785LL;
}
