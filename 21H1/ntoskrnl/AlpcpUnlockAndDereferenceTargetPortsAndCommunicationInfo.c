/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1406E0DD0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x140647AC4 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140647C74 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

void __fastcall AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx

  v3 = a1 - 16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 - 16));
  KeAbPostRelease(v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 352));
  KeAbPostRelease(a2 + 352);
  if ( a3 != a2 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a3 + 352));
    KeAbPostRelease(a3 + 352);
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)a2);
  HalPutDmaAdapter((PADAPTER_OBJECT)a3);
}
