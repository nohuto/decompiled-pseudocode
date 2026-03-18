/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C016C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CE7C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C00199D4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C011FFA0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0130A14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C016CD3C (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C016CD70 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
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
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // ebx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r14
  _QWORD *v57; // rax
  __int64 hAdapter; // rcx
  ADAPTER_DISPLAY *v59; // rcx
  __int64 VidPnSourceId; // rdx
  __int64 j; // rdx
  __int64 ModeCount; // rcx
  int v63; // r12d
  unsigned __int64 v64; // rax
  UINT v65; // r12d
  ULONG64 v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rbx
  size_t v69; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v71; // rcx
  UINT i; // r8d
  struct DXGSESSIONDATA *v73; // rbx
  struct DXGGLOBAL *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned __int8 v79[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v80; // [rsp+44h] [rbp-1A4h]
  int v81; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v82; // [rsp+50h] [rbp-198h]
  char v83; // [rsp+58h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+60h] [rbp-188h] BYREF
  UINT v85; // [rsp+78h] [rbp-170h]
  int v86; // [rsp+7Ch] [rbp-16Ch]
  int v87; // [rsp+80h] [rbp-168h]
  struct DXGADAPTER *v88; // [rsp+88h] [rbp-160h] BYREF
  struct DXGADAPTER *v89; // [rsp+90h] [rbp-158h] BYREF
  ULONG64 v90; // [rsp+98h] [rbp-150h]
  struct DXGSESSIONDATA *v91; // [rsp+A0h] [rbp-148h]
  struct _KTHREAD **v92; // [rsp+A8h] [rbp-140h]
  DXGADAPTER *v93[2]; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v94; // [rsp+C0h] [rbp-128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-120h] BYREF
  char v96; // [rsp+F8h] [rbp-F0h]
  _BYTE v97[144]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+190h] [rbp-58h]
  int v99; // [rsp+1A0h] [rbp-48h]
  int v100; // [rsp+1A4h] [rbp-44h]
  int v101; // [rsp+1A8h] [rbp-40h]

  v90 = a1;
  v81 = -1;
  v82 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v83 = 1;
    v81 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v83 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v81, 2017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v92 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v12);
    v15 = v83 == 0;
LABEL_25:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v81);
    return 3221225485LL;
  }
  v79[0] = 0;
  v16 = 0;
  v17 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
  Src = *v17;
  v18 = Src.pModeList != 0LL;
  Src.pModeList = 0LL;
  v88 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v93, Src.hAdapter, Current, &v88, 1);
  v22 = v88;
  if ( !v88 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = -1073741811LL;
    v23[4] = Current;
    v23[5] = Src.hAdapter;
    WdLogEvent5_WdWarning(v23);
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v93);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v51);
    v15 = v83 == 0;
    goto LABEL_25;
  }
  v89 = 0LL;
  v94 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v88, Src.VidPnSourceId, 0LL, 0LL, &v89, &v94, 0);
  v27 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v25);
    v28[3] = v22;
    v28[4] = Src.VidPnSourceId;
    v28[5] = v27;
    WdLogEvent5_WdEvent(v28);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v93);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v29);
    v32 = v83 == 0;
    goto LABEL_13;
  }
  v34 = v89;
  if ( !v89 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v35 + 24) = 5623LL;
    WdLogEvent5_WdAssertion(v35);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v97, v34, 0LL);
  DXGADAPTER::ReleaseReference(v34);
  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v37, v36) )
  {
    v40 = 0LL;
    v91 = 0LL;
    v41 = DxgkAcquireSessionModeChangeLock(0LL, v38);
    v27 = v41;
    if ( v41 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v44 + 24) = v27;
      WdLogEvent5_WdError(v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v97, v45);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v93);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v46);
      v32 = v83 == 0;
LABEL_13:
      if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v81);
      return (unsigned int)v27;
    }
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v39, v38);
    v40 = (PRKPROCESS *)DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 102), v48);
    v91 = (struct DXGSESSIONDATA *)v40;
    if ( !v40 )
    {
      v49 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v49 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v97, v50);
      goto LABEL_24;
    }
  }
  v96 = 0;
  if ( v40 )
  {
    v52 = *(_DWORD *)v40;
    if ( (unsigned int)PsGetCurrentProcessSessionId(v43, v42) != v52 )
    {
      v16 = 1;
      CPROCESSATTACHHELPER::Attach(&ApcState, v40[2329]);
    }
  }
  v53 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v97, 0LL);
  v56 = v53;
  v80 = v53;
  if ( v53 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55, v54);
    v57[3] = v56;
    v57[4] = Current;
    hAdapter = Src.hAdapter;
    v57[6] = v34;
LABEL_37:
    v57[5] = hAdapter;
    WdLogEvent5_WdDmmEvent(v57);
    goto LABEL_39;
  }
  v59 = (ADAPTER_DISPLAY *)*((_QWORD *)v34 + 337);
  VidPnSourceId = Src.VidPnSourceId;
  if ( Src.VidPnSourceId >= *((_DWORD *)v59 + 20) || !ADAPTER_DISPLAY::IsPartOfDesktop(v59, Src.VidPnSourceId) )
  {
    LODWORD(v56) = -1071774972;
    v80 = -1071774972;
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, VidPnSourceId);
    v57[3] = -1071774972LL;
    v57[4] = v34;
    hAdapter = Src.VidPnSourceId;
    goto LABEL_37;
  }
  LODWORD(v56) = DxgkpGetDisplayModeList(v34, (struct COREADAPTERACCESS *)v97, 0, &Src, v79);
  v80 = v56;
LABEL_39:
  if ( v16 && v96 )
  {
    KeUnstackDetachProcess(&ApcState);
    v96 = 0;
  }
  if ( (int)v56 >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v99 = 31;
    v100 = 119;
    v101 = 113;
    v63 = 1;
    v64 = 7LL;
    if ( !*((_QWORD *)v34 + 338) )
      v63 = 7;
    ModeCount = Src.ModeCount;
    v65 = Src.ModeCount * v63;
    v15 = !v18;
    v66 = v90;
    if ( !v15 )
    {
      if ( *(_DWORD *)(v90 + 16) >= v65 )
      {
        v67 = *(_QWORD *)(v90 + 8);
        v68 = 0LL;
        while ( 1 )
        {
          v86 = v68;
          if ( *((_QWORD *)v34 + 338) )
            v64 = 1LL;
          if ( (unsigned int)v68 >= v64 )
            break;
          v69 = 44LL * (unsigned int)ModeCount;
          pModeList = Src.pModeList;
          v71 = (char *)(v67 + 44LL * (unsigned int)(ModeCount * v68));
          if ( (unsigned __int64)&v71[v69] > MmUserProbeAddress || &v71[v69] <= v71 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v71, pModeList, v69);
          if ( (_DWORD)v68 )
          {
            for ( i = 0; ; ++i )
            {
              v85 = i;
              ModeCount = Src.ModeCount;
              if ( i >= Src.ModeCount )
                break;
              *(_DWORD *)(44LL * (i + Src.ModeCount * (_DWORD)v68) + v67 + 8) = si128.m128i_i32[v68];
            }
          }
          else
          {
            ModeCount = Src.ModeCount;
          }
          v68 = (unsigned int)(v68 + 1);
          v64 = 7LL;
        }
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v87 = j;
          if ( (unsigned int)j >= v65 )
            break;
          if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
          {
            ModeCount = 44LL * (unsigned int)j;
            *(_DWORD *)(ModeCount + v67 + 16) = 64;
            *(_DWORD *)(ModeCount + v67 + 20) = 1;
            *(_DWORD *)(ModeCount + v67 + 12) = 64;
          }
        }
      }
      else
      {
        LODWORD(v56) = -1073741789;
        v80 = -1073741789;
      }
    }
    *(_DWORD *)(v66 + 16) = v65;
  }
  if ( v79[0] )
  {
    operator delete[](Src.pModeList);
    Src.pModeList = 0LL;
  }
  v73 = v91;
  if ( v91 )
  {
    v74 = DXGGLOBAL::GetGlobal(ModeCount, j);
    DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v74 + 102), v73);
  }
  else
  {
    DxgkReleaseSessionModeChangeLock(ModeCount, j);
  }
  if ( v96 )
  {
    KeUnstackDetachProcess(&ApcState);
    v96 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v97, v75);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v93);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v76);
  if ( v83 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v81);
  return (unsigned int)v56;
}
