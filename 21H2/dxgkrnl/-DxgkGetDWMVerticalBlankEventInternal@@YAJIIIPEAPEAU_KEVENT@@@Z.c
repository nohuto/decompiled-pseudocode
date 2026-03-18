/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E7284
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C01E7170 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C01E74A0 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r14
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v13; // rdi
  struct DXGADAPTER *v14; // r15
  struct DXGDEVICE *v15; // r14
  int PairingAdapters; // eax
  __int64 v17; // rsi
  struct DXGADAPTER *v18; // r13
  ADAPTER_DISPLAY **v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v24; // [rsp+54h] [rbp-ACh]
  struct DXGDEVICE *v25; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v26; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v27; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v28; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v29; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT **v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  char v33; // [rsp+98h] [rbp-68h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp-58h] BYREF
  DXGADAPTER *v36; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[144]; // [rsp+C0h] [rbp-40h] BYREF

  v31 = -1;
  v4 = (unsigned int)a3;
  v5 = a2;
  v30 = a4;
  v24 = a3;
  v6 = (unsigned int)a1;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2192);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2192);
  v7 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v13 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_23;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    LODWORD(v17) = -1073741790;
    WdLogSingleEntry1(3LL, -1073741790LL);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v36, v6, (struct _KTHREAD **)Current, &v26, 1);
  v14 = v26;
  if ( v26 )
  {
    v15 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v5, v13, &v25);
      if ( !v25 )
      {
        WdLogSingleEntry2(3LL, v14, v5);
        if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
        LODWORD(v17) = -1073741811;
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v25 + 8);
      v7 = v25;
      v15 = v25;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
        v7 = v25;
      }
      v14 = v26;
    }
    v28 = 0LL;
    v29 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v14, v4, &v28, &v34, &v29, &v35, 0);
    v17 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v14, v4, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v14,
        v4,
        v17,
        0LL,
        0LL);
    }
    else
    {
      v18 = v28;
      v19 = (ADAPTER_DISPLAY **)v29;
      if ( !v28 || !v29 )
      {
        WdLogSingleEntry1(1LL, 6530LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
          6530LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v24 >= *((_DWORD *)v19[349] + 24) )
      {
        LODWORD(v17) = -1073741811;
        WdLogSingleEntry2(2LL, v24, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
          v24,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( !v15
             || v18 == *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) && v19 == *((ADAPTER_DISPLAY ***)v7 + 231) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v18, (struct DXGADAPTER *const)v19);
        DXGADAPTER::ReleaseReference(v18);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
        LODWORD(v17) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
        if ( (int)v17 >= 0 )
        {
          if ( !*((_QWORD *)v18 + 350) )
          {
            WdLogSingleEntry1(1LL, 6565LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderAdapter->IsRenderAdapter()",
              6565LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !v19[349] )
          {
            WdLogSingleEntry1(1LL, 6566LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              6566LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !a2 || *((_DWORD *)v7 + 144) == 1 )
          {
            ADAPTER_DISPLAY::GetVBlankEvent(v19[349], v24, v30);
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v37);
          }
          else
          {
            LODWORD(v17) = -1073741130;
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      }
      else
      {
        WdLogSingleEntry2(3LL, v14, a2);
        LODWORD(v17) = -1073741811;
      }
    }
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  }
  else
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
  }
LABEL_21:
  if ( v36 )
    DXGADAPTER::ReleaseReference(v36);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v31);
  }
  return (unsigned int)v17;
}
