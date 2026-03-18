/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C012F510
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0011824 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E8A34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v5; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  ADAPTER_DISPLAY **v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  ADAPTER_DISPLAY *v15; // rcx
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG x; // r9d
  LONG y; // r10d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct tagRECT v34; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  char v38; // [rsp+68h] [rbp-98h]
  _BYTE v39[144]; // [rsp+70h] [rbp-90h] BYREF

  v36 = -1;
  v37 = 0LL;
  v5 = a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 3014LL);
  v35 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v5, 0LL, 0LL, &v35, (unsigned __int64 *)&v34, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v30[3] = a1;
    v30[4] = v5;
    v30[5] = v9;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v10 = (ADAPTER_DISPLAY **)v35;
    if ( !v35 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v31 + 24) = 2384LL;
      WdLogEvent5_WdAssertion(v31);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, (struct DXGADAPTER *const)v10, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v10);
    v11 = COREADAPTERACCESS::AcquireExclusive((__int64)v39, 1LL, 0);
    v14 = v11;
    if ( v11 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
      v33[3] = v14;
      v33[4] = v5;
      v33[5] = v10;
      v33[6] = a3->x;
      v33[7] = a3->y;
      WdLogEvent5_WdEvent(v33);
    }
    else
    {
      v15 = v10[334];
      if ( !v15 )
      {
        v32 = WdLogNewEntry5_WdAssertion(0LL, v12);
        *(_QWORD *)(v32 + 24) = 2395LL;
        WdLogEvent5_WdAssertion(v32);
        v15 = v10[334];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v15, (unsigned int)v5);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v10[334], (unsigned int)v5);
      x = a3->x;
      y = a3->y;
      v20 = 3968 * v5;
      v21 = *((_QWORD *)v10[334] + 14);
      v22 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v34.left = a3->x;
      v34.top = y;
      if ( (v22 & 0xFFFFFFFD) != 0 )
      {
        v34.right = x + *(_DWORD *)(v21 + v20 + 644);
        v23 = *(_DWORD *)(v21 + v20 + 648);
      }
      else
      {
        v34.right = x + *(_DWORD *)(v21 + v20 + 648);
        v23 = *(_DWORD *)(v21 + v20 + 644);
      }
      v24 = (unsigned int)(y + v23);
      v34.bottom = v24;
      v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v20);
      v25[3] = v5;
      v25[4] = v10;
      v25[5] = a3->x;
      v25[6] = a3->y;
      v25[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v25);
      ADAPTER_DISPLAY::SetContentRect(v10[334], v5, &v34);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v27);
  if ( v38 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v36);
  }
}
