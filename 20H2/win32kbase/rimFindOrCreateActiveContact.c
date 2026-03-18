/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C017A304
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     rimHidP_GetUsageValue @ 0x1C01636DC (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C017E274 (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  int v7; // edx
  __int64 v8; // r8
  _QWORD **v9; // rcx
  _QWORD *i; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // ebp
  bool v17; // cf
  bool v18; // zf
  int v19; // edx
  __int64 v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v23, a2, a3, a4) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 37, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  v8 = v23;
  v9 = (_QWORD **)(*(_QWORD *)(a1 + 936) + 16LL * (v23 % *(_DWORD *)(a1 + 944)));
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v23 && (*(_DWORD *)(v11 + 32) & 4) == 0 )
      goto LABEL_10;
  }
  v11 = 0LL;
LABEL_10:
  *a6 = v11 == 0;
  if ( !v11 )
  {
    v12 = *(unsigned int *)(a1 + 24);
    v13 = *(unsigned int *)(a1 + 952);
    if ( (_DWORD)v12 == 7 )
      v14 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 912) + 32LL), 2);
    else
      v14 = 0LL;
    v15 = v13 - 1;
    if ( !(_DWORD)v14 )
      v15 = *(_DWORD *)(a1 + 952);
    v16 = *(_DWORD *)(a1 + 720) - 1;
    if ( (_DWORD)v12 != 7 )
      v16 = *(_DWORD *)(a1 + 720);
    v17 = v15 < v16;
    v18 = v15 == v16;
    if ( v15 > v16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v8, v13);
      v8 = v23;
      v17 = v15 < v16;
      v18 = v15 == v16;
    }
    if ( v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v16;
        LODWORD(v21) = v15 + 1;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          2u,
          1u,
          0x26u,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v21,
          v22);
      }
    }
    else
    {
      if ( !v17 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v8, v13);
        LODWORD(v8) = v23;
      }
      v11 = RIMCmActivateContact(a1, (unsigned int)v8);
      if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 39, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
    }
  }
  return v11;
}
