/*
 * XREFs of PopPowerActionWatchdog @ 0x14056A150
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1403807F8 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C22FE4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C22FE4 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C22FF0;
    if ( !qword_140C22FF0 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C22FF8;
      if ( !qword_140C22FF8 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C23000;
        if ( !qword_140C23000 )
        {
          BugCheckParameter4 = (struct _KTHREAD *)PopTransitionLockOwnerThread;
          if ( !PopTransitionLockOwnerThread )
          {
            BugCheckParameter4 = (struct _KTHREAD *)PopPolicyLockThread;
            if ( !PopPolicyLockThread )
              BugCheckParameter4 = KeGetCurrentThread();
          }
        }
      }
    }
  }
  KeBugCheckEx(0xA0u, v0, dword_140C22E60, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
