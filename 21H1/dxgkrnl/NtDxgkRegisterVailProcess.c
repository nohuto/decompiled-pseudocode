/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C02B3CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00080DC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000A72C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A1C0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00251CC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C004B9C0 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C005C908 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0281334 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0281A44 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B0E4C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int128 *a1)
{
  struct DXGVAILOBJECT *v2; // rdi
  int NumStartedVirtualGpu; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  struct _KTHREAD **v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *i; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE v37[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v38[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v39; // [rsp+50h] [rbp-38h] BYREF

  v2 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = 785LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225659LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v39 = *a1;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    LODWORD(v13) = -1073741275;
    v14 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v16, v15);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v37,
      (struct DXGGLOBAL *)((char *)Global + 320));
    v20 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal(v19, v18) + 1472);
    for ( i = (_QWORD *)*v20; i != v20; i = (_QWORD *)*i )
    {
      v22 = i[30] - v39;
      if ( !v22 )
        v22 = i[31] - *((_QWORD *)&v39 + 1);
      if ( !v22 )
      {
        v14 = (struct _KTHREAD **)(i - 1);
        break;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    if ( v14 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v38,
        (struct DXGPUSHLOCK *const)(v14 + 8));
      v2 = DXGVIRTUALMACHINE::ReferenceVailObject(v14, v26);
      if ( v2 )
      {
        NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v14);
        LODWORD(v13) = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    }
    if ( (int)v13 >= 0 )
    {
      if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
      {
        LODWORD(v13) = 0;
      }
      else
      {
        v32 = DxgkCompositionObject::AccessCheck(v2);
        v13 = v32;
        if ( v32 < 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v33 + 24) = v13;
          WdLogEvent5_WdWarning(v33);
        }
        if ( (int)v13 < 0 )
          goto LABEL_29;
      }
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v37);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v39, (struct DXGFASTMUTEX *const *)Current);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
      DXGPROCESS::SetVailObject(Current, v2);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v39, v34);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37, v35);
      *((_DWORD *)v2 + 32) = PsGetCurrentProcessSessionId(v36);
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v27 + 24) = (int)v13;
      WdLogEvent5_WdWarning(v27);
    }
LABEL_29:
    if ( !NumStartedVirtualGpu )
    {
      LODWORD(v13) = -1071775727;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = -1071775727LL;
    }
    if ( v2 )
      DxgkCompositionObject::Release(v2);
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
  v12 = WdLogNewEntry5_WdError(v10, v9);
  LODWORD(v13) = -1073741786;
  *(_QWORD *)(v12 + 24) = -1073741786LL;
  WdLogEvent5_WdError(v12);
  return (unsigned int)v13;
}
