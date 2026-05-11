/*
 * XREFs of WmiLogStreamPosition @ 0x1C00035F0
 * Callers:
 *     PropertyGetAudioPosition @ 0x1C0027BC0 (PropertyGetAudioPosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0027D00 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  NTSTATUS result; // eax
  __int16 WnodeEventItem; // [rsp+20h] [rbp-19h] BYREF
  __int128 v4; // [rsp+22h] [rbp-17h]
  _BYTE v5[44]; // [rsp+32h] [rbp-7h] BYREF
  __int16 v6; // [rsp+5Eh] [rbp+25h]
  _DWORD v7[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v8; // [rsp+68h] [rbp+2Fh]
  __int64 v9; // [rsp+70h] [rbp+37h]
  __int64 v10; // [rsp+78h] [rbp+3Fh]
  __int64 v11; // [rsp+80h] [rbp+47h]

  v6 = 0;
  result = -1073741823;
  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 5 )
  {
    v8 = a1[2];
    v9 = a1[3];
    v10 = a1[1];
    v11 = a1[4];
    *(_QWORD *)&v5[30] = v7;
    *(_QWORD *)((char *)&v4 + 6) = ExBusWmiLoggerHandle;
    WnodeEventItem = 64;
    v7[0] = 48;
    v7[1] = a2;
    *(_DWORD *)&v5[38] = 40;
    *(_DWORD *)&v5[26] = 1179648;
    WORD1(v4) = 1328;
    *(_OWORD *)&v5[6] = ExBus_Position_GUID;
    return IoWMIWriteEvent(&WnodeEventItem);
  }
  return result;
}
