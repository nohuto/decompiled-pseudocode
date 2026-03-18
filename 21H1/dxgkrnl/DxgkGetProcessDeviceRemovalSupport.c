/*
 * XREFs of DxgkGetProcessDeviceRemovalSupport @ 0x1C0281D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0008130 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00DA3E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00DA4A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C027F718 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C028086C (-GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceRemovalSupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  struct _LUID v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGPROCESS *Process; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int8 v21; // [rsp+20h] [rbp-A8h] BYREF
  int v22; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-98h]
  char v24; // [rsp+38h] [rbp-90h]
  struct _LUID v25[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+50h] [rbp-78h]
  _BYTE v27[80]; // [rsp+60h] [rbp-68h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2156;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2156);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2156LL);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v25[0].LowPart = *(_OWORD *)v4;
  v26 = *(_QWORD *)(v4 + 16);
  v21 = 1;
  v5 = v25[0];
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v27, *(void **)v25, 4096);
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v27, 0);
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v27, v6);
    DXGPROCESS::GetDeviceRemovalSupport(Process, &v25[1], (bool *)&v21);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v27, v17);
    v18 = (_BYTE *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = v21;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, (__int64)v18);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v9);
    *(struct _LUID *)(v10 + 24) = v5;
    WdLogEvent5_WdWarning(v10);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v27, v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v12);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v22);
    }
    return (unsigned int)v8;
  }
}
