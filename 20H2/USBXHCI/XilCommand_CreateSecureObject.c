/*
 * XREFs of XilCommand_CreateSecureObject @ 0x1C00305B4
 * Callers:
 *     XilCommand_Create @ 0x1C0017CD8 (XilCommand_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int128 v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+74h] [rbp-24h]
  __int64 v18; // [rsp+78h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v3 = *(_QWORD **)(v1 + 8);
  v4 = v3[14];
  v13 = 0LL;
  v17 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 12;
  v18 = v3[71];
  v5 = SecureChannel_SendRequestSynchronously(v4, &v13, 48LL, &v12, 16);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = v12;
    if ( (int)v12 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = *((_QWORD *)&v12 + 1);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(v3[9], v6, 7, 11, (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids, v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(v3[9], v6, 7, 10, (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids, v5);
  }
  return v7;
}
