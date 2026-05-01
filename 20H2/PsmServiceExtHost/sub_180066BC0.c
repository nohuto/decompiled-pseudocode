/*
 * XREFs of sub_180066BC0 @ 0x180066BC0
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_180066C9C @ 0x180066C9C (sub_180066C9C.c)
 *     sub_180066E48 @ 0x180066E48 (sub_180066E48.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066BC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int); // r10
  HMODULE v11; // rax

  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))qword_1800B3FF0;
  if ( qword_1800B3FF0 )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  v11 = sub_18003ABD4();
  qword_1800B3FF0 = (__int64)GetProcAddress(v11, "NtUpdateWnfStateData");
  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))qword_1800B3FF0;
  if ( qword_1800B3FF0 )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  else
    return 3221225785LL;
}
