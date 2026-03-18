/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0324550 (DxgkCreateOutputDupl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C031FD78 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C031FEB8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C032023C (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C0322D78 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  struct DXGADAPTER **v24; // r9
  D3DKMT_HANDLE hAdapter; // edx
  int v26; // eax
  struct DXGADAPTER *v27; // r12
  struct DXGADAPTER *v28; // rsi
  struct DXGADAPTER *v29; // rdx
  int OutputDuplManager; // eax
  OUTPUTDUPL_MGR *v31; // rsi
  __int64 v32; // rcx
  DXGSESSIONMGR *v33; // rsi
  unsigned int v34; // eax
  struct DXGSESSIONDATA *v35; // rax
  OUTPUTDUPL_SESSION_MGR *v36; // r15
  __int64 v37; // rbx
  const wchar_t *v38; // r9
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  UINT KeyedMutexCount; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  int OutputDuplication; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct DXGPROCESS *v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v55; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 Current; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v57[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v60; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v61; // [rsp+88h] [rbp-78h] BYREF
  OUTPUTDUPL_MGR *v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h]
  char v65; // [rsp+A8h] [rbp-58h]
  DXGADAPTER *v66; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v67[144]; // [rsp+C0h] [rbp-40h] BYREF

  v63 = -1;
  v3 = 0LL;
  v64 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    WdLogSingleEntry1(1LL, 3166LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(ULONG_PTR)pCreate > MM_USER_PROBE_ADDRESS",
      3166LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v10 = Current;
  if ( !Current )
  {
    v11 = 3171LL;
    WdLogSingleEntry1(2LL, 3171LL);
    v12 = L"Invalid process context.";
    LODWORD(v13) = -1073741811;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_66;
  }
  v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v15 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
  {
    v11 = 3179LL;
    WdLogSingleEntry1(2LL, 3179LL);
    v12 = L"Screen capture (DDA) is disabled in VAIL container";
    LODWORD(v13) = -1073741790;
    goto LABEL_18;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v11 = 3186LL;
    WdLogSingleEntry1(2LL, 3186LL);
    v12 = L"Screen capture (DDA) is disabled because of MDM policy";
    LODWORD(v13) = -1073741790;
    goto LABEL_18;
  }
  v22 = (*(_DWORD *)a2 ^ (32 * DxgIsRemoteSessionUsingXddmMonitors(v19, v18, v20, v21))) & 0x20;
  v54 = 0;
  *(_DWORD *)a2 ^= v22;
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(v10 + 88) + 224LL))(&v54, 0LL, 0LL);
  if ( !v54 )
  {
    v11 = 3198LL;
    WdLogSingleEntry1(2LL, 3198LL);
    v12 = L"Output duplication is not supported on disconnected session";
    LODWORD(v13) = -2147483611;
    goto LABEL_18;
  }
  v23 = *(_DWORD *)a2;
  v24 = &v55;
  hAdapter = a1->hAdapter;
  v55 = 0LL;
  if ( (v23 & 0x20) != 0 )
    v24 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, hAdapter, (struct _KTHREAD **)v10, v24, 1);
  v26 = *(_DWORD *)a2;
  LODWORD(v13) = 0;
  v62 = 0LL;
  v27 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  if ( (v26 & 0x20) == 0 )
  {
    v28 = v55;
    if ( !v55 )
    {
      v29 = (struct DXGADAPTER *)a1->hAdapter;
      v13 = -1073741811LL;
LABEL_26:
      WdLogSingleEntry2(3LL, v29, v13);
      goto LABEL_64;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v55,
                          a1->VidPnSourceId,
                          &v60,
                          (unsigned __int64 *)&v55,
                          &v61,
                          &Current,
                          &v62);
    v13 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v29 = v28;
      goto LABEL_26;
    }
    v27 = v60;
    v3 = v61;
    v31 = v62;
    goto LABEL_37;
  }
  v33 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v33
    && (v34 = PsGetCurrentProcessSessionId(v32),
        (v35 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v33, v34)) != 0LL) )
  {
    v36 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)v35 + 1);
    if ( v36 )
    {
      v31 = (OUTPUTDUPL_MGR *)*((_QWORD *)v36 + 15);
      if ( !v31 )
      {
        v39 = (*(unsigned int (**)(void))(*(_QWORD *)(Current + 88) + 328LL))();
        LODWORD(v13) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(v36, v39, v40, v41);
        if ( (int)v13 < 0 )
        {
          WdLogSingleEntry1(2LL, (unsigned int)v39);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create remote output duplication manager for 0x%I64x sources",
            v39,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_64;
        }
        v31 = (OUTPUTDUPL_MGR *)*((_QWORD *)v36 + 15);
      }
      v10 = Current;
LABEL_37:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          WdLogSingleEntry1(2LL, a1->KeyedMutexCount);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid KeyedMutexCount specified 0x%I64x",
            a1->KeyedMutexCount,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v13) = -1073741811;
          goto LABEL_64;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v27, v3);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v27);
        DXGADAPTER::ReleaseReference(v3);
        LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67, 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_48;
      }
      VidPnSourceId = a1->VidPnSourceId;
      if ( VidPnSourceId >= *((_DWORD *)v31 + 19) )
      {
        WdLogSingleEntry1(2LL, VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid source ID 0x%I64x",
          a1->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1071774972;
LABEL_48:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
        goto LABEL_64;
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57, (struct _KTHREAD **)v31 + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v58);
      v59 = 2;
      if ( !*((_DWORD *)v31 + 18) )
      {
        WdLogSingleEntry1(2LL, 3320LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Connection currently not allowed",
          3320LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -2147483611;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
        goto LABEL_48;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
          goto LABEL_54;
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v31, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v31, a1, a2);
      }
      LODWORD(v13) = OutputDuplication;
LABEL_54:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
      if ( (int)v13 >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
      {
        v49 = DXGPROCESS::GetCurrent(v46, v45, v47, v48);
        v50 = v49 ? *((_QWORD *)v49 + 11) : 0LL;
        v58 = (DXGPUSHLOCK *)v10;
        LOBYTE(v59) = 0;
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v57, 1u);
        (*(void (**)(void))(v50 + 192))();
        if ( (_BYTE)v59 )
        {
          LOBYTE(v59) = 0;
          (*(void (**)(void))(*((_QWORD *)v58 + 11) + 40LL))();
        }
      }
      goto LABEL_64;
    }
    v37 = 3252LL;
    WdLogSingleEntry1(2LL, 3252LL);
    v38 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    v37 = 3245LL;
    WdLogSingleEntry1(2LL, 3245LL);
    v38 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v38, v37, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v13) = -1073741801;
LABEL_64:
  if ( v66 )
    DXGADAPTER::ReleaseReference(v66);
LABEL_66:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 )
  {
    LOBYTE(v51) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v63);
  }
  return (unsigned int)v13;
}
