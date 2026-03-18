/*
 * XREFs of PopPowerActionWatchdog @ 0x14056DB80
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1403825B8 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140563474 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C234A4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C234A4 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C234B0;
    if ( !qword_140C234B0 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C234B8;
      if ( !qword_140C234B8 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C234C0;
        if ( !qword_140C234C0 )
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
  KeBugCheckEx(0xA0u, v0, dword_140C23320, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
