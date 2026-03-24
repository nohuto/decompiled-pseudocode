/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0299588
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C029D060 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A4AC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0161530 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0298F60 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C029906C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0299354 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C029BB20 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 hAdapter; // rdx
  struct DXGADAPTER **v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  struct DXGADAPTER *v27; // r12
  struct DXGADAPTER *v28; // r13
  struct DXGADAPTER *v29; // r14
  __int64 v30; // rax
  int OutputDuplManager; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  OUTPUTDUPL_MGR *v35; // r14
  DXGSESSIONMGR *v36; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  unsigned int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rax
  UINT KeyedMutexCount; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int OutputDuplication; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct DXGPROCESS *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v61; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 Current; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v63[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v64; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+68h] [rbp-98h]
  struct DXGADAPTER *v66; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v67; // [rsp+78h] [rbp-88h] BYREF
  OUTPUTDUPL_MGR *v68; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  char v71; // [rsp+98h] [rbp-68h]
  DXGADAPTER *v72; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v73[144]; // [rsp+B0h] [rbp-50h] BYREF

  v69 = -1;
  v70 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2061LL);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 3187LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v6, v5);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 3192LL;
    WdLogEvent5_WdError(v11);
    LODWORD(v13) = -1073741811;
    goto LABEL_62;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v16 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v16 + 24) = 3199LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v13) = -1073741790;
    goto LABEL_62;
  }
  v60 = 0;
  v17 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (32
                                        * (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(Current + 88)
                                                                                           + 224LL))(
                                            &v60,
                                            0LL,
                                            0LL))) & 0x20;
  *(_DWORD *)a2 = v17;
  if ( !v60 )
  {
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = 3210LL;
    WdLogEvent5_WdError(v20);
    LODWORD(v13) = -2147483611;
    goto LABEL_62;
  }
  hAdapter = a1->hAdapter;
  v22 = &v61;
  v61 = 0LL;
  if ( (v17 & 0x20) != 0 )
    v22 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v72, hAdapter, v10, v22, 1);
  v26 = *(_DWORD *)a2;
  LODWORD(v13) = 0;
  v66 = 0LL;
  v27 = 0LL;
  v67 = 0LL;
  v28 = 0LL;
  v68 = 0LL;
  if ( (v26 & 0x20) == 0 )
  {
    v29 = v61;
    if ( !v61 )
    {
      v30 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v13 = -1073741811LL;
      *(_QWORD *)(v30 + 24) = a1->hAdapter;
LABEL_20:
      *(_QWORD *)(v30 + 32) = v13;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_60;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v61,
                          a1->VidPnSourceId,
                          &v66,
                          (unsigned __int64 *)&v61,
                          &v67,
                          &Current,
                          &v68);
    v13 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v30 + 24) = v29;
      goto LABEL_20;
    }
    v27 = v66;
    v28 = v67;
    v35 = v68;
    goto LABEL_35;
  }
  v36 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 102);
  if ( v36 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33, v32);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v36, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v39 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v39 + 24) = 3257LL;
LABEL_29:
    WdLogEvent5_WdError(v39);
    LODWORD(v13) = -1073741801;
    goto LABEL_60;
  }
  v40 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v40 )
  {
    v39 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v39 + 24) = 3264LL;
    goto LABEL_29;
  }
  v35 = *(OUTPUTDUPL_MGR **)(v40 + 40);
  if ( !v35 )
  {
    v41 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 88) + 328LL))();
    v42 = v41;
    LODWORD(v13) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v40, v41);
    if ( (int)v13 < 0 )
    {
      v43 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v43 + 24) = v42;
      WdLogEvent5_WdError(v43);
      goto LABEL_60;
    }
    v35 = *(OUTPUTDUPL_MGR **)(v40 + 40);
  }
  v10 = (struct _KTHREAD **)Current;
LABEL_35:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v45 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v45 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v45);
      LODWORD(v13) = -1073741811;
      goto LABEL_60;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, v27, v28);
  if ( (*(_DWORD *)a2 & 0x20) != 0
    || (DXGADAPTER::ReleaseReference(v27),
        DXGADAPTER::ReleaseReference(v28),
        LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73, 0LL),
        (int)v13 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v35 + 13) )
    {
      v48 = WdLogNewEntry5_WdError(v47, v46);
      *(_QWORD *)(v48 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v48);
      LODWORD(v13) = -1071774972;
      goto LABEL_46;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63, *((struct _KTHREAD ***)v35 + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v64);
    v65 = 2;
    if ( !*((_DWORD *)v35 + 12) )
    {
      v51 = WdLogNewEntry5_WdError(v50, v49);
      *(_QWORD *)(v51 + 24) = 3332LL;
      WdLogEvent5_WdError(v51);
      LODWORD(v13) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_53;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v35, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v35, a1, a2);
    }
    LODWORD(v13) = OutputDuplication;
LABEL_53:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73, v53);
    if ( (int)v13 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v55 = DXGPROCESS::GetCurrent(v54, v12);
      v56 = v55 ? *((_QWORD *)v55 + 11) : 0LL;
      v64 = (DXGPUSHLOCK *)v10;
      LOBYTE(v65) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v63, 1LL);
      (*(void (**)(void))(v56 + 192))();
      if ( (_BYTE)v65 )
      {
        LOBYTE(v65) = 0;
        (*(void (**)(void))(*((_QWORD *)v64 + 11) + 40LL))();
      }
    }
    goto LABEL_60;
  }
LABEL_46:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73, v46);
LABEL_60:
  if ( v72 )
    DXGADAPTER::ReleaseReference(v72);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v12);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v69);
  return (unsigned int)v13;
}
