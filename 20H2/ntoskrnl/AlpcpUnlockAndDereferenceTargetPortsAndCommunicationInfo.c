/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1406D6C70
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1405E62A0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1405E644C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
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
