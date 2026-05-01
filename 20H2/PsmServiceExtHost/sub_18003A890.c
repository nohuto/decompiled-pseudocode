/*
 * XREFs of sub_18003A890 @ 0x18003A890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003A890(__int64 a1, __int64 a2)
{
  FARPROC ProcAddress; // rax
  unsigned int v3; // ebx
  HMODULE v7; // rax

  ProcAddress = (FARPROC)qword_1800B3FE0;
  v3 = 0;
  if ( qword_1800B3FE0 )
    return ((unsigned int (__fastcall *)(__int64, __int64))ProcAddress)(a1, a2);
  v7 = (HMODULE)sub_18003ABD4();
  ProcAddress = GetProcAddress(v7, "RtlDisownModuleHeapAllocation");
  qword_1800B3FE0 = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(__int64, __int64))ProcAddress)(a1, a2);
  return v3;
}
