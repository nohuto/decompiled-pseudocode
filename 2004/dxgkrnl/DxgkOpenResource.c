/*
 * XREFs of DxgkOpenResource @ 0x1C01168A0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02440A0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0116044 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __int128 v5; // xmm2
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h]
  char v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int128 v16; // [rsp+60h] [rbp-38h]
  __int128 v17; // [rsp+70h] [rbp-28h]
  __int64 v18; // [rsp+80h] [rbp-18h]

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2005);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2005LL);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = a1;
    if ( a1 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v5 = *(_OWORD *)v4;
    v15 = *(_OWORD *)(v4 + 16);
    v16 = *(_OWORD *)(v4 + 32);
    v17 = *(_OWORD *)(v4 + 48);
    v18 = *(_QWORD *)(v4 + 64);
    v6 = DWORD1(v5);
  }
  else
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 4);
  }
  v7 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1, v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12, v8);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  return v7;
}
