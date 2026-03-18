/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1406BA5F4
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x14060E870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BA3C0 (AlpcMessageDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406BA570 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406C2A78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
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
