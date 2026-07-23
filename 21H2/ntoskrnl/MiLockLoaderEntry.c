/*
 * XREFs of MiLockLoaderEntry @ 0x140298A78
 * Callers:
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x14075CC44 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14075E724 (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
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
