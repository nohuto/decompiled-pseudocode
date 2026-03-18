/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00E37AC
 * Callers:
 *     DxgkDestroyPagingQueue @ 0x1C00E3790 (DxgkDestroyPagingQueue.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C0169EC0 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02403C0 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0024C40 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  D3DKMT_HANDLE v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // r9
  DXGPAGINGQUEUE *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+28h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+38h] [rbp-30h]
  _BYTE v25[40]; // [rsp+40h] [rbp-28h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+78h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2118);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2118LL);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v25,
    (struct _KTHREAD **)Current);
  v8 = p_hPagingQueue->hPagingQueue;
  v9 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)Current + 64) )
  {
    v7 = (unsigned int)v9;
    v10 = *((_QWORD *)Current + 30);
    v6 = *(unsigned int *)(v10 + 16LL * (unsigned int)v9 + 8);
    v9 = (v8 >> 25) & 0x60;
    if ( ((v8 >> 25) & 0x60) == (v6 & 0x60) )
    {
      v9 = 0x2000LL;
      if ( (v6 & 0x2000) == 0 && (v6 & 0x1F) != 0 )
      {
        v7 *= 2LL;
        v6 &= 0x1Fu;
        if ( (_BYTE)v6 == 10 )
        {
          v11 = *(DXGPAGINGQUEUE **)(v10 + 8 * v7);
          if ( v11 )
          {
            *(_DWORD *)(v10 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
            DXGPAGINGQUEUE::ReleaseReference(v11, v12);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v13);
            if ( v24 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22);
            }
            return 0LL;
          }
        }
        else
        {
          v17 = WdLogNewEntry5_WdError(0x2000LL, v6);
          *(_QWORD *)(v17 + 24) = 267LL;
          WdLogEvent5_WdError(v17);
        }
      }
    }
  }
  v18 = WdLogNewEntry5_WdWarning(v9, v6, v7);
  *(_QWORD *)(v18 + 24) = p_hPagingQueue->hPagingQueue;
  *(_QWORD *)(v18 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v18);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v19);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v22);
  return 3221225485LL;
}
