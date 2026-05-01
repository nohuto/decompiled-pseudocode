/*
 * XREFs of sub_180003FB0 @ 0x180003FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003FB0(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v3; // ebx
  HMODULE ModuleHandleW; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_18005ACF8;
  v3 = 0;
  if ( qword_18005ACF8 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation");
  qword_18005ACF8 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v3;
}
