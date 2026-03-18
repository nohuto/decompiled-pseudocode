/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1407A7378
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1406A61B0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcSecurityDestroyProcedure @ 0x1407A7300 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureMessageData @ 0x1407A7B98 (AlpcpCaptureMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1407AC020 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
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
