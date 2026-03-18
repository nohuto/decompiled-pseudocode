/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsHandlePresentInCollection @ 0x1C00325E0 (Controller_IsHandlePresentInCollection.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C003399C (Controller_TranslateFrameNumberToQpcValue.c)
 *     WPP_RECORDER_SF_II @ 0x1C00357B8 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0035E64 (WPP_RECORDER_SF_qqqd.c)
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
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  char v13; // r12
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  LARGE_INTEGER *v17; // rcx
  int v19; // [rsp+20h] [rbp-68h]
  __int64 *v20; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER *v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
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
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 301);
    v14 = -1073741811;
    goto LABEL_33;
  }
  v19 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v20);
  if ( v14 >= 0 )
  {
    if ( !*v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(v9[9].QuadPart, v10, 4, 302, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
      }
LABEL_9:
      v14 = -1073741811;
      goto LABEL_33;
    }
    if ( v13 == 1 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      v8 = v15;
      if ( !v15 )
      {
        v14 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                   WdfDriverGlobals,
                   a2,
                   (unsigned int)v14,
                   a3);
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(v9[9].QuadPart, v16, 4, 303, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, 120);
        goto LABEL_33;
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             v15,
             off_1C00613B0);
      v10 = *v20;
      if ( *(_QWORD *)(v7 + 24) != *v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(v9[9].QuadPart, 2u, 4u, 0x130u, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *v20;
      if ( !Controller_IsHandlePresentInCollection((__int64)v9, *v20) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_i(v9[9].QuadPart, v10, 4, 305, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v8);
        }
        goto LABEL_9;
      }
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v8,
           off_1C00613B0);
    if ( !*(_BYTE *)(v7 + 48) )
    {
      v14 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023
                                                                                                 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v14,
                 a3);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_i(v9[9].QuadPart, v10, 4, 306, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v8);
      goto LABEL_33;
    }
    if ( a3 >= 0x3C )
    {
      v19 = 0;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, LARGE_INTEGER **))(WdfFunctions_01023 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v21);
      if ( v14 >= 0 )
      {
        if ( v9[49].LowPart == 1 )
        {
          ++*(_DWORD *)(v7 + 52);
          v17 = v21;
          if ( v21[1].LowPart || v21[1].HighPart )
          {
            ++*(_DWORD *)(v7 + 56);
            v17 = v21;
          }
          v17[4].HighPart = v9[78].LowPart;
          v21[3] = v9[91];
          v14 = Controller_TranslateFrameNumberToQpcValue((__int64)v9, v21);
        }
        else
        {
          v14 = -1073741436;
        }
      }
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 307);
    goto LABEL_9;
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(v9[9].QuadPart, v10, v11, v12, v19, a2, v8, v7, v14);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14,
           a3);
}
