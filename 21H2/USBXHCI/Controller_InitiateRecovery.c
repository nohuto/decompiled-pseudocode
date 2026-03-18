/*
 * XREFs of Controller_InitiateRecovery @ 0x1C0031E70
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C00334B0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000DF68 (CommonBuffer_FlushWorkItems.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C002E230 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C003179C (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 *     UsbDevice_ControllerGone @ 0x1C0045EA0 (UsbDevice_ControllerGone.c)
 */

__int64 __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  unsigned int i; // ebp
  __int64 v13; // rcx
  __int64 v14; // rdx
  _BYTE v15[24]; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-40h]

  result = 0LL;
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    result = WPP_RECORDER_SF_(a1[9], a2, 4, 232, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
  }
  if ( (a3 & 2) != 0 )
  {
    result = *((unsigned int *)a1 + 102);
    if ( (unsigned int)result > 0xA )
    {
      a3 |= 4u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 1;
        result = WPP_RECORDER_SF_DD(
                   a1[9],
                   a2,
                   4,
                   233,
                   (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                   result,
                   10);
      }
    }
  }
  for ( ; a3; a3 &= result )
  {
    if ( (a3 & 0x18) != 0 )
    {
      v9 = *(_DWORD *)(v5 + 84);
      if ( (v9 & 2) == 0 )
      {
        Command_FailAllCommands(a1[18]);
        KeFlushQueuedDpcs();
        v10 = (_QWORD *)a1[15];
        if ( v10 )
          CommonBuffer_FlushWorkItems(v10);
        v11 = a1[17];
        for ( i = 1; i <= *(_DWORD *)(v11 + 96); ++i )
        {
          if ( *(_BYTE *)(v11 + 80) )
            v13 = *(_QWORD *)(v11 + 24);
          else
            v13 = *(_QWORD *)(v11 + 72);
          if ( *(_QWORD *)(v13 + 8LL * i) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, _QWORD))qword_1C00627C0)(UcxDriverGlobals, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        *(_DWORD *)(v5 + 84) |= 2u;
        v9 = *(_DWORD *)(v5 + 84);
      }
      if ( (v9 & 4) == 0 && (a3 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_(a1[9], a2, 4, 234, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
        }
        v14 = *a1;
        *(_DWORD *)v15 = 28;
        *(__m128i *)&v15[4] = _mm_load_si128((const __m128i *)&_xmm);
        v16 = 2;
        *(_DWORD *)&v15[20] = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01023 + 232))(
          WdfDriverGlobals,
          v14,
          v15);
        *(_DWORD *)(v5 + 84) |= 4u;
      }
      result = 4294967264LL;
    }
    else if ( (a3 & 4) != 0 )
    {
      v7 = Register_ControllerStop(a1[11]);
      if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(a1[9], v8, 4, 235, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v7);
      }
      Controller_DisableController((__int64)a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967288LL;
    }
    else if ( (a3 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      result = 4294967294LL;
    }
    else if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, _QWORD))qword_1C00627B0)(UcxDriverGlobals, a1[1]);
      result = 4294967293LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          return WPP_RECORDER_SF_d(a1[9], a2, 4, 236, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, a3);
        }
        return result;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967263LL;
    }
  }
  return result;
}
