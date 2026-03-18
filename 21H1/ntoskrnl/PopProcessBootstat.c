/*
 * XREFs of PopProcessBootstat @ 0x140A36200
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x14056D9E8 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x14077AA20 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x14077AB30 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A36264 (PopCheckShutdownMarker.c)
 */

__int64 PopProcessBootstat()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  v2 = 0;
  v1 = 0LL;
  result = RtlGetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
  if ( (int)result >= 0 )
  {
    if ( HIDWORD(v1) )
    {
      PopTraceBootError();
      v2 = 0;
      v1 = 0LL;
      return RtlSetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
    }
  }
  return result;
}
