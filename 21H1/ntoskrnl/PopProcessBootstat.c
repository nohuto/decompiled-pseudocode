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

int PopProcessBootstat()
{
  int result; // eax
  __int128 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  v2 = 0;
  DataBuffer = 0LL;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(DataBuffer) )
    {
      PopTraceBootError();
      v2 = 0;
      DataBuffer = 0LL;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
