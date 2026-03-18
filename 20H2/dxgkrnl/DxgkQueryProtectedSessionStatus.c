/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C0288C10
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
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // ebx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v34[16]; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h]
  char v37; // [rsp+40h] [rbp-28h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2150);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2150LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v12);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v35);
    }
    return 3221225485LL;
  }
  v13 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v14 = *v13;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v34, Global);
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
    goto LABEL_20;
  }
  v30 = *(_DWORD *)(v22 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
  v31 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v31 = (_DWORD *)MmUserProbeAddress;
  *v31 = v30;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, (__int64)v31);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
  return 0LL;
}
