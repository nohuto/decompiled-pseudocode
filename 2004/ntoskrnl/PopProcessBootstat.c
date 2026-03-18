/*
 * XREFs of PopProcessBootstat @ 0x140A3F58C
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x14056E038 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x140783420 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140783530 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A3F5F0 (PopCheckShutdownMarker.c)
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
