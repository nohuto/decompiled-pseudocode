/*
 * XREFs of MiLockLoaderEntry @ 0x1402E0B94
 * Callers:
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x140746FC4 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x1407488EC (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
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
