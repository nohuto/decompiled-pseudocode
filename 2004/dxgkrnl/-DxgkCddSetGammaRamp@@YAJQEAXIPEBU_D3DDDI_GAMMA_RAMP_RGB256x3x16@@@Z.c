/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014B850
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B04C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C011F028 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C012D71C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0139AF0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014BAEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C014BB0C (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // r14
  char v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGSESSIONMGR *v16; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v19; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t *v23; // rbx
  size_t *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v32; // r15d
  ADAPTER_DISPLAY **v33; // rdi
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rdx
  int updated; // r14d
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _BYTE v48[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTER *v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  char v52; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v54[144]; // [rsp+70h] [rbp-90h] BYREF

  v50 = -1;
  v4 = a2;
  v6 = 1;
  v51 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 3009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 3009LL);
  v48[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v48, 0);
  v10 = v7;
  if ( v7 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v41[3] = (unsigned int)PsGetCurrentProcessSessionId(v43, v42);
    v41[4] = v10;
LABEL_33:
    WdLogEvent5_WdError(v41);
    goto LABEL_23;
  }
  v49 = 0LL;
  v53 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v4, 0LL, 0LL, &v49, &v53, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
    v44[3] = a1;
    v44[4] = v4;
    v44[5] = v10;
    WdLogEvent5_WdEvent(v44);
    goto LABEL_23;
  }
  v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 102);
  if ( v16 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v19 = v49;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v49 + 316),
                            v4);
  DXGADAPTER::ReleaseReference(v19);
  if ( !SessionViewFromSource )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v41[3] = v4;
    v41[4] = v19;
    LODWORD(v10) = -1073741811;
    v41[5] = (unsigned int)PsGetCurrentProcessSessionId(v46, v45);
    v41[6] = -1073741811LL;
    goto LABEL_33;
  }
  v23 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v24 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v23 = v24;
  if ( v24 )
  {
    *((_WORD *)v24 + 20) = 0;
    v24[3] = 0LL;
    v24[4] = 0LL;
    *v24 = (size_t)&ReferenceCounted::`vftable';
    *v24 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v24 + 2) = 1;
    *((_DWORD *)v24 + 4) = 1;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v23 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v47 + 24) = v19;
    WdLogEvent5_WdLowResource(v47);
    goto LABEL_23;
  }
  LODWORD(v10) = DXGK_GAMMA_RAMP::Initialize(v23, 2LL, a3);
  if ( (int)v10 >= 0 )
  {
LABEL_13:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v32 = *((_DWORD *)PrimaryDisplaySource + 4);
        v33 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, (struct DXGADAPTER *const)v33, 0LL);
        if ( *((_BYTE *)v33[337] + 251) == (_BYTE)v34 )
          v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54, 0LL);
        else
          v35 = COREADAPTERACCESS::AcquireExclusive((__int64)v54, (unsigned int)(v34 + 1));
        updated = v35;
        if ( v35 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v33[337], v32, (const struct DXGK_GAMMA_RAMP *)v23);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)v33[337], v32);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v33[337], v32, 0LL);
          else
            v6 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54, v36);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(
                                 (SESSION_VIEW *)SessionViewFromSource,
                                 PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v10) = v6 != 0 ? updated : 0;
    }
  }
  if ( v23 )
    ReferenceCounted::Release((ReferenceCounted *)v23, v29);
LABEL_23:
  if ( v48[0] )
    DxgkReleaseSessionModeChangeLock(v30, v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v29);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v50);
  return (unsigned int)v10;
}
