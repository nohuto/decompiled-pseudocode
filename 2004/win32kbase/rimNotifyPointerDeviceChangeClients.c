/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C0168140
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C016828C (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ApiSetPostPointerEventMessage @ 0x1C01CC760 (ApiSetPostPointerEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v4; // ebx
  int v5; // r14d
  __int64 v7; // rbp
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int result; // eax

  v4 = 0;
  v5 = a4;
  v7 = a2;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3, a4);
  v9 = a3[26];
  if ( a1[498] != v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v4 = 32;
          else
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
        }
        else
        {
          v4 = 16;
        }
      }
      else
      {
        v4 = 8;
      }
    }
    else
    {
      v4 = 4;
    }
  }
  v13 = a3[27];
  if ( a1[499] != v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v4 |= 0x800u;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 10, (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
        }
      }
      else
      {
        v4 |= 0x40u;
      }
    }
    else
    {
      v4 |= 0x80u;
    }
  }
  if ( a1[501] != a3[29] || a1[502] != a3[30] )
    v4 |= 0x400u;
  if ( a1[503] != a3[31] || a1[504] != a3[32] )
    v4 |= 0x200u;
  result = v4 | 0x100;
  if ( !v5 )
    result = v4;
  if ( result )
    return ApiSetPostPointerEventMessage(v7, a2, result);
  return result;
}
