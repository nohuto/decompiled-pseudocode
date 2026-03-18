/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1C02880D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0046648 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02870F0 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  struct DXGGLOBAL *Global; // rax
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[16]; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h]
  char v35; // [rsp+40h] [rbp-18h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2149);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2149LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v12);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v33);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v13 = *a1;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v32, Global);
  v15 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v16 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v17 = *((_QWORD *)Current + 30);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  v19 = v18 & 0x1F;
  if ( (_BYTE)v19 != 14 )
  {
    v20 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v19);
    *(_QWORD *)(v20 + 24) = 267LL;
    WdLogEvent5_WdError(v20);
LABEL_17:
    v21 = 0LL;
    goto LABEL_18;
  }
  v21 = *(void **)(v17 + 16LL * (unsigned int)v16);
LABEL_18:
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v13;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
    goto LABEL_20;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v21, v13);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
  return 0LL;
}
