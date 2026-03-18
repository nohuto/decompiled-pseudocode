/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x1C0049780 (-AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF770 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r13
  _OWORD *v9; // rax
  void *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbx
  struct DXGGLOBAL *Global; // rax
  int v14; // eax
  _QWORD *v15; // rdx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-F0h]
  char v25; // [rsp+60h] [rbp-E8h]
  struct DXGPROCESS *Process; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-D8h]
  int v28; // [rsp+78h] [rbp-D0h]
  __int64 v29; // [rsp+7Ch] [rbp-CCh]
  int v30; // [rsp+84h] [rbp-C4h]
  _BYTE v31[24]; // [rsp+88h] [rbp-C0h] BYREF
  void *v32[2]; // [rsp+A0h] [rbp-A8h]
  __int128 v33; // [rsp+B0h] [rbp-98h]
  __int128 v34; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v35[80]; // [rsp+D0h] [rbp-78h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2126);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v32 = *v9;
    v33 = v9[1];
    v27 = 0LL;
    v29 = 0LL;
    v30 = 0;
    v28 = -1;
    v10 = v32[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35, v32[0], 4096);
    LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1);
    if ( (_DWORD)v11 == -1073741790 )
    {
      DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission((DXGPROCESSMUTEXBYHANDLE *)v35);
      LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1);
    }
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find DxgProcess for process handle 0x%I64x",
        (__int64)v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v35);
      v12 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v31, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v31, 1u);
      v34 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v12 + 360))(v32[1], &v34) )
      {
        LODWORD(v27) = (DWORD2(v34) + (int)v34) / 2;
        HIDWORD(v27) = (DWORD1(v34) + HIDWORD(v34)) / 2;
        Global = DXGGLOBAL_GetGlobal();
        v14 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)&Process,
                4LL);
        v11 = v14;
        if ( v14 < 0 )
        {
          if ( (*((_DWORD *)DXGGLOBAL_GetGlobal() + 428) & 2) != 0 )
            WdLogSingleEntry5(0LL, 275LL, 33LL, v11, 0LL, 0LL);
        }
        else
        {
          v15 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v15 = (_QWORD *)MmUserProbeAddress;
          *v15 = v29;
          v16 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = v28;
          v17 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = v30;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 10214LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
          10214LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v31);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v23);
    }
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10170LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10170LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v23);
    return 3221225485LL;
  }
}
