/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     RootHub_DetectLinkErrorState @ 0x1C001AFA4 (RootHub_DetectLinkErrorState.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     Register_ReadSecureMmio @ 0x1C003D720 (Register_ReadSecureMmio.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C0048EBC (Etw_ReportControllerHealthWithPortInfo.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050BA8 (XilCoreCommonBuffer_FreeUnusedResources.c)
 */

__int64 __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  char v5; // bl
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned __int32 v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdx
  unsigned int i; // ebx
  __int64 v18; // rdi
  __int64 *v19; // r12
  unsigned int v20; // r14d
  bool v21; // bl
  __int64 result; // rax
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 *v27; // rax
  __int64 *v28; // r8
  __int64 **v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rcx
  __int64 *v33; // rcx
  __int64 **v34; // rax
  unsigned int v35; // r8d
  int v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+78h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0061428);
  ++*(_DWORD *)(v3 + 400);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0061068);
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) >= 864000000000LL )
  {
    v5 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)(v3 + 88);
  v7 = (int *)(*(_QWORD *)(v6 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 553LL) )
  {
    LODWORD(v37) = 0;
    Register_ReadSecureMmio(v6, (int)v7, 2, 1, &v37);
    v8 = v37;
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
        268,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    }
    LOBYTE(v7) = 1;
    Controller_SetControllerGone(v3, v7);
    goto LABEL_43;
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
        269,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v24 = 4097;
    goto LABEL_42;
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
        270,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v24 = 4098;
LABEL_42:
    Controller_ReportFatalError(v3, 2, v24, 0, 0LL, 0LL, 0LL);
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 1;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v23, 4, 169, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    }
    goto LABEL_26;
  }
  RootHub_DetectLinkErrorState(*(_QWORD *)(v3 + 152));
  if ( v5 && *(_BYTE *)(v3 + 472) )
  {
    LOBYTE(v36) = 0;
    Etw_ReportControllerHealthWithPortInfo(v10, v3, 0, 0, v36);
    *(_BYTE *)(v3 + 472) = 0;
  }
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 800), 0, 0);
  if ( !v13 || (v9 = *(_DWORD *)(v3 + 400) % v13) != 0 )
  {
    if ( ++*(_DWORD *)(v3 + 412) == 60 )
    {
      *(_QWORD *)(v3 + 408) = 0LL;
      *(_DWORD *)(v3 + 404) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 173, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    }
    v14 = *(_QWORD *)(v3 + 120);
    v37 = v14;
    if ( v14 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v14 + 553LL) && KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v11, v12);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        v14 = v37;
      }
      if ( !KeGetCurrentIrql() || *(_QWORD *)(v14 + 72) )
      {
        v15 = v14 + 88;
        *(_BYTE *)(v14 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 104));
        for ( i = 0; i < 2; ++i )
        {
          v18 = v15 + ((unsigned __int64)i << 6);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v16) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v15 + 8) + 72LL),
              v16,
              8,
              25,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              i,
              *(_DWORD *)(v18 + 60));
          }
          v19 = *(__int64 **)(v18 + 80);
          v20 = *(_DWORD *)(v18 + 52);
          if ( v19 != (__int64 *)(v18 + 80) )
          {
            while ( *(_DWORD *)(v18 + 60) > v20 )
            {
              if ( *((_BYTE *)v19 + 16) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v16) = 5;
                  WPP_RECORDER_SF_i(
                    *(_QWORD *)(*(_QWORD *)(v15 + 8) + 72LL),
                    v16,
                    8,
                    22,
                    (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
                    (char)v19);
                }
                v25 = *(_DWORD *)(v18 + 36);
                v26 = 0;
                if ( v25 )
                {
                  while ( 1 )
                  {
                    v27 = &v19[11 * v26 + 4];
                    v28 = (__int64 *)*v27;
                    if ( *(__int64 **)(*v27 + 8) != v27 )
                      break;
                    v29 = (__int64 **)v27[1];
                    if ( *v29 != v27 )
                      break;
                    *v29 = v28;
                    v28[1] = (__int64)v29;
                    v27[1] = (__int64)v27;
                    *v27 = (__int64)v27;
                    v30 = v27 + 6;
                    v31 = *v30;
                    if ( *(_QWORD **)(*v30 + 8LL) != v30 )
                      break;
                    v32 = (_QWORD *)v30[1];
                    if ( (_QWORD *)*v32 != v30 )
                      break;
                    *v32 = v31;
                    ++v26;
                    *(_QWORD *)(v31 + 8) = v32;
                    v30[1] = v30;
                    *v30 = v30;
                    v25 = *(_DWORD *)(v18 + 36);
                    if ( v26 >= v25 )
                      goto LABEL_67;
                  }
LABEL_82:
                  __fastfail(3u);
                }
LABEL_67:
                *(_DWORD *)(v18 + 60) -= v25;
                *(_DWORD *)(v18 + 56) -= v25;
                v33 = (__int64 *)*v19;
                if ( *(__int64 **)(*v19 + 8) != v19 )
                  goto LABEL_82;
                v34 = (__int64 **)v19[1];
                if ( *v34 != v19 )
                  goto LABEL_82;
                *v34 = v33;
                v33[1] = (__int64)v34;
                v16 = *(_QWORD *)(v15 + 192);
                if ( *(_QWORD *)v16 != v15 + 184 )
                  goto LABEL_82;
                *v19 = v15 + 184;
                v19[1] = v16;
                *(_QWORD *)v16 = v19;
                *(_QWORD *)(v15 + 192) = v19;
                v19 = v33;
                ++*(_DWORD *)(v15 + 176);
              }
              else
              {
                v35 = *(_DWORD *)(v18 + 36);
                LODWORD(v16) = 0;
                if ( v35 )
                {
                  do
                  {
                    if ( v19[11 * (unsigned int)v16 + 13] )
                      break;
                    LODWORD(v16) = v16 + 1;
                  }
                  while ( (unsigned int)v16 < v35 );
                }
                if ( (_DWORD)v16 == v35 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(v16) = 5;
                    WPP_RECORDER_SF_i(
                      *(_QWORD *)(*(_QWORD *)(v15 + 8) + 72LL),
                      v16,
                      8,
                      23,
                      (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
                      (char)v19);
                  }
                  *((_BYTE *)v19 + 16) = 1;
                  --*(_DWORD *)(v15 + 204);
                }
                v19 = (__int64 *)*v19;
              }
              if ( v19 == (__int64 *)(v18 + 80) )
                break;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v16) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v15 + 8) + 72LL),
              v16,
              8,
              26,
              (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
              i,
              *(_DWORD *)(v18 + 60));
          }
        }
        v21 = *(_QWORD *)(v15 + 184) != v15 + 184;
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 16), *(_BYTE *)(v15 + 25));
        if ( v21 )
        {
          if ( KeGetCurrentIrql() )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
              WdfDriverGlobals,
              *(_QWORD *)(v37 + 72));
          else
            XilCoreCommonBuffer_FreeUnusedResources(v15);
        }
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 170, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    Controller_ReportFatalError(v3, 2, 4159, 0, 0LL, 0LL, 0LL);
  }
LABEL_26:
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 360),
             -50000000LL);
  return result;
}
