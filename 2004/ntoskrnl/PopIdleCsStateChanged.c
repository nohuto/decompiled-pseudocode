/*
 * XREFs of PopIdleCsStateChanged @ 0x1408F2244
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570F80 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14037F914 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1405710C0 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576DD8 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C22DD1 = v1;
  if ( v1 )
  {
    qword_140C22DD8 = qword_140C4FD08;
    if ( !qword_140C4FD08 )
      qword_140C22DD8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( (unsigned int)PopGetModernStandbyTransitionReason(0, 0LL) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C22DB0 = 0;
    qword_140C22DD8 = 0LL;
  }
  return PopReleasePolicyLock(v3, v2);
}
