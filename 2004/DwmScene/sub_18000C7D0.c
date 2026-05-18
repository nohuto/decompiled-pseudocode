/*
 * XREFs of sub_18000C7D0 @ 0x18000C7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_18000C7D0())(void)
{
  HMODULE ModuleHandleW; // rax
  __int64 (*result)(void); // rax

  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  result = GetProcAddress(ModuleHandleW, "LdrFastFailInLoaderCallout");
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
