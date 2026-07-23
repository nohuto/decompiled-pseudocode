/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1406897B4
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1405E9BF0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x140689730 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406D57E0 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[1].SecureState.SecureHandle;
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[1].SecureState, a2);
  }
  return result;
}
