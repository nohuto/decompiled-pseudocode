/*
 * XREFs of UsbhExceptionTrace @ 0x1C004A8FC
 * Callers:
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002E288 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C0041184 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C00412A8 (log_xstr.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004815C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C004B170 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_ds @ 0x1C004B238 (WPP_RECORDER_SF_ds.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004B378 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_sd @ 0x1C004B440 (WPP_RECORDER_SF_sd.c)
 */

void __fastcall UsbhExceptionTrace(char a1, __int64 a2, __int64 a3, int a4)
{
  __int128 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  __int128 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xAu,
          (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v16, a2, a1);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v16, *(_DWORD *)a3, *(_QWORD *)(a3 + 8));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_sd(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                a3,
                a4,
                v16,
                *(_QWORD *)(a2 + 592),
                *(_DWORD *)(a2 + 584));
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1u,
                  0xEu,
                  (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_Dd(
                    WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    a3,
                    a4,
                    v16,
                    *(_DWORD *)(a2 + 24),
                    *(_DWORD *)(a2 + 28));
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LODWORD(v17) = *(unsigned __int16 *)(a2 + 32);
                    WPP_RECORDER_SF_dq(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      *(unsigned __int16 *)(a2 + 32),
                      a3,
                      0x10u,
                      (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                      v17,
                      *(_QWORD *)(a2 + 40));
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v7 = log_xstr(&v20, *(unsigned __int16 *)(a2 + 32), *(_QWORD *)(a2 + 40));
                    v9 = *(_QWORD *)(v8 + 64);
                    v19 = *v7;
                    WPP_RECORDER_SF__HEX_(
                      v9,
                      v10,
                      1u,
                      0x11u,
                      (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                      (__int64)&v19);
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( *(_DWORD *)a3 == 4 )
    {
      v11 = *(_DWORD **)(a2 + 40);
      if ( v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x12u,
              (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v17) = *v11;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0x13u,
                (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                v17);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v18) = v11[1];
                LODWORD(v17) = v18;
                WPP_RECORDER_SF_dD(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  a3,
                  0x14u,
                  (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                  v17,
                  v18);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v18) = v11[3];
                  LODWORD(v17) = v11[2];
                  WPP_RECORDER_SF_DDD(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    a3,
                    0x15u,
                    (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                    v17,
                    v18,
                    v11[4]);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v12 = log_xstr(&v20, 0x40uLL, (__int64)(v11 + 5));
                    v14 = *(_QWORD *)(v13 + 64);
                    v19 = *v12;
                    WPP_RECORDER_SF__HEX_(
                      v14,
                      v15,
                      1u,
                      v15 - 42,
                      (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                      (__int64)&v19);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
