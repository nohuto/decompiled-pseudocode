/*
 * XREFs of NtUserQuerySendMessage @ 0x1C0200490
 * Callers:
 *     <none>
 * Callees:
 *     _QuerySendMessage @ 0x1C021DFBC (_QuerySendMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  if ( *(_QWORD *)(v2 + 512) )
  {
    v8 = QuerySendMessage(v2, &v10);
    if ( v8 && a1 )
    {
      v7 = *((_QWORD *)&v11 + 1);
      if ( *((_QWORD *)&v11 + 1) > MmUserProbeAddress )
        v7 = 0LL;
      *((_QWORD *)&v11 + 1) = v7;
      HIDWORD(v10) = 0;
      HIDWORD(v12) = 0;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v10;
      a1[1] = v11;
      a1[2] = v12;
    }
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
