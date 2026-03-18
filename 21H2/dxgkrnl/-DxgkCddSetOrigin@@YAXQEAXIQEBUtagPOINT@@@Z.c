/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01E2F30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C001DF68 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rbx
  int v8; // eax
  ADAPTER_DISPLAY *v9; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 x; // r9
  __int64 y; // r10
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  struct tagRECT v20; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  char v24; // [rsp+78h] [rbp-88h]
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF

  v22 = -1;
  v4 = a2;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 3014);
  v21 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v21, (unsigned __int64 *)&v20, 0);
  if ( PairingAdapters < 0 )
  {
    v19 = PairingAdapters;
    WdLogSingleEntry3(2LL, a1, v4, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddSetOrigin (ntSt"
                "atus = 0x%I64x).",
      (__int64)a1,
      v4,
      v19,
      0LL,
      0LL);
  }
  else
  {
    v7 = (ADAPTER_DISPLAY **)v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(1LL, 2443LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2443LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v25);
    if ( v8 < 0 )
    {
      WdLogSingleEntry5(4LL, v8, v4, v7, a3->x, a3->y);
    }
    else
    {
      v9 = v7[349];
      if ( !v9 )
      {
        WdLogSingleEntry1(1LL, 2454LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2454LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = v7[349];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9, v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      x = a3->x;
      y = a3->y;
      v13 = 4000 * v4;
      v14 = *((_QWORD *)v7[349] + 16);
      v20.left = a3->x;
      v20.top = y;
      v15 = *(int *)(4000 * v4 + v14 + 672);
      if ( (((_DWORD)v15 - 2) & 0xFFFFFFFD) != 0 )
      {
        v20.right = x + *(_DWORD *)(v13 + v14 + 644);
        v16 = *(_DWORD *)(v13 + v14 + 648);
      }
      else
      {
        v20.right = x + *(_DWORD *)(v13 + v14 + 648);
        v16 = *(_DWORD *)(v13 + v14 + 644);
      }
      v20.bottom = y + v16;
      WdLogSingleEntry5(4LL, v4, v7, x, y, v15);
      ADAPTER_DISPLAY::SetContentRect(v7[349], v4, &v20);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  }
}
