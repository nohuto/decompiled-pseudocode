/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x1C02BD520
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_TrackedWorkload__private_ReportDeviceUsage @ 0x1C0028254 (Feature_TrackedWorkload__private_ReportDeviceUsage.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-B0h]
  char v17; // [rsp+30h] [rbp-A8h]
  __int128 v18; // [rsp+38h] [rbp-A0h]
  __int128 v19; // [rsp+48h] [rbp-90h]
  __int128 v20; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+70h] [rbp-68h]
  char v22; // [rsp+78h] [rbp-60h] BYREF
  int v23; // [rsp+B8h] [rbp-20h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2206LL);
  P = 0LL;
  v23 = 0;
  if ( DXGPROCESS::GetCurrent(v4, v3) )
  {
    Feature_TrackedWorkload__private_ReportDeviceUsage();
    v7 = -1073741637;
    v8 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v8 + 24) = -1073741637LL;
    *(_QWORD *)(v8 + 32) = 140LL;
  }
  else
  {
    v7 = -1073741811;
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = 133LL;
  }
  WdLogEvent5_WdError(v8);
  if ( P != &v22 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v23 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v11);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  return v7;
}
