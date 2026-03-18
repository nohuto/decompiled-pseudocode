/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C011BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C011BE38 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-69h] BYREF
  __int64 v11; // [rsp+28h] [rbp-61h]
  char v12; // [rsp+30h] [rbp-59h]
  _BYTE v13[16]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+50h] [rbp-39h]
  __int64 v15; // [rsp+58h] [rbp-31h]
  char v16; // [rsp+60h] [rbp-29h]
  __int64 v17; // [rsp+68h] [rbp-21h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  char v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2209;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2209);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2209LL);
  v4 = *(_QWORD *)a1;
  v17 = 0LL;
  v5 = a1[2];
  v13[1] = 0;
  v15 = v4;
  v16 = 0;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v14 = -1LL;
  }
  v21 = 0LL;
  v19 = v4;
  v20 = 0;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v18 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer((DXGADAPTER *)v4, v5);
  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v4);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 3928) + 4 * v5), 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13, v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v7);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v10);
  }
}
