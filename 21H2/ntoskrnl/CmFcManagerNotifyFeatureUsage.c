/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x1404ED834
 * Callers:
 *     RtlNotifyFeatureUsage @ 0x14058E130 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     RtlAcquireSwapReference @ 0x1403A69B8 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A6D88 (RtlReleaseSwapReference.c)
 *     CmFcpWorkItemQueueWork @ 0x1404ED9CC (CmFcpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058F23C (RtlpFcAddDelayedUsageReportToBuffer.c)
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
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C48210);
  v7 = qword_140C48238[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(qword_140C48210, v6);
      LODWORD(v6) = -1;
      if ( byte_140C48230 )
      {
        if ( CurrentIrql >= 2u )
          KeInsertQueueDpc(&stru_140C48248, 0LL, 0LL);
        else
          CmFcpWorkItemQueueWork(&stru_140C48288);
      }
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (_DWORD)v6 != -1 )
    RtlReleaseSwapReference(qword_140C48210, v6);
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
