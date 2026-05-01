/*
 * XREFs of sub_18003AB4C @ 0x18003AB4C
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_18003A5D0 @ 0x18003A5D0 (sub_18003A5D0.c)
 *     sub_18003A9F8 @ 0x18003A9F8 (sub_18003A9F8.c)
 *     sub_180066C9C @ 0x180066C9C (sub_180066C9C.c)
 *     sub_180066E48 @ 0x180066E48 (sub_180066E48.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003AB4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, __int64, __int64); // r10
  HMODULE v10; // rax

  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))qword_1800B3FD8;
  if ( qword_1800B3FD8 )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  v10 = (HMODULE)sub_18003ABD4();
  qword_1800B3FD8 = (__int64)GetProcAddress(v10, "NtQueryWnfStateData");
  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))qword_1800B3FD8;
  if ( qword_1800B3FD8 )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  else
    return 3221225785LL;
}
