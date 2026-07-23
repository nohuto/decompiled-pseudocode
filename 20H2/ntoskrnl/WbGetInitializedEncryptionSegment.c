/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x1405D404C
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405D3EC4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D3F88 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D41C8 (WbGetWarbirdEncryptionSegment.c)
 *     sub_1405D4314 @ 0x1405D4314 (sub_1405D4314.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405D43A0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405D4C04 (WbInitializeEncryptionSegment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, P, &v18);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, &v18, &v15);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v7 = v15;
  if ( !*(_DWORD *)(v15 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v15 + 8);
    v12 = KeAbPreAcquire(v15 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v17 = *(_OWORD *)P;
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment(&v17, a2, v15);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v15;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v15;
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
  sub_1405D4314(v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
