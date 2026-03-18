/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C0353BC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C005B930 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C006C364 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0336E18 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C033770C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C03515D4 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  struct DXGVAILOBJECT *v4; // rsi
  int NumStartedVirtualGpu; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPROCESS *Current; // r14
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // sf
  struct _KTHREAD **v21; // rdi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v23; // rax
  _QWORD *i; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // [rsp+50h] [rbp-78h] BYREF
  __int64 v33; // [rsp+58h] [rbp-70h]
  char v34; // [rsp+60h] [rbp-68h]
  _BYTE v35[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v36[24]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v37; // [rsp+98h] [rbp-30h] BYREF

  v3 = (__int128 *)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2214;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2214);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2214);
  v4 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( DXGVAILOBJECT::IsFeatureEnabled(v7, v6, v8, v9) )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v37 = *v3;
    Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v10, v11, v12);
    if ( Current )
    {
      KeEnterCriticalRegion();
      v17 = -1073741275;
      v21 = 0LL;
      Global = DXGGLOBAL_GetGlobal();
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v35,
        (struct _KTHREAD **)Global + 61);
      v23 = (_QWORD *)((char *)DXGGLOBAL_GetGlobal() + 1752);
      for ( i = (_QWORD *)*v23; i != v23; i = (_QWORD *)*i )
      {
        v25 = i[35] - v37;
        if ( !v25 )
          v25 = i[36] - *((_QWORD *)&v37 + 1);
        if ( !v25 )
        {
          v21 = (struct _KTHREAD **)(i - 1);
          break;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
      if ( v21 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v36, v21 + 8);
        v4 = DXGVIRTUALMACHINE::ReferenceVailObject(v21);
        if ( v4 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v21);
          v17 = 0;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
      }
      if ( v17 >= 0 )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DisableVailSecurity__private_reporting,
          0x194A901u,
          v26,
          v27,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
          0);
        v30 = DxgkCompositionObject::AccessCheck(v4);
        v17 = v30;
        if ( v30 < 0 )
          WdLogSingleEntry1(3LL, v30);
        if ( v17 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v35);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v37, Current);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v37);
          DXGPROCESS::SetVailObject(Current, v4);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v37);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
          *((_DWORD *)v4 + 34) = PsGetCurrentProcessSessionId(v31);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v17);
      }
      if ( !NumStartedVirtualGpu )
      {
        v17 = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28) + 24) = -1071775727LL;
      }
      if ( v4 )
        DxgkCompositionObject::Release(v4);
      KeLeaveCriticalRegion();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( !v34 )
        return (unsigned int)v17;
      v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    else
    {
      v17 = -1073741786;
      WdLogSingleEntry1(2LL, -1073741786LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context. Returning 0x%I64x",
        -1073741786LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( !v34 )
        return (unsigned int)v17;
      LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    if ( v20 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v32);
    return (unsigned int)v17;
  }
  WdLogSingleEntry1(3LL, 782LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v32);
  }
  return 3221225659LL;
}
