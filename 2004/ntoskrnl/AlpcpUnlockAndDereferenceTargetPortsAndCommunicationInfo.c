/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140703B60
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x140629F14 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14062A0C4 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
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
