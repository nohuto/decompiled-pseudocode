/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1406DB904
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1406869F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x1406DB6D0 (AlpcMessageDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406DB880 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406E2FF8 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
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
