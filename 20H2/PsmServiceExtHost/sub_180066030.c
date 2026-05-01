/*
 * XREFs of sub_180066030 @ 0x180066030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066030(unsigned int a1)
{
  FARPROC ProcAddress; // rax
  unsigned int v2; // ebx
  HMODULE v4; // rax

  ProcAddress = (FARPROC)qword_1800B5020;
  v2 = 0;
  if ( qword_1800B5020 )
    return ((unsigned int (__fastcall *)(_QWORD))ProcAddress)(a1);
  v4 = sub_18003ABD4();
  ProcAddress = GetProcAddress(v4, "RtlNtStatusToDosErrorNoTeb");
  qword_1800B5020 = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(_QWORD))ProcAddress)(a1);
  return v2;
}
