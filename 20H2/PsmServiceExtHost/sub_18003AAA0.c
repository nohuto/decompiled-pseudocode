/*
 * XREFs of sub_18003AAA0 @ 0x18003AAA0
 * Callers:
 *     sub_18003A9F8 @ 0x18003A9F8 (sub_18003A9F8.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003AAA0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD); // r10
  HMODULE v10; // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))qword_1800B3FD0;
  if ( qword_1800B3FD0 )
    return v5(a1, a2, a3, a4, a5, 0LL, 0, 0);
  v10 = (HMODULE)sub_18003ABD4();
  qword_1800B3FD0 = (__int64)GetProcAddress(v10, "RtlSubscribeWnfStateChangeNotification");
  v5 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))qword_1800B3FD0;
  if ( qword_1800B3FD0 )
    return v5(a1, a2, a3, a4, a5, 0LL, 0, 0);
  else
    return 3221225785LL;
}
