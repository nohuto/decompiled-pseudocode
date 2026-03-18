/*
 * XREFs of PspUnlockJobConditionally @ 0x1405F0C88
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405CD768 (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405F098C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065DED8 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x140905214 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      return;
    }
  }
}
