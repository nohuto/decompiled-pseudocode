/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1406854E4
 * Callers:
 *     AlpcpCaptureMessageData @ 0x1405EB31C (AlpcpCaptureMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405ED620 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x140685460 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406B3D50 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140230470 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + *(_QWORD *)(a1 + 2072);
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2072), a2);
  }
  return result;
}
