/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x1405CC7D8
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405CC650 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 *     sub_1405CCAA0 @ 0x1405CCAA0 (sub_1405CCAA0.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405CCB2C (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405CD390 (WbInitializeEncryptionSegment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int WarbirdEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, P, &v21);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, &v21, &v18);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v7 = v18;
  if ( !*(_DWORD *)(v18 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v18 + 8);
    v12 = KeAbPreAcquire(v18 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v20 = *(_OWORD *)P;
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment(&v20, a2, v18);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v18;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v18;
    goto LABEL_7;
  }
LABEL_4:
  WarbirdEncryptionSegment = *(_DWORD *)(v7 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_1405CCAA0(v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
