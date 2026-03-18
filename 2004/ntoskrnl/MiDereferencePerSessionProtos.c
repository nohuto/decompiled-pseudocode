/*
 * XREFs of MiDereferencePerSessionProtos @ 0x14070A60C
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiFinishCreateSection @ 0x1405FB480 (MiFinishCreateSection.c)
 *     MiSectionDelete @ 0x1405FF160 (MiSectionDelete.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x14070A6BC (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14070AA50 (MiFreeSubsectionProtos.c)
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
