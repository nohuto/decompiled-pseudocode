/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C02715B8
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240100 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1C02715A0 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0025540 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // rax
  struct _KTHREAD *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  DXGHWQUEUE *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+28h] [rbp-40h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h]
  char v33; // [rsp+38h] [rbp-30h]
  _BYTE v34[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v35; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2154LL);
  v35 = 0;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v35 = *v4;
    v4 = &v35;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v10 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = PsGetCurrentProcess(v13, v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v14);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v31);
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v34, Current);
  v18 = *v4;
  v19 = (*v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 >= *((_DWORD *)v10 + 64)
    || (v17 = (unsigned int)v19,
        v20 = v10[30],
        v15 = *((unsigned int *)v20 + 4 * v19 + 2),
        v16 = (v18 >> 25) & 0x60,
        ((v18 >> 25) & 0x60) != (*((_BYTE *)v20 + 16 * v19 + 8) & 0x60))
    || (v16 = 0x2000LL, (v15 & 0x2000) != 0)
    || (v15 & 0x1F) == 0 )
  {
LABEL_17:
    v22 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v22 + 24) = *v4;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    goto LABEL_18;
  }
  v17 = 2LL * (unsigned int)v19;
  v15 &= 0x1Fu;
  if ( (_BYTE)v15 != 15 )
  {
    v21 = WdLogNewEntry5_WdError(0x2000LL, v15);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_17;
  }
  v26 = (DXGHWQUEUE *)*((_QWORD *)v20 + 2 * (unsigned int)v19);
  if ( !v26 )
    goto LABEL_17;
  *((_DWORD *)v20 + 4 * (((unsigned __int64)v18 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
  DXGHWQUEUE::ReleaseReference(v26, v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v28);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
  return 0LL;
}
