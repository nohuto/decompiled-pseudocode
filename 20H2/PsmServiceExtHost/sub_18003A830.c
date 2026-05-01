/*
 * XREFs of sub_18003A830 @ 0x18003A830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

char sub_18003A830()
{
  __int64 (*ProcAddress)(void); // rax
  char v1; // bl
  HMODULE v3; // rax

  ProcAddress = (__int64 (*)(void))qword_1800B3FC0;
  v1 = 0;
  if ( qword_1800B3FC0 )
    return ProcAddress();
  v3 = (HMODULE)sub_18003ABD4();
  ProcAddress = GetProcAddress(v3, "RtlDllShutdownInProgress");
  qword_1800B3FC0 = (__int64)ProcAddress;
  if ( ProcAddress )
    return ProcAddress();
  return v1;
}
