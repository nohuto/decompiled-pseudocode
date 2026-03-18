/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C012EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00113B0 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C012F0DC (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
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
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v18; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  size_t *v22; // rbx
  size_t *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v31; // r15d
  ADAPTER_DISPLAY **v32; // rdi
  unsigned int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  int updated; // r14d
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTER *v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char v49; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v51[144]; // [rsp+70h] [rbp-90h] BYREF

  v47 = -1;
  v4 = a2;
  v6 = 1;
  v48 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 3009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 3009LL);
  v45[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v45, 0);
  v10 = v7;
  if ( v7 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v40[3] = (unsigned int)PsGetCurrentProcessSessionId(v41);
    v40[4] = v10;
LABEL_33:
    WdLogEvent5_WdError(v40);
    goto LABEL_23;
  }
  v46 = 0LL;
  v50 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v4, 0LL, 0LL, &v46, &v50, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
    v42[3] = a1;
    v42[4] = v4;
    v42[5] = v10;
    WdLogEvent5_WdEvent(v42);
    goto LABEL_23;
  }
  v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 88);
  if ( v15 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v18 = v46;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v46 + 316),
                            v4);
  DXGADAPTER::ReleaseReferenceNoTracking(v18);
  if ( !SessionViewFromSource )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v40[3] = v4;
    v40[4] = v18;
    LODWORD(v10) = -1073741811;
    v40[5] = (unsigned int)PsGetCurrentProcessSessionId(v43);
    v40[6] = -1073741811LL;
    goto LABEL_33;
  }
  v22 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v23 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v22 = v23;
  if ( v23 )
  {
    *((_WORD *)v23 + 20) = 0;
    v23[3] = 0LL;
    v23[4] = 0LL;
    *v23 = (size_t)&ReferenceCounted::`vftable';
    *v23 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v23 + 2) = 1;
    *((_DWORD *)v23 + 4) = 1;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v44 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v44 + 24) = v18;
    WdLogEvent5_WdLowResource(v44);
    goto LABEL_23;
  }
  LODWORD(v10) = DXGK_GAMMA_RAMP::Initialize(v22, 2LL, a3);
  if ( (int)v10 >= 0 )
  {
LABEL_13:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v31 = *((_DWORD *)PrimaryDisplaySource + 4);
        v32 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, (struct DXGADAPTER *const)v32, 0LL);
        if ( *((_BYTE *)v32[334] + 251) == (_BYTE)v33 )
          v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51, 0LL);
        else
          v34 = COREADAPTERACCESS::AcquireExclusive((__int64)v51, v33 + 1, v33);
        updated = v34;
        if ( v34 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v32[334], v31, (const struct DXGK_GAMMA_RAMP *)v22);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)v32[334], v31);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v32[334], v31, 0LL);
          else
            v6 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51, v35);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(
                                 (SESSION_VIEW *)SessionViewFromSource,
                                 PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v10) = v6 != 0 ? updated : 0;
    }
  }
  if ( v22 )
    ReferenceCounted::Release((ReferenceCounted *)v22, v28);
LABEL_23:
  if ( v45[0] )
    DxgkReleaseSessionModeChangeLock(v29, v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v28);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v47);
  return (unsigned int)v10;
}
