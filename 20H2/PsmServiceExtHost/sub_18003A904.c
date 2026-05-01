/*
 * XREFs of sub_18003A904 @ 0x18003A904
 * Callers:
 *     sub_18003A980 @ 0x18003A980 (sub_18003A980.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003A904(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FARPROC ProcAddress; // rax
  HMODULE v8; // rax

  ProcAddress = (FARPROC)qword_1800B3FA0;
  if ( qword_1800B3FA0 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))ProcAddress)(a1, a2, 0LL, a4);
  v8 = (HMODULE)sub_18003ABD4();
  ProcAddress = GetProcAddress(v8, "RtlRegisterFeatureConfigurationChangeNotification");
  qword_1800B3FA0 = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))ProcAddress)(a1, a2, 0LL, a4);
  else
    return 3221225785LL;
}
