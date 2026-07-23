/*
 * XREFs of WbDecryptEncryptionSegment @ 0x1405CC650
 * Callers:
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 *     sub_1405CCAA0 @ 0x1405CCAA0 (sub_1405CCAA0.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405CCD18 (WbDecryptWarbirdEncryptionSegment.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int InitializedEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    InitializedEncryptionSegment = -1073741811;
  }
  else
  {
    InitializedEncryptionSegment = WbGetInitializedEncryptionSegment(a1, a2, a3, &v13);
    if ( InitializedEncryptionSegment >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v13 + 8);
      v6 = KeAbPreAcquire(v13 + 8, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      InitializedEncryptionSegment = WbDecryptWarbirdEncryptionSegment(v13);
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    }
  }
  sub_1405CCAA0(v13);
  return (unsigned int)InitializedEncryptionSegment;
}
