/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C01137F0
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C0113770 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C0279E40 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0113CE0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0136B4C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0299A78 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 VidPnSourceId; // rdx
  int PairingAdapters; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 CurrentProcessSessionId; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // r15
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // bl
  __int64 v39; // r13
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  struct SESSION_VIEW *v43; // r14
  _QWORD *v44; // rax
  struct DISPLAY_SOURCE *v45; // r13
  struct _DXGKARG_SETPOINTERPOSITION *v46; // rbx
  _QWORD *v47; // r13
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DISPLAY_SOURCE *i; // r15
  __int64 v52; // rcx
  ADAPTER_DISPLAY **v53; // r13
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rdx
  bool v59; // zf
  int v60; // r9d
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // r14
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v82; // eax
  _QWORD *v83; // rax
  bool v84; // [rsp+58h] [rbp-B0h]
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  int v86; // [rsp+70h] [rbp-98h]
  unsigned int v87[2]; // [rsp+78h] [rbp-90h]
  struct DXGADAPTER *v88; // [rsp+80h] [rbp-88h] BYREF
  int v89; // [rsp+88h] [rbp-80h] BYREF
  __int64 v90; // [rsp+90h] [rbp-78h]
  char v91; // [rsp+98h] [rbp-70h]
  struct _DXGKARG_SETPOINTERPOSITION *v92; // [rsp+A0h] [rbp-68h]
  void *v93; // [rsp+A8h] [rbp-60h]
  _BYTE v94[16]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v95; // [rsp+C0h] [rbp-48h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v96; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v97[144]; // [rsp+E8h] [rbp-20h] BYREF

  v87[0] = a4;
  v92 = a2;
  v93 = a1;
  v89 = -1;
  v90 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v91 = 1;
    v89 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
  }
  else
  {
    v91 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v89, 3012LL);
  LODWORD(v13) = 0;
  v96 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_75;
  v96 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
    goto LABEL_53;
  }
  if ( a3->Flags.Value >= 8 )
  {
    v61 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v61 + 24) = a3->Flags.Value;
    *(_QWORD *)(v61 + 32) = a1;
    WdLogEvent5_WdError(v61);
LABEL_75:
    LODWORD(v13) = -1073741811;
    goto LABEL_53;
  }
  VidPnSourceId = a3->VidPnSourceId;
  v88 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, &v88, &v95, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v62[3] = a1;
    v62[4] = a3->VidPnSourceId;
    v62[5] = v13;
    WdLogEvent5_WdEvent(v62);
    goto LABEL_53;
  }
  v18 = v88;
  if ( !v88 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v63 + 24) = 1457LL;
    WdLogEvent5_WdAssertion(v63);
  }
  if ( !*((_QWORD *)v18 + 334) )
  {
    v64 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v64 + 24) = 1458LL;
    WdLogEvent5_WdAssertion(v64);
  }
  v19 = *(_QWORD *)((char *)v18 + 316);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v88 + 2), v88);
  v22 = *((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 88);
  if ( !v22 )
  {
LABEL_81:
    v72 = WdLogNewEntry5_WdError(v21, v20);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v72 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v73);
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    goto LABEL_53;
  }
  LOBYTE(v86) = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v21);
  v85 = v22 + 80;
  if ( v22 == -80 )
  {
    v65 = WdLogNewEntry5_WdAssertion(0LL, v23);
    *(_QWORD *)(v65 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v65);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v85 + 16) == CurrentThread )
  {
    v66 = WdLogNewEntry5_WdAssertion(CurrentThread, v23);
    *(_QWORD *)(v66 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v66);
  }
  if ( (_BYTE)v86 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v23);
    v67[5] = &v85;
    v67[3] = 275LL;
    v67[4] = 4LL;
    v67[6] = 0LL;
    v67[7] = 0LL;
    WdLogEvent5_WdCriticalError(v67);
  }
  v26 = v85;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v26 + 16) == KeGetCurrentThread() )
  {
    v68 = *(_DWORD *)(v26 + 24);
    if ( v68 <= 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v69 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v69);
      v68 = *(_DWORD *)(v26 + 24);
    }
    v30 = v68 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v60 = *(_DWORD *)(v26 + 28);
        if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventBlockThread, v29, v60);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 8));
      ExAcquirePushLockExclusiveEx(v26, 0LL);
    }
    if ( *(_QWORD *)(v26 + 16) )
    {
      v70 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v70 + 24) = 683LL;
      WdLogEvent5_WdAssertion(v70);
    }
    if ( *(_DWORD *)(v26 + 24) )
    {
      v71 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v71 + 24) = 684LL;
      WdLogEvent5_WdAssertion(v71);
    }
    *(_QWORD *)(v26 + 16) = KeGetCurrentThread();
    v30 = 1;
  }
  *(_DWORD *)(v26 + 24) = v30;
  LOBYTE(v86) = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v22 + 72) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v85, v27);
    goto LABEL_81;
  }
  _mm_lfence();
  v31 = v85;
  v32 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 8 * CurrentProcessSessionId);
  LOBYTE(v86) = 0;
  if ( *(struct _KTHREAD **)(v85 + 16) != KeGetCurrentThread() )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v74[3] = 275LL;
    v74[4] = 4LL;
    v74[5] = v31;
    v74[6] = 0LL;
    v74[7] = 0LL;
    WdLogEvent5_WdCriticalError(v74);
  }
  v33 = *(_DWORD *)(v31 + 24);
  if ( v33 <= 0 )
  {
    v75 = WdLogNewEntry5_WdAssertion(v28, v27);
    *(_QWORD *)(v75 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v75);
    v33 = *(_DWORD *)(v31 + 24);
  }
  v34 = v33 - 1;
  *(_DWORD *)(v31 + 24) = v34;
  if ( !v34 )
  {
    *(_QWORD *)(v31 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v31, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !v32 )
    goto LABEL_81;
  v35 = DxgkAcquireSessionModeChangeLock(0LL);
  v13 = v35;
  v38 = v35 >= 0;
  v84 = v35 >= 0;
  if ( v35 < 0 )
  {
    v76 = WdLogNewEntry5_WdEvent(v36, v11);
    *(_QWORD *)(v76 + 24) = v13;
    WdLogEvent5_WdEvent(v76);
    goto LABEL_86;
  }
  v39 = a3->VidPnSourceId;
  v40 = (_QWORD *)(v32 + 18560);
  v41 = *(_QWORD **)(v32 + 18560);
  if ( v41 == (_QWORD *)(v32 + 18560) )
    goto LABEL_84;
  v11 = HIDWORD(v19);
  while ( *(v41 - 3) != v19 )
  {
    v41 = (_QWORD *)*v41;
    if ( v41 == v40 )
      goto LABEL_84;
  }
  v40 = v41 + 10;
  v42 = (_QWORD *)v41[10];
  if ( v42 == v40 )
    goto LABEL_84;
  while ( *((_DWORD *)v42 - 4) != (_DWORD)v39 )
  {
    v42 = (_QWORD *)*v42;
    if ( v42 == v40 )
      goto LABEL_84;
  }
  if ( v42 == (_QWORD *)32 )
  {
LABEL_84:
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v11, v37);
    v77[4] = SHIDWORD(v19);
    v77[5] = (unsigned int)v19;
    v77[3] = v39;
    v77[6] = v32;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_85;
  }
  v43 = (struct SESSION_VIEW *)v42[2];
  if ( !v43 )
  {
LABEL_85:
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v40, v11);
    v78[3] = a3->VidPnSourceId;
    v78[4] = SHIDWORD(v19);
    v78[5] = (unsigned int)v19;
    LODWORD(v13) = -1073741811;
    v78[6] = (unsigned int)PsGetCurrentProcessSessionId((unsigned int)v19);
    v78[7] = -1073741811LL;
    WdLogEvent5_WdError(v78);
LABEL_86:
    if ( !v38 )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( *(_QWORD *)v43 != v32 )
  {
    v79 = WdLogNewEntry5_WdAssertion(v40, HIDWORD(v19));
    *(_QWORD *)(v79 + 24) = 4066LL;
    WdLogEvent5_WdAssertion(v79);
  }
  v44 = (_QWORD *)*((_QWORD *)v43 + 6);
  if ( v44 != (_QWORD *)((char *)v43 + 48) )
  {
    v45 = (struct DISPLAY_SOURCE *)(v44 - 7);
    if ( v44 != (_QWORD *)56 )
    {
      v46 = v92;
      while ( 1 )
      {
        LODWORD(v13) = SetPointerShapeForDisplaySource(v45, v46, a3, v43, v93, v87[0], a5, 0, a7 != 0);
        if ( (int)v13 < 0 )
          break;
        v47 = (_QWORD *)*((_QWORD *)v45 + 7);
        if ( v47 != (_QWORD *)((char *)v43 + 48) )
        {
          v45 = (struct DISPLAY_SOURCE *)(v47 - 7);
          if ( v45 )
            continue;
        }
        goto LABEL_51;
      }
      for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v43); i; i = SESSION_VIEW::GetNextDisplaySource(v43, i) )
      {
        v52 = *((_QWORD *)i + 1);
        v53 = *(ADAPTER_DISPLAY ***)(v52 + 16);
        if ( !v53 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v52, v11);
          *(_QWORD *)(v80 + 24) = 1521LL;
          WdLogEvent5_WdAssertion(v80);
        }
        if ( !v53[334] )
        {
          v81 = WdLogNewEntry5_WdAssertion(v52, v11);
          *(_QWORD *)(v81 + 24) = 1522LL;
          WdLogEvent5_WdAssertion(v81);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v97, (struct DXGADAPTER *const)v53, 0LL);
        v54 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v97, 0LL);
        v57 = v54;
        if ( v54 < 0 )
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
          v83[4] = (unsigned int)v19;
          v83[3] = SHIDWORD(v19);
          v83[5] = v57;
          WdLogEvent5_WdError(v83);
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v94, (ADAPTER_DISPLAY *)((char *)v53[334] + 400), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
          if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v53[334], *((unsigned int *)i + 4)) )
          {
            v82 = *((_DWORD *)i + 4);
            v96.Flags.Value &= ~1u;
            v96.VidPnSourceId = v82;
            *(_QWORD *)&v96.X = 0LL;
            ADAPTER_DISPLAY::DdiSetPointerPosition(v53[334], &v96);
          }
          v59 = v94[8] == 0;
          *(_QWORD *)((char *)i + 3748) = -1LL;
          *((_BYTE *)i + 725) = 0;
          if ( !v59 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94, v58);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v97, v58);
      }
    }
  }
LABEL_51:
  if ( v84 )
LABEL_52:
    DxgkReleaseSessionModeChangeLock();
LABEL_53:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v89, v11);
  if ( v91 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v89);
  return (unsigned int)v13;
}
