/*
 * XREFs of WbDecryptEncryptionSegment @ 0x1405CDA20
 * Callers:
 *     WbDispatchOperation @ 0x140619580 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CDBA8 (WbGetInitializedEncryptionSegment.c)
 *     sub_1405CDE70 @ 0x1405CDE70 (sub_1405CDE70.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405CE0E8 (WbDecryptWarbirdEncryptionSegment.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int InitializedEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // si
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    InitializedEncryptionSegment = -1073741811;
  }
  else
  {
    InitializedEncryptionSegment = WbGetInitializedEncryptionSegment(a1, a2, a3, &v10);
    if ( InitializedEncryptionSegment >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v10 + 8);
      v6 = KeAbPreAcquire(v10 + 8, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      InitializedEncryptionSegment = WbDecryptWarbirdEncryptionSegment(v10);
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  sub_1405CDE70(v10);
  return (unsigned int)InitializedEncryptionSegment;
}
