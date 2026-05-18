/*
 * XREFs of sub_180021B3C @ 0x180021B3C
 * Callers:
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 *     sub_18001C3CC @ 0x18001C3CC (sub_18001C3CC.c)
 *     sub_180021174 @ 0x180021174 (sub_180021174.c)
 *     sub_18002220C @ 0x18002220C (sub_18002220C.c)
 *     sub_1800223C0 @ 0x1800223C0 (sub_1800223C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021B3C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  HMODULE ModuleHandleW; // rax

  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))NtQueryWnfStateData;
  if ( NtQueryWnfStateData )
    return v6(a1, a2, a3, a4, a5, a6);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  NtQueryWnfStateData = (__int64)GetProcAddress(ModuleHandleW, "NtQueryWnfStateData");
  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))NtQueryWnfStateData;
  if ( NtQueryWnfStateData )
    return v6(a1, a2, a3, a4, a5, a6);
  else
    return 3221225785LL;
}
