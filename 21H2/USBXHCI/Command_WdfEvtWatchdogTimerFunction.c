/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0003E9C (Command_InternalSendCommand.c)
 *     XilCommand_WriteDoorbell @ 0x1C00040F8 (XilCommand_WriteDoorbell.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002F454 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C002F584 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C002F9DC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030014 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00305C0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     Etw_CommandCompleteError @ 0x1C004807C (Etw_CommandCompleteError.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C0050860 (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C00508FC (XilCoreCommand_QueryIsRingRunning.c)
 */

_QWORD *__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  char v1; // si
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  char IsControllerAccessible; // r15
  char v9; // r13
  unsigned __int8 v10; // r12
  __int64 *v11; // rdi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 ****v15; // rcx
  __int64 ***v16; // rax
  __int64 **v17; // rdx
  _QWORD *v18; // rdx
  __int64 v20; // rdx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  int v25; // r9d
  __int64 *v26; // rcx
  __int64 **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int128 *v30; // rdx
  _OWORD ***v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  __int64 ****v35; // rcx
  __int64 ***v36; // rax
  __int64 **v37; // rdx
  _QWORD *v38; // rdx
  _QWORD *result; // rax
  __int64 v40; // rdx
  __int64 *v41; // rdi
  __int64 *v42; // rax
  __int64 **v43; // rcx
  int v44; // [rsp+20h] [rbp-40h]
  __int64 *v45; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v46; // [rsp+48h] [rbp-18h]
  __int128 v47; // [rsp+50h] [rbp-10h] BYREF
  char v48; // [rsp+B0h] [rbp+50h] BYREF
  char v49; // [rsp+B8h] [rbp+58h] BYREF

  v47 = 0LL;
  v1 = 0;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568);
  v49 = 0;
  v48 = 0;
  v3 = v2(WdfDriverGlobals, a1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v3,
         off_1C00611F8);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 553LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8));
  v9 = 0;
  v10 = 0;
  v46 = &v45;
  v45 = (__int64 *)&v45;
  DynamicLock_Acquire(*(_QWORD *)(v4 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_20;
  if ( *(_DWORD *)(v4 + 36) == 1 )
  {
    v11 = *(__int64 **)(v4 + 80);
    if ( v11 != (__int64 *)(v4 + 80) )
    {
      if ( *(_BYTE *)(v4 + 136) )
        XilCommand_SendQueryIsRingRunningRequest(v4 + 136, &v48, &v49);
      else
        XilCoreCommand_QueryIsRingRunning(v4 + 168, &v48, &v49);
      if ( *((int *)v11 + 14) > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          7u,
          0x1Du,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      if ( v49 )
      {
        v9 = 1;
        IsControllerAccessible = 0;
LABEL_20:
        if ( *(_BYTE *)(v4 + 128) )
        {
          v15 = (__int64 ****)(v4 + 80);
          while ( 1 )
          {
            v16 = *v15;
            if ( *v15 == (__int64 ***)v15 )
              break;
            if ( v16[1] != (__int64 **)v15 )
              goto LABEL_101;
            v17 = *v16;
            if ( (*v16)[1] != (__int64 *)v16 )
              goto LABEL_101;
            *v15 = (__int64 ***)v17;
            v17[1] = (__int64 *)v15;
            v18 = v46;
            if ( *v46 != (__int64 *)&v45 )
              goto LABEL_101;
            v16[1] = v46;
            *v16 = &v45;
            *v18 = v16;
            v46 = (__int64 **)v16;
          }
          v35 = (__int64 ****)(v4 + 96);
          while ( 1 )
          {
            v36 = *v35;
            if ( *v35 == (__int64 ***)v35 )
              break;
            if ( v36[1] != (__int64 **)v35 )
              goto LABEL_101;
            v37 = *v36;
            if ( (*v36)[1] != (__int64 *)v36 )
              goto LABEL_101;
            *v35 = (__int64 ***)v37;
            v37[1] = (__int64 *)v35;
            v38 = v46;
            if ( *v46 != (__int64 *)&v45 )
              goto LABEL_101;
            v36[1] = v46;
            *v36 = &v45;
            *v38 = v36;
            v46 = (__int64 **)v36;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v4 + 24),
          0LL);
        goto LABEL_91;
      }
      if ( *(_BYTE *)(v4 + 121) )
      {
        if ( (*(_DWORD *)(v4 + 124))-- == 1 )
        {
          v1 = 0;
          if ( v48 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v12,
                7,
                30,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
            }
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD *)(v4 + 8),
              0,
              0,
              4096,
              (__int64)"Command abort timed out, command ring still running, resetting the controller",
              *(_QWORD *)(v4 + 72) + 16LL * *(unsigned int *)(v4 + 44),
              0LL);
            v20 = *(_QWORD *)(v4 + 24);
            *(_BYTE *)(v4 + 121) = 0;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              v20,
              0LL);
            *(_DWORD *)(v4 + 36) = 2;
            v1 = 1;
            v10 = *((_BYTE *)v11 + 62) & 1;
            goto LABEL_92;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v12,
              7,
              31,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
          }
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v4 + 8),
            0,
            0,
            0x2000,
            (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
            *(_QWORD *)(v4 + 72) + 16LL * *(unsigned int *)(v4 + 44),
            0LL);
          *(_BYTE *)(v4 + 121) = 0;
          v24 = *((_DWORD *)v11 + 14);
          switch ( v24 )
          {
            case 0:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v21) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v21,
                  7,
                  34,
                  (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                  0);
              }
              v26 = (__int64 *)*v11;
              if ( *(__int64 **)(*v11 + 8) != v11 || (v27 = (__int64 **)v11[1], *v27 != v11) )
LABEL_101:
                __fastfail(3u);
              *v27 = v26;
              v26[1] = (__int64)v27;
              v28 = (unsigned int)(*(_DWORD *)(v4 + 44) + 1);
              *(_DWORD *)(v4 + 44) = v28;
              if ( (_DWORD)v28 == *(_DWORD *)(v4 + 48) )
              {
                *(_DWORD *)(v4 + 44) = 0;
                v28 = 0LL;
              }
              XilCommand_AdvanceCommandRingControlDequeuePointer(v4, v28);
              goto LABEL_53;
            case 5:
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_43;
              v25 = 33;
              LOBYTE(v21) = 2;
              break;
            case 10:
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
LABEL_43:
                v11 = 0LL;
                goto LABEL_53;
              }
              v25 = 32;
              LOBYTE(v21) = 4;
              break;
            default:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v21) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v21,
                  7,
                  35,
                  (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                  v24);
              }
LABEL_53:
              if ( *(_QWORD *)(v4 + 80) != v4 + 80 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v21) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(v4 + 16),
                    v21,
                    7,
                    36,
                    (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
                }
                XilCommand_WriteDoorbell(v4);
              }
              v29 = *(_QWORD *)(v4 + 96);
              if ( v29 != v4 + 96 )
              {
                v47 = *(_OWORD *)(v4 + 96);
                *(_QWORD *)(v29 + 8) = &v47;
                **((_QWORD **)&v47 + 1) = &v47;
                *(_QWORD *)(v4 + 104) = v4 + 96;
                *(_QWORD *)(v4 + 96) = v4 + 96;
                goto LABEL_60;
              }
              v30 = &v47;
              *((_QWORD *)&v47 + 1) = &v47;
              *(_QWORD *)&v47 = &v47;
              while ( v30 != &v47 )
              {
                if ( *((__int128 **)v30 + 1) != &v47 )
                  goto LABEL_101;
                v31 = *(_OWORD ****)v30;
                if ( *(__int128 **)(*(_QWORD *)v30 + 8LL) != v30 )
                  goto LABEL_101;
                *(_QWORD *)&v47 = *(_QWORD *)v30;
                v31[1] = (_OWORD **)&v47;
                Command_InternalSendCommand(v4, (__int64)v30, v22, v23);
LABEL_60:
                v30 = (__int128 *)v47;
              }
              if ( v11 )
              {
                DynamicLock_Release(*(_QWORD *)(v4 + 112));
                *((_BYTE *)v11 + 60) = 25;
                Etw_CommandCompleteError(v32, v4, v11, 2LL);
                ((void (__fastcall *)(__int64 *, __int64))v11[5])(v11, 2LL);
                DynamicLock_Acquire(*(_QWORD *)(v4 + 112));
              }
              goto LABEL_92;
          }
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v21,
            7,
            v25,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
            v24);
          goto LABEL_43;
        }
      }
      else
      {
        v33 = --*((_DWORD *)v11 + 14);
        if ( v33 == 5 || !v33 )
        {
          if ( v48 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v33,
                7,
                39,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              *(_QWORD *)(v4 + 24),
              0LL);
            v1 = 1;
            *(_DWORD *)(v4 + 36) = 2;
            if ( (*((_BYTE *)v11 + 62) & 1) != 0 )
              v10 = 1;
            goto LABEL_92;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v33,
              v13,
              v14,
              v44,
              (char)v11,
              (unsigned __int16)*((_DWORD *)v11 + 9) >> 10,
              *((_DWORD *)v11 + 14));
          v34 = (unsigned __int8)HIBYTE(*((_WORD *)v11 + 18)) >> 2;
          if ( v34 != 11 || (*((_DWORD *)v11 + 9) & 0x200) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v34) = 2;
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v34,
                7,
                38,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                5,
                (*((_DWORD *)v11 + 9) & 0x200) != 0,
                (unsigned __int8)HIBYTE(*((_WORD *)v11 + 18)) >> 2);
            }
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD *)(v4 + 8),
              0,
              0,
              0x4000,
              (__int64)"A command timed out, aborting command next",
              (__int64)(v11 + 3),
              0LL);
          }
          *(_BYTE *)(v4 + 121) = 1;
          *(_DWORD *)(v4 + 124) = 5;
          if ( *(_BYTE *)(v4 + 136) )
            XilCommand_SendAbortRingCommandRequest(v4 + 136);
          else
            XilCoreCommand_AbortCommandRing(v4 + 168);
        }
      }
LABEL_91:
      v1 = 0;
    }
  }
LABEL_92:
  result = (_QWORD *)DynamicLock_Release(*(_QWORD *)(v4 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v9 == 1 )
    {
      LOBYTE(v40) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v4 + 8), v40);
    }
    while ( 1 )
    {
      v41 = v45;
      result = &v45;
      if ( v45 == (__int64 *)&v45 )
        break;
      if ( (__int64 **)v45[1] != &v45 )
        goto LABEL_101;
      v42 = (__int64 *)*v45;
      if ( *(__int64 **)(*v45 + 8) != v45 )
        goto LABEL_101;
      v43 = &v45;
      v45 = (__int64 *)*v45;
      v42[1] = (__int64)&v45;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v40,
          7,
          40,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          (char)v41,
          (unsigned __int8)HIBYTE(*((_WORD *)v41 + 18)) >> 2);
      }
      Etw_CommandCompleteError(v43, v4, v41, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v41[5])(v41, 3LL);
    }
  }
  if ( v1 == 1 )
    return (_QWORD *)Controller_ReportFatalError(*(_QWORD *)(v4 + 8), (v10 ^ 1u) + 1, 4105, 0, 0LL, 0LL, 0LL);
  return result;
}
