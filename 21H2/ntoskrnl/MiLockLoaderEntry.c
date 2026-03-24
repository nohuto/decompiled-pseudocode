/*
 * XREFs of MiLockLoaderEntry @ 0x1402E7728
 * Callers:
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x14075CA84 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14075E564 (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A2710 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockLoaderEntry(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 104;
  if ( !(_DWORD)a2 )
    return ExAcquirePushLockExclusiveEx(v3, a2);
  if ( (_DWORD)a2 == 2 )
    return ExAcquirePushLockSharedEx(v3, 0LL);
  return ExAcquireAutoExpandPushLockExclusive(v3, 0LL);
}
