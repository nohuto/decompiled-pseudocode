/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     Register_ReadSecureMmio @ 0x1C003C240 (Register_ReadSecureMmio.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C00479BC (Etw_ReportControllerHealthWithPortInfo.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050038 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0050678 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // r9d
  const char *v6; // r8
  __int64 v7; // rcx
  int *v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rsi
  int *v15; // rbp
  unsigned __int32 v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned int i; // ebx
  unsigned __int64 v20; // rdi
  __int64 *v21; // r14
  unsigned int v22; // ebp
  bool v23; // bl
  __int64 result; // rax
  int *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r13
  int *v28; // r15
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // edx
  char v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdi
  char v36; // r15
  int v37; // ecx
  int v38; // edx
  int v39; // r8d
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 *v44; // rax
  __int64 *v45; // r8
  __int64 **v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r8
  _QWORD *v49; // rcx
  __int64 *v50; // rcx
  __int64 **v51; // rax
  unsigned int v52; // r8d
  char v53; // [rsp+28h] [rbp-70h]
  int v54; // [rsp+40h] [rbp-58h] BYREF
  int v55; // [rsp+44h] [rbp-54h] BYREF
  __int64 v56; // [rsp+48h] [rbp-50h]
  int v57[2]; // [rsp+50h] [rbp-48h]
  int v58; // [rsp+A8h] [rbp+10h] BYREF
  char v59; // [rsp+B0h] [rbp+18h]
  char v60; // [rsp+B8h] [rbp+20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0060428);
  v56 = v3;
  ++*(_DWORD *)(v3 + 400);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0060068);
  LODWORD(v6) = 711573504;
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) >= 864000000000LL )
  {
    v60 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v60 = 0;
  }
  v7 = *(_QWORD *)(v3 + 88);
  v8 = (int *)(*(_QWORD *)(v7 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 8) + 537LL) )
  {
    v54 = 0;
    Register_ReadSecureMmio(v7, (int)v8, 2, 1, &v54);
    v9 = v54;
  }
  else
  {
    v9 = *v8;
  }
  if ( v9 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v8,
        4,
        268,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
    LOBYTE(v8) = 1;
    Controller_SetControllerGone(v3, v8);
    goto LABEL_66;
  }
  if ( (v9 & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v8,
        4,
        269,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        v9);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v39 = 4097;
    goto LABEL_65;
  }
  if ( (v9 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v8,
        4,
        270,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        v9);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v39 = 4098;
LABEL_65:
    Controller_ReportFatalError(v3, 2, v39, 0, 0LL, 0LL, 0LL);
LABEL_66:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 1;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v38, 4, 169, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
    goto LABEL_32;
  }
  v10 = *(_QWORD *)(v3 + 152);
  v11 = 1;
  v58 = 0;
  v12 = *(_DWORD *)(v10 + 16);
  *(_QWORD *)v57 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 88LL);
  if ( v12 )
  {
    v6 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
    do
    {
      v8 = *(int **)(v10 + 48);
      v13 = v11 - 1;
      v14 = 104 * v13;
      v15 = &v8[26 * v13];
      if ( *((_BYTE *)v15 + 13) != 2 )
      {
        v25 = (int *)(*(_QWORD *)(v10 + 40) + 16 * v13);
        v59 = 0;
        LOBYTE(v58) = 0;
        if ( KeGetCurrentIrql() == 2 )
        {
          v26 = *(_QWORD *)(v10 + 8);
          if ( *(_BYTE *)(v26 + 537) )
          {
            Controller_LowerAndTrackIrql((_QWORD *)v26);
            v8 = *(int **)(v10 + 48);
            LOBYTE(v58) = 1;
          }
        }
        v27 = *(_QWORD *)&v8[(unsigned __int64)v14 / 4 + 6];
        v28 = &v8[(unsigned __int64)v14 / 4];
        if ( *(_DWORD *)v27 == 1 )
        {
          if ( KeGetCurrentIrql() )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v8,
                (unsigned int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
                v5);
            if ( !KdRefreshDebuggerNotPresent() )
              __debugbreak();
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
            WdfDriverGlobals,
            *(_QWORD *)(v27 + 8),
            0LL);
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *))(WdfFunctions_01023 + 2528))(
            WdfDriverGlobals,
            *(_QWORD *)(v27 + 8),
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c");
        }
        v31 = *(_QWORD *)v57;
        *((_BYTE *)v28 + 32) = v58;
        if ( *(_BYTE *)(*(_QWORD *)(v31 + 8) + 537LL) )
        {
          v55 = 0;
          Register_ReadSecureMmio(v31, (int)v25, 2, 1, &v55);
          v32 = v55;
        }
        else
        {
          v32 = *v25;
        }
        v58 = v32;
        if ( (v32 & 0x1E0) == 0x140 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v53 = v32;
            LOBYTE(v32) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL),
              v32,
              11,
              259,
              (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
              v53);
          }
          v33 = 1;
          if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v10 + 8) + 336LL), 8).m128i_u64[0] & 0x8000) != 0 )
            MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
        }
        else
        {
          if ( v15[22] )
          {
            Etw_ReportControllerHealthWithPortInfo(v31, *(_QWORD *)(v10 + 8), v11, (unsigned int)&v58, 1);
            v15[22] = 0;
            *((_BYTE *)v15 + 92) = 0;
            *((_BYTE *)v15 + 100) = 0;
          }
          v33 = v59;
        }
        v34 = *(_QWORD *)(v10 + 48);
        v35 = *(_QWORD *)(v14 + v34 + 24);
        v36 = *(_BYTE *)(v14 + v34 + 32);
        *(_BYTE *)(v14 + v34 + 32) = 0;
        if ( *(_DWORD *)v35 == 1 )
        {
          if ( KeGetCurrentIrql() )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v32, v29, v30);
            if ( !KdRefreshDebuggerNotPresent() )
              __debugbreak();
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
            WdfDriverGlobals,
            *(_QWORD *)(v35 + 8));
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
            WdfDriverGlobals,
            *(_QWORD *)(v35 + 8));
        }
        if ( v36 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(v10 + 8));
        if ( v33 )
        {
          v40 = v15[22] + 1;
          v15[22] = v40;
          if ( v40 == 3 && !*((_BYTE *)v15 + 92) )
          {
            Etw_ReportControllerHealthWithPortInfo(v37, *(_QWORD *)(v10 + 8), v11, (unsigned int)&v58, 0);
            v40 = v15[22];
            *((_BYTE *)v15 + 92) = 1;
          }
          if ( v40 <= 0x18 )
          {
            v41 = 17043456;
            if ( _bittest(&v41, v40) )
            {
              _InterlockedExchange(v15 + 24, 1);
              ((void (__fastcall *)(__int64, _QWORD))qword_1C00616D0)(UcxDriverGlobals, *(_QWORD *)v10);
              *((_BYTE *)v15 + 100) = 1;
            }
          }
        }
        v6 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
      }
      ++v11;
    }
    while ( v11 <= v12 );
    v3 = v56;
  }
  if ( v60 && *(_BYTE *)(v3 + 472) )
  {
    Etw_ReportControllerHealthWithPortInfo((unsigned int)"Code Path Requires Passive Level", v3, 0, 0, 0);
    *(_BYTE *)(v3 + 472) = 0;
  }
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 784), 0, 0);
  if ( !v16 || (LODWORD(v8) = *(_DWORD *)(v3 + 400) % v16, (_DWORD)v8) )
  {
    if ( ++*(_DWORD *)(v3 + 412) == 60 )
    {
      *(_QWORD *)(v3 + 408) = 0LL;
      *(_DWORD *)(v3 + 404) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 173, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
    v17 = *(_QWORD *)(v3 + 120);
    if ( v17 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v17 + 537LL) && KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v8, (_DWORD)v6, v5);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      if ( !KeGetCurrentIrql() || *(_QWORD *)(v17 + 72) )
      {
        *(_BYTE *)(v17 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 104));
        for ( i = 0; i < 2; ++i )
        {
          v20 = v17 + 88 + ((unsigned __int64)i << 6);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
              v18,
              8,
              25,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              i,
              *(_DWORD *)(v20 + 60));
          }
          v21 = *(__int64 **)(v20 + 80);
          v22 = *(_DWORD *)(v20 + 52);
          if ( v21 != (__int64 *)(v20 + 80) )
          {
            while ( *(_DWORD *)(v20 + 60) > v22 )
            {
              if ( *((_BYTE *)v21 + 16) )
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
                    (char)v21);
                }
                v42 = 0;
                v43 = *(_DWORD *)(v20 + 36);
                if ( v43 )
                {
                  while ( 1 )
                  {
                    v44 = &v21[11 * v42 + 4];
                    v45 = (__int64 *)*v44;
                    if ( *(__int64 **)(*v44 + 8) != v44 )
                      break;
                    v46 = (__int64 **)v44[1];
                    if ( *v46 != v44 )
                      break;
                    *v46 = v45;
                    v45[1] = (__int64)v46;
                    v44[1] = (__int64)v44;
                    *v44 = (__int64)v44;
                    v47 = v44 + 6;
                    v48 = *v47;
                    if ( *(_QWORD **)(*v47 + 8LL) != v47 )
                      break;
                    v49 = (_QWORD *)v47[1];
                    if ( (_QWORD *)*v49 != v47 )
                      break;
                    *v49 = v48;
                    ++v42;
                    *(_QWORD *)(v48 + 8) = v49;
                    v47[1] = v47;
                    *v47 = v47;
                    v43 = *(_DWORD *)(v20 + 36);
                    if ( v42 >= v43 )
                      goto LABEL_112;
                  }
LABEL_127:
                  __fastfail(3u);
                }
LABEL_112:
                *(_DWORD *)(v20 + 60) -= v43;
                *(_DWORD *)(v20 + 56) -= v43;
                v50 = (__int64 *)*v21;
                if ( *(__int64 **)(*v21 + 8) != v21 )
                  goto LABEL_127;
                v51 = (__int64 **)v21[1];
                if ( *v51 != v21 )
                  goto LABEL_127;
                *v51 = v50;
                v50[1] = (__int64)v51;
                v18 = *(_QWORD *)(v17 + 280);
                if ( *(_QWORD *)v18 != v17 + 272 )
                  goto LABEL_127;
                *v21 = v17 + 272;
                v21[1] = v18;
                *(_QWORD *)v18 = v21;
                *(_QWORD *)(v17 + 280) = v21;
                v21 = v50;
                ++*(_DWORD *)(v17 + 264);
              }
              else
              {
                v52 = *(_DWORD *)(v20 + 36);
                LODWORD(v18) = 0;
                if ( v52 )
                {
                  do
                  {
                    if ( v21[11 * (unsigned int)v18 + 13] )
                      break;
                    LODWORD(v18) = v18 + 1;
                  }
                  while ( (unsigned int)v18 < v52 );
                }
                if ( (_DWORD)v18 == v52 )
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
                      (char)v21);
                  }
                  *((_BYTE *)v21 + 16) = 1;
                  --*(_DWORD *)(v17 + 292);
                }
                v21 = (__int64 *)*v21;
              }
              if ( v21 == (__int64 *)(v20 + 80) )
                break;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v17 + 96) + 72LL),
              v18,
              8,
              26,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              i,
              *(_DWORD *)(v20 + 60));
          }
        }
        v23 = *(_QWORD *)(v17 + 272) != v17 + 272;
        KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 104), *(_BYTE *)(v17 + 113));
        if ( v23 )
        {
          if ( KeGetCurrentIrql() )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
              WdfDriverGlobals,
              *(_QWORD *)(v17 + 72));
          else
            XilCoreCommonBuffer_FreeUnusedResources(v17 + 88);
        }
        v3 = v56;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 170, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    Controller_ReportFatalError(v3, 2, 4159, 0, 0LL, 0LL, 0LL);
  }
LABEL_32:
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 360),
             -50000000LL);
  return result;
}
