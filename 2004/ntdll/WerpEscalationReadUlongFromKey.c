/*
 * XREFs of WerpEscalationReadUlongFromKey @ 0x1800DE60C
 * Callers:
 *     WerpEscalationIsDisabled @ 0x1800DE4AC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DE55C (WerpEscalationIsWMRSendStringSet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 */

__int64 __fastcall WerpEscalationReadUlongFromKey(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v6; // [rsp+4Ch] [rbp-2Ch]
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = NtQueryValueKey();
  if ( (_DWORD)result == -1073741772 )
    return 3221225524LL;
  if ( (int)result >= 0 )
  {
    if ( v6 == 4 && v7 == 4 )
    {
      *a3 = v8;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
