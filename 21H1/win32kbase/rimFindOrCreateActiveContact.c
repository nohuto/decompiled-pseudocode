/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C0182434
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     rimHidP_GetUsageValue @ 0x1C016BF8C (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C01863A4 (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v8; // r8d
  _QWORD **v9; // rcx
  _QWORD *i; // rdx
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // ebp
  bool v16; // cf
  bool v17; // zf
  int v18; // edx
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v22, a2, a3, a4) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 37, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  v8 = v22;
  v9 = (_QWORD **)(*(_QWORD *)(a1 + 936) + 16LL * (v22 % *(_DWORD *)(a1 + 944)));
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v22 && (*(_DWORD *)(v11 + 32) & 4) == 0 )
      goto LABEL_10;
  }
  v11 = 0LL;
LABEL_10:
  *a6 = v11 == 0;
  if ( !v11 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    if ( v12 == 7 )
      v13 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 912) + 32LL), 2);
    else
      v13 = 0LL;
    v14 = *(_DWORD *)(a1 + 952) - 1;
    if ( !(_DWORD)v13 )
      v14 = *(_DWORD *)(a1 + 952);
    v15 = *(_DWORD *)(a1 + 720) - 1;
    if ( v12 != 7 )
      v15 = *(_DWORD *)(a1 + 720);
    v16 = v14 < v15;
    v17 = v14 == v15;
    if ( v14 > v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v8 = v22;
      v16 = v14 < v15;
      v17 = v14 == v15;
    }
    if ( v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v15;
        LODWORD(v20) = v14 + 1;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          2u,
          1u,
          0x26u,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v20,
          v21);
      }
    }
    else
    {
      if ( !v16 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
        v8 = v22;
      }
      v11 = RIMCmActivateContact(a1, v8);
      if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 39, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
    }
  }
  return v11;
}
