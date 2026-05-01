/*
 * XREFs of sub_1800071C0 @ 0x1800071C0
 * Callers:
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1800071C0(__int64 a1)
{
  NTSTATUS result; // eax
  _QWORD JobInformation[8]; // [rsp+40h] [rbp-58h] BYREF

  result = NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = RtlSubscribeWnfStateChangeNotification(a1 + 120, JobInformation[0], 0LL, sub_180031F60, a1, 0LL, 0, 0);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
