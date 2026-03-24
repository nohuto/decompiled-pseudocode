/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C0171B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A4AC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AFC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025B6C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E3070 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E3130 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0283ECC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v9; // rax
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct DXGGLOBAL *Global; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _DWORD *v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-108h] BYREF
  __int64 v40; // [rsp+28h] [rbp-100h]
  char v41; // [rsp+30h] [rbp-F8h]
  __int64 v42; // [rsp+38h] [rbp-F0h]
  struct DXGPROCESS *Process; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-E0h]
  int v45; // [rsp+50h] [rbp-D8h]
  __int64 v46; // [rsp+54h] [rbp-D4h]
  int v47; // [rsp+5Ch] [rbp-CCh]
  _BYTE v48[24]; // [rsp+60h] [rbp-C8h] BYREF
  void *v49[2]; // [rsp+78h] [rbp-B0h]
  __int128 v50; // [rsp+88h] [rbp-A0h]
  __int128 v51; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v52[24]; // [rsp+B0h] [rbp-78h] BYREF
  int v53; // [rsp+C8h] [rbp-60h]
  char v54; // [rsp+CCh] [rbp-5Ch]

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2126LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v49 = *v9;
    v50 = v9[1];
    v44 = 0LL;
    v46 = 0LL;
    v47 = 0;
    v45 = -1;
    v10 = v49[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v52, v49[0], 4096);
    LODWORD(v13) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v52, 1);
    if ( (_DWORD)v13 == -1073741790 )
    {
      if ( v54 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v33 + 24) = 1749LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v53 = 1024;
      LODWORD(v13) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v52, 1);
    }
    if ( (int)v13 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v34 + 24) = v10;
      WdLogEvent5_WdError(v34);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v52);
      v14 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v48, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v48, 1LL);
      v51 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v14 + 360))(v49[1], &v51) )
      {
        LODWORD(v42) = ((int)v51 + DWORD2(v51)) / 2;
        v17 = (unsigned int)((DWORD1(v51) + HIDWORD(v51)) >> 31);
        LODWORD(v17) = (DWORD1(v51) + HIDWORD(v51)) % 2;
        HIDWORD(v42) = (DWORD1(v51) + HIDWORD(v51)) / 2;
        v44 = v42;
        Global = DXGGLOBAL::GetGlobal(v16, v17);
        v19 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)&Process,
                4);
        v13 = v19;
        if ( v19 < 0 )
        {
          v37 = *((unsigned int *)DXGGLOBAL::GetGlobal(v21, v20) + 386);
          if ( (v37 & 2) != 0 )
          {
            v38 = WdLogNewEntry5_WdCriticalError(v37, v36);
            *(_QWORD *)(v38 + 24) = 275LL;
            *(_QWORD *)(v38 + 32) = 33LL;
            *(_QWORD *)(v38 + 40) = v13;
            *(_OWORD *)(v38 + 48) = 0LL;
            WdLogEvent5_WdCriticalError(v38);
          }
        }
        else
        {
          v22 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v22 = (_QWORD *)MmUserProbeAddress;
          *v22 = v46;
          v23 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v45;
          v24 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v47;
        }
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v35 + 24) = 10192LL;
        WdLogEvent5_WdError(v35);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v48);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v25);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
    }
    return (unsigned int)v13;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v29 + 24) = 10148LL;
    WdLogEvent5_WdError(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v30);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v39);
    return 3221225485LL;
  }
}
