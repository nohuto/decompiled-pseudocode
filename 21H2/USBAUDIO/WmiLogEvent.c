/*
 * XREFs of WmiLogEvent @ 0x1C000365C
 * Callers:
 *     WmiLogStreamStateChange @ 0x1C0003738 (WmiLogStreamStateChange.c)
 *     WmiLogPowerStateChange @ 0x1C0003864 (WmiLogPowerStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WmiLogEvent(__int64 a1, unsigned __int8 a2, __int128 *a3, int a4, int a5, int a6, int a7)
{
  __int128 v7; // xmm1
  NTSTATUS result; // eax
  _DWORD v9[8]; // [rsp+20h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-19h] BYREF
  __int128 v11; // [rsp+42h] [rbp-17h]
  _BYTE v12[44]; // [rsp+52h] [rbp-7h] BYREF
  __int16 v13; // [rsp+7Eh] [rbp+25h]

  v7 = *a3;
  v13 = 0;
  result = -1073741823;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 4 )
  {
    v9[5] = 0;
    v9[0] = a2;
    v9[2] = a5;
    v9[3] = a6;
    v9[4] = a7;
    *(_QWORD *)&v12[30] = v9;
    *(_QWORD *)((char *)&v11 + 6) = ExBusWmiLoggerHandle;
    WnodeEventItem = 64;
    v9[1] = a4;
    *(_DWORD *)&v12[38] = 24;
    *(_DWORD *)&v12[26] = 1179648;
    BYTE2(v11) = a2;
    BYTE3(v11) = 4;
    *(_OWORD *)&v12[6] = v7;
    return IoWMIWriteEvent(&WnodeEventItem);
  }
  return result;
}
