/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00135F0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0014D58 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C001825C (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C00326C0 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x1C0034D38 (WPP_RECORDER_SF_II.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // ebx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  LOBYTE(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060428);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 287);
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v18,
          0LL);
  if ( v13 >= 0 )
  {
    if ( !*v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v10, 4, 288, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
      }
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( v8 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      if ( v7 != *v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v12 + 72),
            v10,
            4,
            289,
            (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
            *v18,
            v7);
        }
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v18;
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_1C00603B0)
                  + 40) )
    {
      if ( *(_DWORD *)(v12 + 392) == 1 )
      {
        LOBYTE(v15) = 1;
        v17 = Controller_StopTimeTrackingForHandle(v12, v7, v15, v16);
        v13 = v17;
        if ( v17 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_qd(
              *(_QWORD *)(v12 + 72),
              v10,
              4,
              291,
              (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
              v7,
              v17);
          }
          if ( !v8 )
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
                 (unsigned int)v13);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v12 + 72),
        v10,
        4,
        290,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      v10,
      4,
      292,
      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
      v13,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v13);
}
