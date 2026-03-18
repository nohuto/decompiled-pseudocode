/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0018BD4 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsHandlePresentInCollection @ 0x1C00325E0 (Controller_IsHandlePresentInCollection.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0032F20 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x1C00357B8 (WPP_RECORDER_SF_II.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  unsigned int v13; // ebx
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 *v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  v7 = 0LL;
  v8 = (*(char (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061428);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v22) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 289);
    }
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v23,
          0LL);
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( !*v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v15, 4, 290, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
      }
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( (_BYTE)v8 == 1 )
    {
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      v7 = v16;
      if ( !v16 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v13);
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v12 + 72),
          v17,
          4,
          291,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          124);
        goto LABEL_5;
      }
      v18 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                          WdfDriverGlobals,
                          v16,
                          off_1C00613B0)
                      + 24);
      if ( v18 != *v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v12 + 72),
            2u,
            4u,
            0x124u,
            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
            *v23,
            v18);
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v23;
      if ( !Controller_IsHandlePresentInCollection(v12, *v23) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_i(
            *(_QWORD *)(v12 + 72),
            v19,
            4,
            293,
            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
            v7);
        }
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_1C00613B0)
                  + 48) )
    {
      if ( *(_DWORD *)(v12 + 392) == 1 )
      {
        v21 = Controller_StopTimeTrackingForHandle(v12, v7, 1);
        v13 = v21;
        if ( v21 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              *(_QWORD *)(v12 + 72),
              2u,
              4u,
              0x127u,
              (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
              v7,
              v21);
          if ( !(_BYTE)v8 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v7);
        }
      }
      else
      {
        v13 = -1073741436;
      }
    }
    else
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v13);
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v12 + 72),
        v20,
        4,
        294,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v22) = v13;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      5u,
      4u,
      0x128u,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      v22,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v13);
}
