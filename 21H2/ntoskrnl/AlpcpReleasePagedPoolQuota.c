/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14061FB44
 * Callers:
 *     AlpcpCaptureMessageData @ 0x1405E3D7C (AlpcpCaptureMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E6080 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcSecurityDestroyProcedure @ 0x14061FAC0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x1406605EC (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x14068A760 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406B0D14 (AlpcpCreateReserve.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140318410 (PsReturnProcessPagedPoolQuota.c)
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
