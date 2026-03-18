/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0010230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000D15C (DeviceSlot_DisableAllDeviceSlots.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000DCAC (DeviceSlot_D0EntryCleanupState.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Command_D0Entry @ 0x1C0010860 (Command_D0Entry.c)
 *     RootHub_D0Entry @ 0x1C0011DD8 (RootHub_D0Entry.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     Register_SetClearSSICPortUnused @ 0x1C00141D8 (Register_SetClearSSICPortUnused.c)
 *     Interrupter_D0Entry @ 0x1C00147A8 (Interrupter_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x1C00148BC (DeviceSlot_D0Entry.c)
 *     Controller_InUseByDebugger @ 0x1C001589C (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0016390 (WPP_RECORDER_SF_qDD.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030DA4 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0035568 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00355FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003D278 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C0FC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006C1A0 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0075F10 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // r15
  __m128i *v5; // rdi
  char v6; // r12
  char v7; // al
  int v8; // edx
  int v9; // r8d
  char v10; // r13
  __int64 *v11; // rsi
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // esi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // edx
  int v33; // r9d
  __int64 v34; // rbx
  int v35; // eax
  int v36; // edx
  __int64 v37; // rbx
  int Ulong; // eax
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rbx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __m128i *v51; // rcx
  __int64 v52; // [rsp+40h] [rbp-48h] BYREF
  int v53; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = *(__m128i **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00613D8)
                   + 8);
  if ( v5[34].m128i_i8[9] && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v28, v29, v30);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v10 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      v5[29].m128i_u8[4],
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v9,
      v5->m128i_i64[1],
      a2,
      v7,
      v5[29].m128i_i8[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qDD(
      v5[4].m128i_i64[1],
      v8,
      4,
      61,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      a1,
      a2,
      v5[26].m128i_i32[1]);
  }
  v11 = &v5[5].m128i_i64[1];
  v12 = &v5[5].m128i_i64[1];
  if ( (unsigned int)XilRegister_ReadUlong(v5[5].m128i_i64[1], *(_QWORD *)(v5[5].m128i_i64[1] + 24)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v5[4].m128i_i64[1], v13, 4, 62, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
    v6 = 1;
    v16 = -1073741823;
    goto LABEL_96;
  }
  if ( v5[29].m128i_i32[0] && v5[49].m128i_i64[1] && qword_1C0062AE0 )
    qword_1C0062AE0();
  if ( v5[26].m128i_i32[1] != 2 )
    goto LABEL_13;
  v14 = v5[26].m128i_i64[1];
  if ( v14 && *(_DWORD *)(v14 + 584) == 4 )
  {
    v31 = Register_ControllerStop(*v11);
    if ( v31 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = 2;
      WPP_RECORDER_SF_d(v5[4].m128i_i64[1], v32, 4, 63, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v31);
    }
LABEL_11:
    DeviceSlot_D0EntryCleanupState(v5[8].m128i_i64[1], a2);
    v15 = Register_ControllerReset(*v11, 0LL);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v4 = 1;
LABEL_13:
      if ( !v5[27].m128i_i8[8] )
      {
        v5[27].m128i_i32[3] = KeQueryTimeIncrement();
        v17 = ((unsigned int)(**(_DWORD **)(*v12 + 40) + 1) >> 3) & 0x7FF;
        v13 = _InterlockedExchange64(
                v5[27].m128i_i64,
                (v17 >> 11) | ((MEMORY[0xFFFFF78000000320] * v5[27].m128i_u32[3] / 10000LL - v17) << 21));
        v5[27].m128i_i8[8] = 1;
      }
      LOBYTE(v13) = 1;
      Controller_ExecuteHSICDisconnectInU3Workaround(v5, v13);
      if ( (_mm_srli_si128(v5[21], 8).m128i_u8[0] & 1) != 0 )
      {
        LOBYTE(v18) = 1;
        Controller_ExecuteKBLPowerTransitionWorkaround(v5, v18);
      }
      v20 = 1;
      v21 = 0;
      do
      {
        if ( v21
          || (v5[21].m128i_i64[0] & 2) != 0
          || a2 == 5
          || v5[24].m128i_i8[12]
          || v5[26].m128i_i32[1] == 2
          || (_mm_srli_si128(v5[21], 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
        {
          LOBYTE(v19) = 0;
        }
        else
        {
          v34 = *v12;
          Register_SetClearSSICPortUnused(*v12, 0LL);
          Register_SaveRestoreCHTNonArchitecturalRegisters(v34, 0LL);
          LOBYTE(v19) = 1;
        }
        v15 = Interrupter_D0Entry(v5[8].m128i_i64[0], a2, v19);
        v16 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v33 = 66;
          goto LABEL_95;
        }
        v15 = DeviceSlot_D0Entry(v5[8].m128i_i64[1], a2);
        v16 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v33 = 67;
          goto LABEL_95;
        }
        v15 = Command_D0Entry(v5[9].m128i_i64[0], a2);
        v16 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v33 = 68;
          goto LABEL_95;
        }
        if ( a2 == 5 || v20 == 2 || v5[26].m128i_i32[1] == 2 )
          break;
        if ( (v5[21].m128i_i64[0] & 2) != 0
          || v5[24].m128i_i8[12]
          || (_mm_srli_si128(v5[21], 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_(v5[4].m128i_i64[1], v13, 4, 70, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
          }
        }
        else
        {
          v35 = Controller_D0EntryRestoreState(v5);
          if ( v35 >= 0 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 4;
            WPP_RECORDER_SF_d(
              v5[4].m128i_i64[1],
              v36,
              4,
              69,
              (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
              v35);
          }
          Controller_HwVerifierBreakIfEnabled(
            (_DWORD)v5,
            0,
            0,
            0x400000,
            (__int64)"Controller restore state operation failed",
            0LL,
            0LL);
        }
        DeviceSlot_D0EntryCleanupState(v5[8].m128i_i64[1], a2);
        v15 = Register_ControllerReset(*v12, 0LL);
        v16 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v33 = 71;
          goto LABEL_95;
        }
        ++v20;
        v4 = 1;
        v21 = v20 == 2;
      }
      while ( v20 <= 2 );
      v22 = *v12;
      v23 = *(_QWORD *)(*v12 + 8);
      if ( (*(_BYTE *)(v23 + 352) & 2) != 0 )
      {
        v37 = *(_QWORD *)(v22 + 24);
        Ulong = XilRegister_ReadUlong(*v12, v37 + 32912);
        XilRegister_WriteUlong(v22, v37 + 32912, Ulong & 0xFFFFEFFF);
        v23 = *(_QWORD *)(v22 + 8);
      }
      if ( (*(_BYTE *)(v23 + 352) & 1) != 0 )
      {
        v39 = *(_QWORD *)(v22 + 24);
        v40 = XilRegister_ReadUlong(v22, v39 + 32988);
        XilRegister_WriteUlong(v22, v39 + 32988, v40 & 0xFFFFFF7D);
        v23 = *(_QWORD *)(v22 + 8);
      }
      if ( _bittest64((const signed __int64 *)(v23 + 336), 0x2Eu) )
      {
        v41 = *(_QWORD *)(v22 + 24);
        v42 = XilRegister_ReadUlong(v22, v41 + 32916);
        XilRegister_WriteUlong(v22, v41 + 32916, v42 | 0x200000u);
        v23 = *(_QWORD *)(v22 + 8);
      }
      if ( (*(_BYTE *)(v23 + 352) & 4) != 0 )
      {
        v43 = *(_QWORD *)(v22 + 24) + 16500LL;
        v44 = XilRegister_ReadUlong(v22, v43);
        XilRegister_WriteUlong(v22, v43, v44 | 0x8000u);
        v23 = *(_QWORD *)(v22 + 8);
      }
      if ( (*(_BYTE *)(v23 + 352) & 8) != 0 )
      {
        v45 = *(_QWORD *)(v22 + 24) + 16500LL;
        v46 = XilRegister_ReadUlong(v22, v45);
        XilRegister_WriteUlong(v22, v45, v46 & 0xFF7FFFFF);
        v23 = *(_QWORD *)(v22 + 8);
      }
      if ( _bittest64((const signed __int64 *)(v23 + 336), 0x38u) )
      {
        v47 = *(_QWORD *)(v22 + 24) + 32932LL;
        v48 = XilRegister_ReadUlong(v22, v47);
        XilRegister_WriteUlong(v22, v47, v48 | 0x10000000u);
        KeStallExecutionProcessor(0x32u);
        v49 = XilRegister_ReadUlong(v22, v47);
        XilRegister_WriteUlong(v22, v47, v49 & 0xEFFFFFFF);
      }
      v15 = RootHub_D0Entry(v5[9].m128i_i64[1]);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v5[24].m128i_i32[2] = 1;
        if ( v4 == 1 )
        {
          v24 = v5->m128i_i64[1];
          v53 = 0;
          v52 = 12LL;
          ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1C00627B8)(UcxDriverGlobals, v24, &v52);
        }
        Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
        if ( v5[26].m128i_i32[1] <= 2u )
          v5[26].m128i_i32[1] = 7;
        goto LABEL_47;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v33 = 73;
      goto LABEL_95;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = 65;
      goto LABEL_95;
    }
    goto LABEL_96;
  }
  v15 = Register_BiosHandoff(*v11);
  v16 = v15;
  if ( v15 >= 0 )
    goto LABEL_11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 64;
LABEL_95:
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(v5[4].m128i_i64[1], v13, 4, v33, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v15);
  }
LABEL_96:
  DeviceSlot_DisableAllDeviceSlots(v5[8].m128i_i64[1]);
  v51 = v5;
  if ( v6 )
  {
    LOBYTE(v50) = 1;
  }
  else
  {
    Controller_ReportFatalError((_DWORD)v5, 0, 4124, 0, 0LL, 0LL, 0LL);
    v50 = 0LL;
    v51 = v5;
  }
  Controller_SetControllerGone(v51, v50);
LABEL_47:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v25,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v26,
      v5->m128i_i64[1],
      a2,
      v10,
      v16);
  return v16;
}
