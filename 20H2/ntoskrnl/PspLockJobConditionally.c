/*
 * XREFs of PspLockJobConditionally @ 0x1406638E8
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D4FDC (PspSetJobIoRateControl.c)
 *     PspSendProcessNotificationToJobChain @ 0x14062EFB4 (PspSendProcessNotificationToJobChain.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     PspSetNetRateControl @ 0x14090C114 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}
