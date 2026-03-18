/*
 * XREFs of Controller_ConfigureS0IdleSettings @ 0x1C0071A14
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0071640 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0076BE0 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_ConfigureS0IdleSettings(_QWORD *a1)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-89h]
  int v11; // [rsp+28h] [rbp-81h]
  _QWORD v12[10]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v13[10]; // [rsp+90h] [rbp-19h] BYREF
  int v14; // [rsp+110h] [rbp+67h] BYREF

  v14 = 0;
  memset(v13, 0, 0x48uLL);
  memset(v12, 0, 0x48uLL);
  result = a1[42];
  if ( (result & 0x100000) != 0 )
  {
    *((_DWORD *)a1 + 116) = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    LOBYTE(v2) = 3;
    result = WPP_RECORDER_SF_(a1[9], v2, 4, 21, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  }
  else
  {
    if ( (result & 0x400000000000000LL) != 0 )
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 3, 0, 0LL, 0);
    LOWORD(v11) = 1;
    LOWORD(v10) = 72;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD *, int, int, _QWORD))(WdfFunctions_01023 + 1048))(
               WdfDriverGlobals,
               *a1,
               &GUID_D3COLD_SUPPORT_INTERFACE,
               v12,
               v10,
               v11,
               0LL);
    if ( (int)result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        result = WPP_RECORDER_SF_d(a1[9], v4, 4, 22, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, result);
      }
      *((_DWORD *)a1 + 116) = 2;
    }
    else
    {
      if ( v12[5] )
      {
        v5 = ((__int64 (__fastcall *)(_QWORD, __int64, int *))v12[5])(v12[1], 1LL, &v14);
        if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 3;
          WPP_RECORDER_SF_d(a1[9], v6, 4, 23, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v5);
        }
      }
      ((void (__fastcall *)(_QWORD))v12[3])(v12[1]);
      result = (unsigned int)v14;
      if ( v14 > 1 )
      {
        *((_DWORD *)a1 + 116) = 0;
        Controller_UpdateIdleTimeout(a1, 5000LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_d(a1[9], v8, 4, 25, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, 136);
        }
        v9 = *a1;
        v13[1] = Controller_EvtPostPoFxRegisterDevice;
        v13[2] = Controller_EvtPrePoFxUnregisterDevice;
        LODWORD(v13[0]) = 72;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 3400))(
                   WdfDriverGlobals,
                   v9,
                   v13);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return result;
          LOBYTE(v4) = 2;
          result = WPP_RECORDER_SF_d(
                     a1[9],
                     v4,
                     4,
                     26,
                     (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                     result);
        }
      }
      else
      {
        *((_DWORD *)a1 + 116) = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        LOBYTE(v7) = 4;
        result = WPP_RECORDER_SF_dd(
                   a1[9],
                   v7,
                   4,
                   24,
                   (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                   result,
                   1);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    return WPP_RECORDER_SF_d(
             a1[9],
             v4,
             4,
             27,
             (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
             *((_DWORD *)a1 + 116));
  }
  return result;
}
