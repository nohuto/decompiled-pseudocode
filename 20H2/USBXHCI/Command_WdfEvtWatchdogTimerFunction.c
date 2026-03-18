/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 *     XilCommand_WriteDoorbell @ 0x1C00071A8 (XilCommand_WriteDoorbell.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002FE70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C002FFA0 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C00303F8 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030A28 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0030FE0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     Etw_CommandCompleteError @ 0x1C0048A48 (Etw_CommandCompleteError.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C00508BC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C0050958 (XilCoreCommand_QueryIsRingRunning.c)
 */

_QWORD *__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  char v1; // si
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  char IsControllerAccessible; // r15
  char v9; // r13
  unsigned __int8 v10; // r12
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int128 *v14; // rdx
  int v15; // r8d
  int v16; // r9d
  __int64 *v17; // rdi
  int v18; // eax
  __int64 ****v19; // rcx
  __int64 ***v20; // rax
  __int64 **v21; // rdx
  _QWORD *v22; // rdx
  __int64 v24; // rdx
  int v25; // edx
  int v26; // eax
  int v27; // r9d
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  _OWORD ***v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  __int64 ****v38; // rcx
  __int64 ***v39; // rax
  __int64 **v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *result; // rax
  __int64 v43; // rdx
  __int64 *v44; // rdi
  __int64 *v45; // rax
  __int64 **v46; // rcx
  int v47; // [rsp+20h] [rbp-40h]
  __int64 *v48; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v49; // [rsp+48h] [rbp-18h]
  __int128 v50; // [rsp+50h] [rbp-10h] BYREF
  char v51; // [rsp+B0h] [rbp+50h] BYREF
  char v52; // [rsp+B8h] [rbp+58h] BYREF

  v50 = 0LL;
  v1 = 0;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568);
  v52 = 0;
  v51 = 0;
  v3 = v2(WdfDriverGlobals, a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v3,
         off_1C00611F8);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 553LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(v5 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8));
  v9 = 0;
  v10 = 0;
  v49 = &v48;
  v48 = (__int64 *)&v48;
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112), v11, v12, v13);
  if ( !IsControllerAccessible )
    goto LABEL_20;
  if ( *(_DWORD *)(v5 + 36) == 1 )
  {
    v17 = *(__int64 **)(v5 + 80);
    if ( v17 != (__int64 *)(v5 + 80) )
    {
      if ( *(_BYTE *)(v5 + 136) )
        XilCommand_SendQueryIsRingRunningRequest(v5 + 136, &v51, &v52);
      else
        XilCoreCommand_QueryIsRingRunning(v5 + 168, &v51, &v52);
      v18 = *((_DWORD *)v17 + 14);
      if ( v18 > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          (_DWORD)v14,
          7,
          29,
          (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
          (char)v17,
          v18);
      }
      if ( v52 )
      {
        v9 = 1;
        IsControllerAccessible = 0;
LABEL_20:
        if ( *(_BYTE *)(v5 + 128) )
        {
          v19 = (__int64 ****)(v5 + 80);
          while ( 1 )
          {
            v20 = *v19;
            if ( *v19 == (__int64 ***)v19 )
              break;
            if ( v20[1] != (__int64 **)v19 )
              goto LABEL_101;
            v21 = *v20;
            if ( (*v20)[1] != (__int64 *)v20 )
              goto LABEL_101;
            *v19 = (__int64 ***)v21;
            v21[1] = (__int64 *)v19;
            v22 = v49;
            if ( *v49 != (__int64 *)&v48 )
              goto LABEL_101;
            v20[1] = v49;
            *v20 = &v48;
            *v22 = v20;
            v49 = (__int64 **)v20;
          }
          v38 = (__int64 ****)(v5 + 96);
          while ( 1 )
          {
            v39 = *v38;
            if ( *v38 == (__int64 ***)v38 )
              break;
            if ( v39[1] != (__int64 **)v38 )
              goto LABEL_101;
            v40 = *v39;
            if ( (*v39)[1] != (__int64 *)v39 )
              goto LABEL_101;
            *v38 = (__int64 ***)v40;
            v40[1] = (__int64 *)v38;
            v41 = v49;
            if ( *v49 != (__int64 *)&v48 )
              goto LABEL_101;
            v39[1] = v49;
            *v39 = &v48;
            *v41 = v39;
            v49 = (__int64 **)v39;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v5 + 24),
          0LL);
        goto LABEL_91;
      }
      if ( *(_BYTE *)(v5 + 121) )
      {
        if ( (*(_DWORD *)(v5 + 124))-- == 1 )
        {
          v1 = 0;
          if ( v51 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                (_DWORD)v14,
                7,
                30,
                (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
            }
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD *)(v5 + 8),
              0,
              0,
              4096,
              (__int64)"Command abort timed out, command ring still running, resetting the controller",
              *(_QWORD *)(v5 + 72) + 16LL * *(unsigned int *)(v5 + 44),
              0LL);
            v24 = *(_QWORD *)(v5 + 24);
            *(_BYTE *)(v5 + 121) = 0;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              v24,
              0LL);
            *(_DWORD *)(v5 + 36) = 2;
            v1 = 1;
            v10 = *((_BYTE *)v17 + 62) & 1;
            goto LABEL_92;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
              (_DWORD)v14,
              7,
              31,
              (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
          }
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v5 + 8),
            0,
            0,
            0x2000,
            (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
            *(_QWORD *)(v5 + 72) + 16LL * *(unsigned int *)(v5 + 44),
            0LL);
          *(_BYTE *)(v5 + 121) = 0;
          v26 = *((_DWORD *)v17 + 14);
          switch ( v26 )
          {
            case 0:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v25) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                  v25,
                  7,
                  34,
                  (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
                  0);
              }
              v28 = (__int64 *)*v17;
              if ( *(__int64 **)(*v17 + 8) != v17 || (v29 = (__int64 **)v17[1], *v29 != v17) )
LABEL_101:
                __fastfail(3u);
              *v29 = v28;
              v28[1] = (__int64)v29;
              v30 = (unsigned int)(*(_DWORD *)(v5 + 44) + 1);
              *(_DWORD *)(v5 + 44) = v30;
              if ( (_DWORD)v30 == *(_DWORD *)(v5 + 48) )
              {
                *(_DWORD *)(v5 + 44) = 0;
                v30 = 0LL;
              }
              XilCommand_AdvanceCommandRingControlDequeuePointer(v5, v30);
              goto LABEL_53;
            case 5:
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_43;
              v27 = 33;
              LOBYTE(v25) = 2;
              break;
            case 10:
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
LABEL_43:
                v17 = 0LL;
                goto LABEL_53;
              }
              v27 = 32;
              LOBYTE(v25) = 4;
              break;
            default:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v25) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                  v25,
                  7,
                  35,
                  (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
                  v26);
              }
LABEL_53:
              if ( *(_QWORD *)(v5 + 80) != v5 + 80 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v25) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(v5 + 16),
                    v25,
                    7,
                    36,
                    (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
                }
                XilCommand_WriteDoorbell(v5);
              }
              v31 = *(_QWORD *)(v5 + 96);
              if ( v31 != v5 + 96 )
              {
                v50 = *(_OWORD *)(v5 + 96);
                *(_QWORD *)(v31 + 8) = &v50;
                **((_QWORD **)&v50 + 1) = &v50;
                *(_QWORD *)(v5 + 104) = v5 + 96;
                *(_QWORD *)(v5 + 96) = v5 + 96;
                goto LABEL_60;
              }
              v14 = &v50;
              *((_QWORD *)&v50 + 1) = &v50;
              *(_QWORD *)&v50 = &v50;
              while ( v14 != &v50 )
              {
                if ( *((__int128 **)v14 + 1) != &v50 )
                  goto LABEL_101;
                v32 = *(_OWORD ****)v14;
                if ( *(__int128 **)(*(_QWORD *)v14 + 8LL) != v14 )
                  goto LABEL_101;
                *(_QWORD *)&v50 = *(_QWORD *)v14;
                v32[1] = (_OWORD **)&v50;
                Command_InternalSendCommand(v5, (__int64)v14, v15, v16);
LABEL_60:
                v14 = (__int128 *)v50;
              }
              if ( v17 )
              {
                DynamicLock_Release(*(_QWORD *)(v5 + 112), (int)v14, v15, v16);
                *((_BYTE *)v17 + 60) = 25;
                Etw_CommandCompleteError(v33, v5, v17, 2LL);
                ((void (__fastcall *)(__int64 *, __int64))v17[5])(v17, 2LL);
                DynamicLock_Acquire(*(_QWORD *)(v5 + 112), v34, v35, v36);
              }
              goto LABEL_92;
          }
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            v25,
            7,
            v27,
            (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
            v26);
          goto LABEL_43;
        }
      }
      else
      {
        LODWORD(v14) = --*((_DWORD *)v17 + 14);
        if ( (_DWORD)v14 == 5 || !(_DWORD)v14 )
        {
          if ( v51 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                (_DWORD)v14,
                7,
                39,
                (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              *(_QWORD *)(v5 + 24),
              0LL);
            v1 = 1;
            *(_DWORD *)(v5 + 36) = 2;
            if ( (*((_BYTE *)v17 + 62) & 1) != 0 )
              v10 = 1;
            goto LABEL_92;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLd(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
              (_DWORD)v14,
              v15,
              v16,
              v47,
              (char)v17,
              (unsigned __int16)*((_DWORD *)v17 + 9) >> 10,
              *((_DWORD *)v17 + 14));
          v37 = (unsigned __int8)HIBYTE(*((_WORD *)v17 + 18)) >> 2;
          if ( v37 != 11 || (*((_DWORD *)v17 + 9) & 0x200) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v37) = 2;
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                v37,
                7,
                38,
                (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
                5,
                (*((_DWORD *)v17 + 9) & 0x200) != 0,
                (unsigned __int8)HIBYTE(*((_WORD *)v17 + 18)) >> 2);
            }
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD *)(v5 + 8),
              0,
              0,
              0x4000,
              (__int64)"A command timed out, aborting command next",
              (__int64)(v17 + 3),
              0LL);
          }
          *(_BYTE *)(v5 + 121) = 1;
          *(_DWORD *)(v5 + 124) = 5;
          if ( *(_BYTE *)(v5 + 136) )
            XilCommand_SendAbortRingCommandRequest(v5 + 136);
          else
            XilCoreCommand_AbortCommandRing(v5 + 168);
        }
      }
LABEL_91:
      v1 = 0;
    }
  }
LABEL_92:
  result = (_QWORD *)DynamicLock_Release(*(_QWORD *)(v5 + 112), (int)v14, v15, v16);
  if ( !IsControllerAccessible )
  {
    if ( v9 == 1 )
    {
      LOBYTE(v43) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v5 + 8), v43);
    }
    while ( 1 )
    {
      v44 = v48;
      result = &v48;
      if ( v48 == (__int64 *)&v48 )
        break;
      if ( (__int64 **)v48[1] != &v48 )
        goto LABEL_101;
      v45 = (__int64 *)*v48;
      if ( *(__int64 **)(*v48 + 8) != v48 )
        goto LABEL_101;
      v46 = &v48;
      v48 = (__int64 *)*v48;
      v45[1] = (__int64)&v48;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v43) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          v43,
          7,
          40,
          (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
          (char)v44,
          (unsigned __int8)HIBYTE(*((_WORD *)v44 + 18)) >> 2);
      }
      Etw_CommandCompleteError(v46, v5, v44, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v44[5])(v44, 3LL);
    }
  }
  if ( v1 == 1 )
    return (_QWORD *)Controller_ReportFatalError(*(_QWORD *)(v5 + 8), (v10 ^ 1u) + 1, 4105, 0, 0LL, 0LL, 0LL);
  return result;
}
