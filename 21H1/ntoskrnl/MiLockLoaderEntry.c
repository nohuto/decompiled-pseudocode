/*
 * XREFs of MiLockLoaderEntry @ 0x140325C94
 * Callers:
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x140745444 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x140746D6C (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 104;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 2 )
      ExAcquirePushLockSharedEx(v3, 0LL);
    else
      ExAcquireAutoExpandPushLockExclusive(v3, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v3, a2);
  }
}
