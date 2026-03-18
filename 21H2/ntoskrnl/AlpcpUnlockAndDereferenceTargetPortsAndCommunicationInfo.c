/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x14074D458
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x14074E85C (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14074EA08 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

LONG_PTR __fastcall AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(
        __int64 a1,
        signed __int64 *a2,
        signed __int64 *a3)
{
  ULONG_PTR v3; // rbx

  v3 = a1 - 16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 - 16));
  KeAbPostRelease(v3);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((ULONG_PTR)(a2 + 44));
  if ( a3 != a2 )
  {
    if ( _InterlockedCompareExchange64(a3 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a3 + 44);
    KeAbPostRelease((ULONG_PTR)(a3 + 44));
  }
  ObfDereferenceObject(a2);
  return ObfDereferenceObject(a3);
}
