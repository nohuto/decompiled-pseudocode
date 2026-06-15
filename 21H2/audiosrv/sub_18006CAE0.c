/*
 * XREFs of sub_18006CAE0 @ 0x18006CAE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CC20 @ 0x18006CC20 (sub_18006CC20.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006CAE0(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v3; // ebx
  HMODULE v6; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_18019E3F8;
  v3 = 0;
  if ( qword_18019E3F8 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  v6 = (HMODULE)sub_18006CC20();
  RtlDisownModuleHeapAllocation = GetProcAddress(v6, "RtlDisownModuleHeapAllocation");
  qword_18019E3F8 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v3;
}
