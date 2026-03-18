/*
 * XREFs of MiDereferencePerSessionProtos @ 0x1406DC9FC
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiSectionDelete @ 0x14067DC40 (MiSectionDelete.c)
 *     MiFinishCreateSection @ 0x14067F9E0 (MiFinishCreateSection.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x140756210 (MiMapSystemImage.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406DCAAC (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406DCE40 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  volatile signed __int64 *v6; // rsi
  _QWORD *i; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v4 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int64 *)(v4 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v9);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiFreeSubsectionProtos(&v9);
}
