/*
 * XREFs of sub_18004051C @ 0x18004051C
 * Callers:
 *     sub_180040460 @ 0x180040460 (sub_180040460.c)
 * Callees:
 *     sub_180011DC4 @ 0x180011DC4 (sub_180011DC4.c)
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_1800372D0 @ 0x1800372D0 (sub_1800372D0.c)
 *     sub_1800406A8 @ 0x1800406A8 (sub_1800406A8.c)
 *     sub_180040718 @ 0x180040718 (sub_180040718.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18004051C(__int64 a1)
{
  __int64 result; // rax
  ULONG SecurityDescriptorSize; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE v5[384]; // [rsp+50h] [rbp-198h] BYREF

  sub_180011EE0((__int64)v5);
  result = RtlSubscribeWnfStateChangeNotification(a1 + 288, qword_1800B34C8, 0LL, sub_180044070, a1, 0LL, 0, 0);
  if ( (int)result >= 0 )
  {
    RtlSubscribeWnfStateChangeNotification(a1 + 296, 0x41960A28A3BC1875LL, 0LL, sub_18007BC10, a1, 0LL, 0, 0);
    result = sub_180040718(a1 + 336);
    if ( (int)result >= 0 )
    {
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"O:SYD:(A;;GA;;;SY)",
             1u,
             (PSECURITY_DESCRIPTOR *)(a1 + 736),
             &SecurityDescriptorSize) )
      {
        result = NtCreateWnfStateName(&v4, 2LL, 0LL, 0LL, 0LL, 4, *(_QWORD *)(a1 + 736));
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(a1 + 728) = v4;
          result = sub_1800406A8(a1);
          if ( (int)result >= 0 )
          {
            result = sub_180011DC4(a1, (__int64)L"UiPausing", (__int64)v5);
            if ( (int)result >= 0 )
            {
              sub_1800372D0((__int64)v5, (ULONG *)(a1 + 696));
              return 0LL;
            }
          }
        }
      }
      else
      {
        return 3221225473LL;
      }
    }
  }
  return result;
}
