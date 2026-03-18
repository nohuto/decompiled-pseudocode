/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C015CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C000F3A0 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011D30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0113CE0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0127FA4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C015D2DC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C015D310 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  char v16; // r12
  struct _D3DKMT_GETDISPLAYMODELIST *v17; // rax
  bool v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rsi
  _QWORD *v23; // rax
  int PairingAdapters; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  struct DXGADAPTER *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  PRKPROCESS *v40; // rsi
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v48; // dl
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v53; // ebx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r14
  _QWORD *v57; // rax
  __int64 hAdapter; // rcx
  ADAPTER_DISPLAY *v59; // rcx
  __int64 j; // rdx
  __int64 ModeCount; // rcx
  int v62; // r12d
  unsigned __int64 v63; // rax
  UINT v64; // r12d
  ULONG64 v65; // r13
  __int64 v66; // rsi
  __int64 v67; // rbx
  size_t v68; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v70; // rcx
  UINT i; // r8d
  struct DXGSESSIONDATA *v72; // rbx
  struct DXGGLOBAL *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned __int8 v78[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v79; // [rsp+44h] [rbp-1A4h]
  int v80; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v81; // [rsp+50h] [rbp-198h]
  char v82; // [rsp+58h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+60h] [rbp-188h] BYREF
  UINT v84; // [rsp+78h] [rbp-170h]
  int v85; // [rsp+7Ch] [rbp-16Ch]
  int v86; // [rsp+80h] [rbp-168h]
  struct DXGADAPTER *v87; // [rsp+88h] [rbp-160h] BYREF
  struct DXGADAPTER *v88; // [rsp+90h] [rbp-158h] BYREF
  ULONG64 v89; // [rsp+98h] [rbp-150h]
  struct DXGSESSIONDATA *v90; // [rsp+A0h] [rbp-148h]
  struct _KTHREAD **v91; // [rsp+A8h] [rbp-140h]
  DXGADAPTER *v92[2]; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v93; // [rsp+C0h] [rbp-128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-120h] BYREF
  char v95; // [rsp+F8h] [rbp-F0h]
  _BYTE v96[144]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+190h] [rbp-58h]
  int v98; // [rsp+1A0h] [rbp-48h]
  int v99; // [rsp+1A4h] [rbp-44h]
  int v100; // [rsp+1A8h] [rbp-40h]

  v89 = a1;
  v80 = -1;
  v81 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v82 = 1;
    v80 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v82 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v80, 2017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v91 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v12);
    v15 = v82 == 0;
LABEL_25:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v80);
    return 3221225485LL;
  }
  v78[0] = 0;
  v16 = 0;
  v17 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
  Src = *v17;
  v18 = Src.pModeList != 0LL;
  Src.pModeList = 0LL;
  v87 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v92, Src.hAdapter, Current, &v87, 1);
  v22 = v87;
  if ( !v87 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = -1073741811LL;
    v23[4] = Current;
    v23[5] = Src.hAdapter;
    WdLogEvent5_WdWarning(v23);
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v52);
    v15 = v82 == 0;
    goto LABEL_25;
  }
  v88 = 0LL;
  v93 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v87, Src.VidPnSourceId, 0LL, 0LL, &v88, &v93, 0);
  v27 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v25);
    v28[3] = v22;
    v28[4] = Src.VidPnSourceId;
    v28[5] = v27;
    WdLogEvent5_WdEvent(v28);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v29);
    v32 = v82 == 0;
    goto LABEL_13;
  }
  v34 = v88;
  if ( !v88 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v35 + 24) = 5623LL;
    WdLogEvent5_WdAssertion(v35);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v96, v34, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v34);
  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v37, v36) )
  {
    v40 = 0LL;
    v90 = 0LL;
    v41 = DxgkAcquireSessionModeChangeLock(0LL, v38);
    v27 = v41;
    if ( v41 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v44 + 24) = v27;
      WdLogEvent5_WdError(v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96, v45);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v92);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v46);
      v32 = v82 == 0;
LABEL_13:
      if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v80);
      return (unsigned int)v27;
    }
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v39, v38);
    v40 = (PRKPROCESS *)DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 88), v48);
    v90 = (struct DXGSESSIONDATA *)v40;
    if ( !v40 )
    {
      v50 = WdLogNewEntry5_WdError(v43, v49);
      *(_QWORD *)(v50 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v50);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96, v51);
      goto LABEL_24;
    }
  }
  v95 = 0;
  if ( v40 )
  {
    v53 = *(_DWORD *)v40;
    if ( (unsigned int)PsGetCurrentProcessSessionId(v43) != v53 )
    {
      v16 = 1;
      CPROCESSATTACHHELPER::Attach(&ApcState, v40[2329]);
    }
  }
  v54 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v96, 0LL);
  v56 = v54;
  v79 = v54;
  if ( v54 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
    v57[3] = v56;
    v57[4] = Current;
    hAdapter = Src.hAdapter;
    v57[6] = v34;
LABEL_37:
    v57[5] = hAdapter;
    WdLogEvent5_WdDmmEvent(v57);
    goto LABEL_39;
  }
  v59 = (ADAPTER_DISPLAY *)*((_QWORD *)v34 + 334);
  if ( Src.VidPnSourceId >= *((_DWORD *)v59 + 20) || !ADAPTER_DISPLAY::IsPartOfDesktop(v59, Src.VidPnSourceId) )
  {
    LODWORD(v56) = -1071774972;
    v79 = -1071774972;
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59);
    v57[3] = -1071774972LL;
    v57[4] = v34;
    hAdapter = Src.VidPnSourceId;
    goto LABEL_37;
  }
  LODWORD(v56) = DxgkpGetDisplayModeList(v34, (struct COREADAPTERACCESS *)v96, 0, &Src, v78);
  v79 = v56;
LABEL_39:
  if ( v16 && v95 )
  {
    KeUnstackDetachProcess(&ApcState);
    v95 = 0;
  }
  if ( (int)v56 >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v98 = 31;
    v99 = 119;
    v100 = 113;
    v62 = 1;
    v63 = 7LL;
    if ( !*((_QWORD *)v34 + 335) )
      v62 = 7;
    ModeCount = Src.ModeCount;
    v64 = Src.ModeCount * v62;
    v15 = !v18;
    v65 = v89;
    if ( !v15 )
    {
      if ( *(_DWORD *)(v89 + 16) >= v64 )
      {
        v66 = *(_QWORD *)(v89 + 8);
        v67 = 0LL;
        while ( 1 )
        {
          v85 = v67;
          if ( *((_QWORD *)v34 + 335) )
            v63 = 1LL;
          if ( (unsigned int)v67 >= v63 )
            break;
          v68 = 44LL * (unsigned int)ModeCount;
          pModeList = Src.pModeList;
          v70 = (char *)(v66 + 44LL * (unsigned int)(ModeCount * v67));
          if ( (unsigned __int64)&v70[v68] > MmUserProbeAddress || &v70[v68] <= v70 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v70, pModeList, v68);
          if ( (_DWORD)v67 )
          {
            for ( i = 0; ; ++i )
            {
              v84 = i;
              ModeCount = Src.ModeCount;
              if ( i >= Src.ModeCount )
                break;
              *(_DWORD *)(44LL * (i + Src.ModeCount * (_DWORD)v67) + v66 + 8) = si128.m128i_i32[v67];
            }
          }
          else
          {
            ModeCount = Src.ModeCount;
          }
          v67 = (unsigned int)(v67 + 1);
          v63 = 7LL;
        }
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v86 = j;
          if ( (unsigned int)j >= v64 )
            break;
          if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
          {
            ModeCount = 44LL * (unsigned int)j;
            *(_DWORD *)(ModeCount + v66 + 16) = 64;
            *(_DWORD *)(ModeCount + v66 + 20) = 1;
            *(_DWORD *)(ModeCount + v66 + 12) = 64;
          }
        }
      }
      else
      {
        LODWORD(v56) = -1073741789;
        v79 = -1073741789;
      }
    }
    *(_DWORD *)(v65 + 16) = v64;
  }
  if ( v78[0] )
  {
    operator delete[](Src.pModeList);
    Src.pModeList = 0LL;
  }
  v72 = v90;
  if ( v90 )
  {
    v73 = DXGGLOBAL::GetGlobal(ModeCount, j);
    DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v73 + 88), v72);
  }
  else
  {
    DxgkReleaseSessionModeChangeLock(ModeCount, j);
  }
  if ( v95 )
  {
    KeUnstackDetachProcess(&ApcState);
    v95 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96, v74);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v92);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v75);
  if ( v82 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v80);
  return (unsigned int)v56;
}
