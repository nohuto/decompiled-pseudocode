/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     Controller_D0Exit @ 0x1C000B38C (Controller_D0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000B6F0 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_D0ExitStopped @ 0x1C000B76C (Interrupter_D0ExitStopped.c)
 *     RootHub_D0Exit @ 0x1C000B838 (RootHub_D0Exit.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000F58C (Register_SetClearSSICPortUnused.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Controller_InUseByDebugger @ 0x1C0015798 (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0015C18 (WPP_RECORDER_SF_qdd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_D0ExitSaveState @ 0x1C0031B1C (Controller_D0ExitSaveState.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0032584 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0035FC8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003605C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003D960 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C4C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0075B9C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned __int32 a2)
{
  __m128i *v4; // rdi
  int v5; // eax
  int v6; // edx
  __int64 v7; // r8
  int v8; // ebp
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx

  v4 = *(__m128i **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00613D8)
                   + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      v4[29].m128i_u8[4],
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      v4->m128i_i64[1],
      a2,
      v5,
      v4[29].m128i_i8[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qdd(
      v4[4].m128i_i64[1],
      v6,
      4,
      84,
      (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
      a1,
      a2,
      v4[26].m128i_i32[1]);
  }
  v9 = v4[26].m128i_i64[1] == 0;
  v4[24].m128i_i32[2] = a2;
  if ( v9 || a2 != 6 )
  {
    if ( v4[7].m128i_i64[1] )
      CommonBuffer_FlushWorkItems();
    RootHub_D0Exit(v4[9].m128i_i64[1], a2, v4[26].m128i_u32[1]);
    Controller_D0Exit(v4, a2, v10);
    Interrupter_D0ExitStopped(v4[8].m128i_i64[0], a2);
    if ( (v4[21].m128i_i64[0] & 2) != 0
      || v4[24].m128i_i8[12]
      || a2 == 5
      || v4[26].m128i_i32[1] == 5
      || (_mm_srli_si128(v4[21], 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(v4[4].m128i_i64[1], v11, 4, 85, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      }
    }
    else
    {
      v15 = Controller_D0ExitSaveState(v4);
      if ( v15 < 0 )
      {
        v4[24].m128i_i8[12] = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_d(
            v4[4].m128i_i64[1],
            v16,
            4,
            86,
            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
            v15);
        }
        Controller_HwVerifierBreakIfEnabled(
          (_DWORD)v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      v17 = v4[5].m128i_i64[1];
      LOBYTE(v16) = 1;
      Register_SetClearSSICPortUnused(v17, v16);
      LOBYTE(v18) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v17, v18);
      Controller_ExecuteHSICDisconnectInU3Workaround(v4, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v4);
      if ( (_mm_srli_si128(v4[21], 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  else
  {
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      v4[22].m128i_i64[1],
      v7);
  }
  if ( (v4[21].m128i_i64[0] & 0x80000000000LL) != 0 && v8 == 5 )
  {
    LOBYTE(v11) = 1;
    v19 = Register_ControllerReset(v4[5].m128i_i64[1], v11);
    if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_d(v4[4].m128i_i64[1], v20, 4, 87, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v19);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[23].m128i_i64[0]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[48].m128i_i64[1]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[32].m128i_i64[1]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[41].m128i_i64[0]);
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v12,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v13,
      v4->m128i_i64[1],
      a2,
      v8,
      0);
  return 0LL;
}
