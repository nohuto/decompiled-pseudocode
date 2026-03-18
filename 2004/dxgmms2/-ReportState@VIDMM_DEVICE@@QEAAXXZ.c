/*
 * XREFs of ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B98D4
 * Callers:
 *     VidMmReportVidMmDeviceState @ 0x1C0022C20 (VidMmReportVidMmDeviceState.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B43EC (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00249C0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00B99CC (-ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_DEVICE *i; // rdi
  unsigned int j; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v1 + 360), 0);
    DXGPUSHLOCK::AcquireShared(v12);
    v13 = 1;
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 19); i != (VIDMM_DEVICE *)((char *)this + 152); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 10) > 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v3, &EventVidMmReportAllocationResidency, v4);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  }
  for ( j = 0; j < *((_DWORD *)this + 15); ++j )
  {
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v7 + 176LL * j));
    v8 = *((_QWORD *)this + 10);
    v9 = 176LL * j;
    if ( v8 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v8 + v9));
    v10 = *((_QWORD *)this + 11);
    if ( v10 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v10 + v9));
  }
}
