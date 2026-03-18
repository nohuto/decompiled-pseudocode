/*
 * XREFs of ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BF584
 * Callers:
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BF2C8 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BF884 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02C07DC (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     DpiReportDevicePowerStateWorkItemCallback @ 0x1C02C6CD0 (DpiReportDevicePowerStateWorkItemCallback.c)
 * Callees:
 *     McTemplateK0qqqszq_EtwWriteTransfer @ 0x1C004DD64 (McTemplateK0qqqszq_EtwWriteTransfer.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C02C0898 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C02C3284 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(DripsBlockerTrackingHelper *this)
{
  unsigned __int64 Elapsed; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // rax
  const wchar_t *v7; // r10
  int v8; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 302152) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 37767));
    v3 = Elapsed;
    v4 = *((unsigned int *)this + 75537);
    v5 = (char *)this + 4720 * *((unsigned int *)this + 75536);
    if ( *((_BYTE *)this + 302153) )
      *(_QWORD *)&v5[72 * v4 + 160] += Elapsed;
    else
      *(_QWORD *)&v5[72 * v4 + 152] += Elapsed;
    if ( bTracingEnabled )
    {
      v6 = *((unsigned int *)this + 75537);
      v8 = 0;
      v7 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                              *((unsigned int *)this + 1180 * *((unsigned int *)this + 75536) + 18 * v6 + 43),
                              &v8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0qqqszq_EtwWriteTransfer(
          *((unsigned __int8 *)this + 302153),
          &DripsBlockerTracking_AddD0LagTime,
          (__int64)this + 4720 * *((unsigned int *)this + 75536) + 8,
          *((_DWORD *)this + 75536),
          *((_DWORD *)this + 75537),
          *((_BYTE *)this + 302153),
          (const char *)this + 4720 * *((unsigned int *)this + 75536) + 8,
          v7,
          v3 / 0x2710);
    }
    *((_BYTE *)this + 302152) = 0;
  }
}
