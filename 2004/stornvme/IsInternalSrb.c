/*
 * XREFs of IsInternalSrb @ 0x1C0009150
 * Callers:
 *     RequestPendingCompletion @ 0x1C00049F0 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC98 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C000F470 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // edx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return 1;
  if ( a2 != a1 + 832 )
  {
    v5 = 0;
    while ( a2 != 112LL * v5 + a1 + 944 )
    {
      if ( ++v5 >= 6 )
        return v2;
    }
  }
  return 1;
}
