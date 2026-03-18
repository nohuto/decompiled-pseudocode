/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x1404EBF58
 * Callers:
 *     RtlNotifyFeatureUsage @ 0x14058C720 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     RtlAcquireSwapReference @ 0x1403A60F8 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A64C8 (RtlReleaseSwapReference.c)
 *     CmFcpWorkItemQueueWork @ 0x1404EC0EC (CmFcpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058D82C (RtlpFcAddDelayedUsageReportToBuffer.c)
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
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C480D0);
  v7 = qword_140C480F8[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(qword_140C480D0, v6);
      LODWORD(v6) = -1;
      if ( byte_140C480F0 )
      {
        if ( CurrentIrql >= 2u )
          KeInsertQueueDpc(&stru_140C48108, 0LL, 0LL);
        else
          CmFcpWorkItemQueueWork(&stru_140C48148);
      }
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (_DWORD)v6 != -1 )
    RtlReleaseSwapReference(qword_140C480D0, v6);
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
