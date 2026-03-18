/*
 * XREFs of ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B43EC
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4588 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C00246BC (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B98D4 (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportPagingProcessState(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+28h] [rbp-80h]
  __int64 v4; // [rsp+30h] [rbp-78h]
  _QWORD v5[10]; // [rsp+50h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1750); i = (unsigned int)(i + 1) )
  {
    memset(v5, 0, sizeof(v5));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v4) = HIDWORD(v5[0]);
      LODWORD(v3) = 4;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventReportMonitoredFence,
        0LL,
        *((_QWORD *)this + 3),
        *((_QWORD *)this + i + 747),
        v3,
        v4,
        0LL,
        v5[1]);
    }
  }
  VIDMM_DEVICE::ReportState(*((VIDMM_DEVICE **)this + 5049));
}
