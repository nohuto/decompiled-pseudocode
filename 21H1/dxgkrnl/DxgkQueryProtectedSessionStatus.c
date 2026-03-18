/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C0285750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C00456E8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // ebx
  _DWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE v35[16]; // [rsp+20h] [rbp-48h] BYREF
  int v36; // [rsp+30h] [rbp-38h] BYREF
  __int64 v37; // [rsp+38h] [rbp-30h]
  char v38; // [rsp+40h] [rbp-28h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2150);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2150LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v12);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v36);
    }
    return 3221225485LL;
  }
  v13 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v14 = *v13;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v35, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  v17 = (unsigned int)v14 >> 30;
  if ( (unsigned int)v16 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v18 = *((_QWORD *)Current + 30);
  v19 = *(_DWORD *)(v18 + 16 * v16 + 8);
  if ( (_DWORD)v17 != ((v19 >> 5) & 3) || (v19 & 0x2000) != 0 || (v19 & 0x1F) == 0 )
    goto LABEL_17;
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 14 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v17);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
LABEL_17:
    v22 = 0LL;
    goto LABEL_18;
  }
  v22 = *(_QWORD *)(v18 + 16LL * (unsigned int)v16);
LABEL_18:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = (unsigned int)v14;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35, v27);
    goto LABEL_20;
  }
  v31 = *(_DWORD *)(v22 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35, v23);
  v32 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v32 = (_DWORD *)MmUserProbeAddress;
  *v32 = v31;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, (__int64)v32);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v36);
  return 0LL;
}
