/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000D648
 * Callers:
 *     DllMain @ 0x18000A9A8 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EventRegister_EventSetInformation()
{
  GUID v0; // xmm0
  signed int v1; // eax
  unsigned int v2; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v0 = (GUID)*((_OWORD *)off_180024008 - 1);
  xmmword_180024028 = 0LL;
  ProviderId = v0;
  v1 = EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_180024000, &RegHandle);
  v2 = v1;
  if ( v1 )
  {
    if ( v1 > 0 )
      return (unsigned __int16)v1 | 0x80070000;
  }
  else
  {
    EventSetInformation(RegHandle, 2LL, off_180024008, *(unsigned __int16 *)off_180024008);
  }
  return v2;
}
