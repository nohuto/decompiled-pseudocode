/*
 * XREFs of IpmiHwInitializeContext @ 0x1406528E8
 * Callers:
 *     WheaSelLogInitialize @ 0x140B31348 (WheaSelLogInitialize.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 *     IpmiHwKcsInit @ 0x1406529D4 (IpmiHwKcsInit.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x140652A5C (IpmiLibReadSmbiosRecord38.c)
 *     IpmiLibpParseDeviceInfo @ 0x140652B94 (IpmiLibpParseDeviceInfo.c)
 */

__int64 IpmiHwInitializeContext()
{
  __int128 *v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]

  if ( IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 0LL;
  if ( v0 )
  {
    WheaIpmiContext = *v0;
    xmmword_140C10CB0 = v0[1];
LABEL_7:
    dword_140C10CF4 = 7;
    dword_140C10CE4 = 5000000;
    dword_140C10CF0 = 5000000;
    dword_140C10CEC = 1000;
    dword_140C10CE8 = 30;
    dword_140C10CE0 = 2000000;
    goto LABEL_8;
  }
  v3 = 0LL;
  v4 = 0;
  if ( (int)IpmiLibReadSmbiosRecord38(&v3) >= 0 && (int)IpmiLibpParseDeviceInfo(v2, &v3) >= 0 )
    goto LABEL_7;
LABEL_8:
  if ( DWORD1(WheaIpmiContext) != 1 || IpmiHwContextInitialized((__int64)&WheaIpmiContext) && !BYTE8(xmmword_140C10CB0) )
    return 3221225659LL;
  result = IpmiHwKcsInit();
  if ( (int)result >= 0 )
    byte_140C10CF8 = 1;
  return result;
}
