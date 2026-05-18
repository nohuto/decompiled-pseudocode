/*
 * XREFs of sub_180021BEC @ 0x180021BEC
 * Callers:
 *     sub_180020440 @ 0x180020440 (sub_180020440.c)
 *     sub_180021174 @ 0x180021174 (sub_180021174.c)
 *     sub_18002220C @ 0x18002220C (sub_18002220C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021BEC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, __int64, __int64, int, int); // r10
  HMODULE ModuleHandleW; // rax

  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, a4, a5, a6, a7);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  NtUpdateWnfStateData = (__int64)GetProcAddress(ModuleHandleW, "NtUpdateWnfStateData");
  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, a4, a5, a6, a7);
  else
    return 3221225785LL;
}
