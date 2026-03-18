/*
 * XREFs of PopIdleCsStateChanged @ 0x1408F7E54
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381644 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x140574AF0 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057A808 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C23291 = v1;
  if ( v1 )
  {
    qword_140C23298 = qword_140C4FD88;
    if ( !qword_140C4FD88 )
      qword_140C23298 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( (unsigned int)PopGetModernStandbyTransitionReason(0, 0LL) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C23270 = 0;
    qword_140C23298 = 0LL;
  }
  return PopReleasePolicyLock(v3, v2);
}
