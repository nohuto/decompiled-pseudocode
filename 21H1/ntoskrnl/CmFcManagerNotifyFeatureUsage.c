/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x1404E8098
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14033A8FC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x140588690 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     RtlAcquireSwapReference @ 0x1403A35C8 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A393C (RtlReleaseSwapReference.c)
 *     CmFcpWorkItemQueueWork @ 0x1404E822C (CmFcpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058970C (RtlpFcAddDelayedUsageReportToBuffer.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = 1;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C481F0);
  v7 = qword_140C48218[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(qword_140C481F0, v6);
      LODWORD(v6) = -1;
      if ( byte_140C48210 )
      {
        if ( CurrentIrql >= 2u )
          KeInsertQueueDpc(&stru_140C48228, 0LL, 0LL);
        else
          CmFcpWorkItemQueueWork(&stru_140C48268);
      }
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (_DWORD)v6 != -1 )
    RtlReleaseSwapReference(qword_140C481F0, v6);
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
