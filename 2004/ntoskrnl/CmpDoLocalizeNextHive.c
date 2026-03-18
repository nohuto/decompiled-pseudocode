/*
 * XREFs of CmpDoLocalizeNextHive @ 0x14063C700
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x14063C634 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x14063FE90 (CmpGetNextActiveHive.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rcx
  __int64 NextActiveHive; // rsi
  int locked; // ebx

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140C00584;
  *a1 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    for ( i = 0LL; ; i = NextActiveHive )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      if ( !NextActiveHive )
        break;
      CmpLockRegistry();
      locked = HvHiveConvertLockedPagesToCowByPolicy(NextActiveHive);
      CmpUnlockRegistry();
      if ( locked < 0 )
      {
        v2 = 1;
        break;
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 1;
  }
  return v2;
}
