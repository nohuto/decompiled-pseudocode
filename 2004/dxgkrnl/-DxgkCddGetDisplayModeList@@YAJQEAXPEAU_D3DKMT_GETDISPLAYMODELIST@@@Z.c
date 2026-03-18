/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01580D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C01585B8 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct DXGADAPTER *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int DisplayModeList; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v42[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  char v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v49[144]; // [rsp+90h] [rbp-70h] BYREF

  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 3004LL);
  v41 = 0;
  memset(&Src, 0, sizeof(Src));
  if ( a1 )
  {
    v44 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v44, &v48, 0);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
      v32[3] = a1;
      v32[4] = a2->VidPnSourceId;
      v32[5] = v10;
      WdLogEvent5_WdEvent(v32);
    }
    else
    {
      v11 = v44;
      if ( !v44 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v33 + 24) = 1254LL;
        WdLogEvent5_WdAssertion(v33);
      }
      DxgkWaitForMonitorEventDoneInternal(v11);
      v42[0] = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v42, 0);
      v15 = v12;
      if ( v12 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v34 + 24) = v15;
        WdLogEvent5_WdError(v34);
        LODWORD(v10) = v15;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v11, 0LL);
        DXGADAPTER::ReleaseReference(v11);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49, 0LL);
        v10 = v16;
        if ( v16 < 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
          v35[3] = v10;
          v35[4] = PsGetCurrentProcess(v37, v36);
          v35[5] = a2->hAdapter;
          v35[6] = v11;
          WdLogEvent5_WdEvent(v35);
        }
        else
        {
          if ( !*((_QWORD *)v11 + 337) )
          {
            v38 = WdLogNewEntry5_WdAssertion(v18, v17);
            *(_QWORD *)(v38 + 24) = 1294LL;
            WdLogEvent5_WdAssertion(v38);
          }
          Src.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v11, (struct COREADAPTERACCESS *)v49, 0, &Src, &v41);
          v10 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v39 = WdLogNewEntry5_WdDmmEvent(v21, v20);
            *(_QWORD *)(v39 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v39 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v39);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < Src.ModeCount )
              {
                v40 = WdLogNewEntry5_WdWarning(pModeList, v20, v22);
                *(_QWORD *)(v40 + 24) = a2->ModeCount;
                *(_QWORD *)(v40 + 32) = Src.ModeCount;
                WdLogEvent5_WdWarning(v40);
                LODWORD(v10) = -1073741789;
              }
              else
              {
                memmove(pModeList, Src.pModeList, 44LL * Src.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = Src.ModeCount;
            }
            if ( v41 )
            {
              operator delete[](Src.pModeList);
              Src.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49, v20);
      }
      if ( v42[0] )
        DxgkReleaseSessionModeChangeLock(v25, v24);
    }
  }
  else
  {
    LODWORD(v10) = -1073741811;
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v29[3] = -1073741811LL;
    v29[4] = PsGetCurrentProcess(v31, v30);
    v29[5] = a2->hAdapter;
    WdLogEvent5_WdError(v29);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v24);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v45);
  return (unsigned int)v10;
}
