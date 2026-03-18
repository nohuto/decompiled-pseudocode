/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0016398 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C003465C (Controller_TranslateFrameNumberToQpcValue.c)
 *     WPP_RECORDER_SF_II @ 0x1C0036218 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0036924 (WPP_RECORDER_SF_qqqd.c)
 */

__int64 __fastcall Controller_UcxEvtGetFrameNumberAndQpcForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  LARGE_INTEGER *v9; // rdi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  char v13; // r12
  int v14; // ebx
  LARGE_INTEGER *v15; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  __int64 *v18; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER *v19; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  LOBYTE(v7) = 0;
  LOBYTE(v8) = 0;
  v9 = (LARGE_INTEGER *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                          WdfDriverGlobals,
                          a1,
                          off_1C0061428);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2240))(WdfDriverGlobals, a2);
  if ( a4 < 0x3C )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 297);
    v14 = -1073741811;
    goto LABEL_28;
  }
  v17 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v18);
  if ( v14 >= 0 )
  {
    if ( !*v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(v9[9].QuadPart, v10, 4, 298, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      }
LABEL_9:
      v14 = -1073741811;
      goto LABEL_28;
    }
    if ( v13 == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      if ( v8 != *v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            v9[9].QuadPart,
            v10,
            4,
            299,
            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
            *v18,
            v8);
        }
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *v18;
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v8,
           off_1C00613B0);
    if ( *(_BYTE *)(v7 + 40) )
    {
      if ( a3 >= 0x3C )
      {
        v17 = 0;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, LARGE_INTEGER **))(WdfFunctions_01023 + 2160))(
                WdfDriverGlobals,
                a2,
                a3,
                &v19);
        if ( v14 >= 0 )
        {
          if ( v9[49].LowPart == 1 )
          {
            ++*(_DWORD *)(v7 + 44);
            v15 = v19;
            if ( v19[1].LowPart || v19[1].HighPart )
            {
              ++*(_DWORD *)(v7 + 48);
              v15 = v19;
            }
            v15[4].HighPart = v9[78].LowPart;
            v19[3] = v9[91];
            v14 = Controller_TranslateFrameNumberToQpcValue((__int64)v9, v19);
          }
          else
          {
            v14 = -1073741436;
          }
        }
        goto LABEL_28;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 301);
      goto LABEL_9;
    }
    v14 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023
                                                                                               + 2120))(
               WdfDriverGlobals,
               a2,
               (unsigned int)v14,
               a3);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_i(v9[9].QuadPart, v10, 4, 300, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v8);
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(v9[9].QuadPart, v10, v11, v12, v17, a2, v8, v7, v14);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14,
           a3);
}
