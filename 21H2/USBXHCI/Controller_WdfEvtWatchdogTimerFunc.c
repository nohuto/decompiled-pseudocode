/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     Register_ReadSecureMmio @ 0x1C003D040 (Register_ReadSecureMmio.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C0048494 (Etw_ReportControllerHealthWithPortInfo.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050B4C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C005118C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

KIRQL __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int *v7; // rdx
  int v8; // eax
  __int64 v9; // r14
  int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int32 v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 *v20; // r14
  unsigned int v21; // ebp
  KIRQL v22; // dl
  KSPIN_LOCK *v23; // rcx
  KIRQL result; // al
  char v25; // r12
  unsigned int *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // r13
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rbp
  char v34; // r12
  int v35; // edx
  __int64 v36; // r12
  int v37; // ebp
  __int64 v38; // rsi
  int v39; // edx
  int v40; // r8d
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  int v45; // r8d
  int v46; // r9d
  unsigned int v47; // eax
  unsigned int v48; // eax
  int v49; // edx
  int v50; // r8d
  int v51; // r9d
  unsigned int v52; // edx
  unsigned int v53; // eax
  __int64 *v54; // rax
  __int64 *v55; // r8
  __int64 **v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // r8
  _QWORD *v59; // rcx
  __int64 *v60; // rcx
  __int64 **v61; // rax
  unsigned int v62; // r8d
  int v63; // [rsp+20h] [rbp-78h]
  int v64; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v65; // [rsp+44h] [rbp-54h] BYREF
  unsigned int v66; // [rsp+48h] [rbp-50h]
  __int64 v67; // [rsp+50h] [rbp-48h]
  int v68[2]; // [rsp+58h] [rbp-40h]
  unsigned __int8 v69; // [rsp+A8h] [rbp+10h]
  char v70; // [rsp+B0h] [rbp+18h]
  unsigned int v71; // [rsp+B8h] [rbp+20h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0061428);
  v67 = v3;
  ++*(_DWORD *)(v3 + 400);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0061068);
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) >= 864000000000LL )
  {
    v70 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v70 = 0;
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = 0;
  v7 = (int *)(*(_QWORD *)(v5 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 553LL) )
  {
    v64 = 0;
    Register_ReadSecureMmio(v5, (int)v7, 2, 1, &v64);
    v8 = v64;
  }
  else
  {
    v8 = *v7;
  }
  if ( v8 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        269,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
    LOBYTE(v7) = 1;
    Controller_SetControllerGone(v3, v7);
    goto LABEL_70;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        270,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v40 = 4097;
    goto LABEL_69;
  }
  if ( (v8 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        271,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v40 = 4098;
LABEL_69:
    Controller_ReportFatalError(v3, 2, v40, 0, 0LL, 0LL, 0LL);
LABEL_70:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = 1;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v39, 4, 170, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
    goto LABEL_35;
  }
  v9 = *(_QWORD *)(v3 + 152);
  v10 = 1;
  v71 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 88LL);
  v11 = *(_DWORD *)(v9 + 16);
  *(_QWORD *)v68 = v12;
  LOBYTE(v12) = 0;
  v69 = 0;
  v66 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = (unsigned int)(v10 - 1);
      v14 = 112 * v13;
      v15 = 112 * v13 + *(_QWORD *)(v9 + 48);
      if ( *(_BYTE *)(v15 + 13) != 2 )
      {
        v25 = 0;
        v26 = (unsigned int *)(*(_QWORD *)(v9 + 40) + 16 * v13);
        if ( KeGetCurrentIrql() == 2 )
        {
          v27 = *(_QWORD *)(v9 + 8);
          if ( *(_BYTE *)(v27 + 553) )
          {
            Controller_LowerAndTrackIrql((_QWORD *)v27);
            v25 = 1;
          }
        }
        v28 = *(_QWORD *)(v9 + 48);
        v29 = *(_QWORD *)(v28 + v14 + 24);
        if ( *(_DWORD *)v29 == 1 )
        {
          if ( KeGetCurrentIrql() )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v41, v42, v43);
            if ( !KdRefreshDebuggerNotPresent() )
              __debugbreak();
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
            WdfDriverGlobals,
            *(_QWORD *)(v29 + 8),
            0LL);
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
            WdfDriverGlobals,
            *(_QWORD *)(v29 + 8));
        }
        v30 = *(_QWORD *)v68;
        *(_BYTE *)(v28 + v14 + 32) = v25;
        if ( *(_BYTE *)(*(_QWORD *)(v30 + 8) + 553LL) )
        {
          v65 = 0;
          Register_ReadSecureMmio(v30, (int)v26, 2, 1, &v65);
          v31 = v65;
        }
        else
        {
          v31 = *v26;
        }
        v32 = *(_QWORD *)(v9 + 48);
        v71 = v31;
        v33 = *(_QWORD *)(v14 + v32 + 24);
        v34 = *(_BYTE *)(v14 + v32 + 32);
        *(_BYTE *)(v14 + v32 + 32) = 0;
        if ( *(_DWORD *)v33 == 1 )
        {
          if ( KeGetCurrentIrql() )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v44, v45, v46);
            if ( !KdRefreshDebuggerNotPresent() )
              __debugbreak();
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
            WdfDriverGlobals,
            *(_QWORD *)(v33 + 8));
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
            WdfDriverGlobals,
            *(_QWORD *)(v33 + 8));
        }
        if ( v34 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(v9 + 8));
        v36 = v14 + *(_QWORD *)(v9 + 48);
        v37 = (v31 >> 5) & 0xF;
        if ( v37 == 10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
              v35,
              11,
              260,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v31);
          }
          if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v9 + 8) + 336LL), 8).m128i_u64[0] & 0x8000) != 0 )
            MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
          v47 = *(_DWORD *)(v36 + 88) + 1;
          *(_DWORD *)(v36 + 88) = v47;
          if ( v47 == 3 && !*(_BYTE *)(v36 + 96) )
          {
            LOBYTE(v63) = 0;
            Etw_ReportControllerHealthWithPortInfo(v12, *(_QWORD *)(v9 + 8), v10, (unsigned int)&v71, v63);
            v47 = *(_DWORD *)(v36 + 88);
            *(_BYTE *)(v36 + 96) = 1;
          }
          if ( v47 <= 0x18 )
          {
            LODWORD(v12) = 17043456;
            if ( _bittest((const int *)&v12, v47) )
            {
LABEL_101:
              LOBYTE(v12) = 1;
              _InterlockedExchange((volatile __int32 *)(v15 + 100), 1);
              *(_BYTE *)(v15 + 104) = 1;
              v69 = 1;
              goto LABEL_11;
            }
          }
        }
        else if ( *(_DWORD *)(v36 + 88) )
        {
          LOBYTE(v63) = 1;
          Etw_ReportControllerHealthWithPortInfo(v12, *(_QWORD *)(v9 + 8), v10, (unsigned int)&v71, v63);
          *(_DWORD *)(v36 + 88) = 0;
          *(_BYTE *)(v36 + 96) = 0;
          *(_BYTE *)(v36 + 104) = 0;
        }
        v38 = *(_QWORD *)(v9 + 48) + v14;
        if ( v37 == 6 && *(_DWORD *)(v38 + 108) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
              v35,
              11,
              261,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v31);
          }
          v48 = ++*(_DWORD *)(v38 + 92);
          if ( !*(_BYTE *)(v38 + 96) )
          {
            LOBYTE(v63) = 0;
            Etw_ReportControllerHealthWithPortInfo(v12, *(_QWORD *)(v9 + 8), v10, (unsigned int)&v71, v63);
            v48 = *(_DWORD *)(v38 + 92);
            *(_BYTE *)(v38 + 96) = 1;
          }
          if ( v48 <= 3 )
            goto LABEL_101;
        }
        else if ( *(_DWORD *)(v38 + 92) )
        {
          LOBYTE(v63) = 1;
          Etw_ReportControllerHealthWithPortInfo(v12, *(_QWORD *)(v9 + 8), v10, (unsigned int)&v71, v63);
          *(_DWORD *)(v38 + 92) = 0;
          *(_BYTE *)(v38 + 96) = 0;
          *(_BYTE *)(v38 + 104) = 0;
        }
      }
      LODWORD(v12) = v69;
LABEL_11:
      if ( ++v10 > v66 )
      {
        if ( (_BYTE)v12 == 1 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C00627D0)(UcxDriverGlobals, *(_QWORD *)v9);
        v3 = v67;
        v6 = 0;
        break;
      }
    }
  }
  if ( v70 && *(_BYTE *)(v3 + 472) )
  {
    LOBYTE(v63) = 0;
    Etw_ReportControllerHealthWithPortInfo(v12, v3, 0, 0, v63);
    *(_BYTE *)(v3 + 472) = 0;
  }
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 800), 0, 0);
  if ( !v16 || *(_DWORD *)(v3 + 400) % v16 )
  {
    if ( ++*(_DWORD *)(v3 + 412) == 60 )
    {
      *(_QWORD *)(v3 + 408) = 0LL;
      *(_DWORD *)(v3 + 404) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 174, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
        v6 = 0;
      }
    }
    v17 = *(_QWORD *)(v3 + 120);
    if ( v17 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v17 + 553LL) && KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v49, v50, v51);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      if ( !KeGetCurrentIrql() || *(_QWORD *)(v17 + 72) )
      {
        *(_BYTE *)(v17 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 104));
        do
        {
          v19 = v17 + 88 + ((unsigned __int64)v6 << 6);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
              v18,
              8,
              25,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              v6,
              *(_DWORD *)(v19 + 60));
          }
          v20 = *(__int64 **)(v19 + 80);
          v21 = *(_DWORD *)(v19 + 52);
          if ( v20 != (__int64 *)(v19 + 80) )
          {
            while ( *(_DWORD *)(v19 + 60) > v21 )
            {
              if ( *((_BYTE *)v20 + 16) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v18) = 5;
                  WPP_RECORDER_SF_i(
                    *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
                    v18,
                    8,
                    22,
                    (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
                    (char)v20);
                }
                v52 = 0;
                v53 = *(_DWORD *)(v19 + 36);
                if ( v53 )
                {
                  while ( 1 )
                  {
                    v54 = &v20[11 * v52 + 4];
                    v55 = (__int64 *)*v54;
                    if ( *(__int64 **)(*v54 + 8) != v54 )
                      break;
                    v56 = (__int64 **)v54[1];
                    if ( *v56 != v54 )
                      break;
                    *v56 = v55;
                    v55[1] = (__int64)v56;
                    v54[1] = (__int64)v54;
                    *v54 = (__int64)v54;
                    v57 = v54 + 6;
                    v58 = *v57;
                    if ( *(_QWORD **)(*v57 + 8LL) != v57 )
                      break;
                    v59 = (_QWORD *)v57[1];
                    if ( (_QWORD *)*v59 != v57 )
                      break;
                    *v59 = v58;
                    ++v52;
                    *(_QWORD *)(v58 + 8) = v59;
                    v57[1] = v57;
                    *v57 = v57;
                    v53 = *(_DWORD *)(v19 + 36);
                    if ( v52 >= v53 )
                      goto LABEL_123;
                  }
LABEL_138:
                  __fastfail(3u);
                }
LABEL_123:
                *(_DWORD *)(v19 + 60) -= v53;
                *(_DWORD *)(v19 + 56) -= v53;
                v60 = (__int64 *)*v20;
                if ( *(__int64 **)(*v20 + 8) != v20 )
                  goto LABEL_138;
                v61 = (__int64 **)v20[1];
                if ( *v61 != v20 )
                  goto LABEL_138;
                *v61 = v60;
                v60[1] = (__int64)v61;
                v18 = *(_QWORD *)(v17 + 280);
                if ( *(_QWORD *)v18 != v17 + 272 )
                  goto LABEL_138;
                *v20 = v17 + 272;
                v20[1] = v18;
                *(_QWORD *)v18 = v20;
                *(_QWORD *)(v17 + 280) = v20;
                v20 = v60;
                ++*(_DWORD *)(v17 + 264);
              }
              else
              {
                v62 = *(_DWORD *)(v19 + 36);
                LODWORD(v18) = 0;
                if ( v62 )
                {
                  while ( !v20[11 * (unsigned int)v18 + 13] )
                  {
                    LODWORD(v18) = v18 + 1;
                    if ( (unsigned int)v18 >= v62 )
                      goto LABEL_130;
                  }
                }
                else
                {
LABEL_130:
                  if ( (_DWORD)v18 == v62 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v18) = 5;
                      WPP_RECORDER_SF_i(
                        *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
                        v18,
                        8,
                        23,
                        (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
                        (char)v20);
                    }
                    *((_BYTE *)v20 + 16) = 1;
                    --*(_DWORD *)(v17 + 292);
                  }
                }
                v20 = (__int64 *)*v20;
              }
              if ( v20 == (__int64 *)(v19 + 80) )
                break;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
              v18,
              8,
              26,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              v6,
              *(_DWORD *)(v19 + 60));
          }
          ++v6;
        }
        while ( v6 < 2 );
        v22 = *(_BYTE *)(v17 + 113);
        v23 = (KSPIN_LOCK *)(v17 + 104);
        if ( *(_QWORD *)(v17 + 272) == v17 + 272 )
        {
          KeReleaseSpinLock(v23, v22);
        }
        else
        {
          KeReleaseSpinLock(v23, v22);
          if ( KeGetCurrentIrql() )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
              WdfDriverGlobals,
              *(_QWORD *)(v17 + 72));
          else
            XilCoreCommonBuffer_FreeUnusedResources(v17 + 88);
        }
        v3 = v67;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 171, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    Controller_ReportFatalError(v3, 2, 4159, 0, 0LL, 0LL, 0LL);
  }
LABEL_35:
  result = KeGetCurrentIrql();
  if ( !result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 360),
             -50000000LL);
  return result;
}
