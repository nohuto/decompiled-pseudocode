/*
 * XREFs of sub_180004A30 @ 0x180004A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004A30(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v3; // ebx
  HMODULE ModuleHandleW; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_18004FDF0;
  v3 = 0;
  if ( qword_18004FDF0 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation");
  qword_18004FDF0 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v3;
}
