/*
 * XREFs of PsChangeQuantumTable @ 0x14077A3D8
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     MmIsThisAnNtAsSystem @ 0x14026FF10 (MmIsThisAnNtAsSystem.c)
 *     PspUnlockProcessListShared @ 0x1402CC9C0 (PspUnlockProcessListShared.c)
 *     KeSetQuantumProcess @ 0x1402F1B94 (KeSetQuantumProcess.c)
 *     PspComputeQuantum @ 0x1406AEC7C (PspComputeQuantum.c)
 */

char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *i; // rbx
  char v11; // al
  __int64 v12; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&PspVariableQuantums;
  }
  else if ( v5 == 8 )
  {
    v6 = PspFixedQuantums;
  }
  else
  {
    v6 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&PspVariableQuantums;
  }
  v7 = a2 & 0x30;
  if ( v7 == 16 || v7 != 32 && MmIsThisAnNtAsSystem() )
    v6 += 3;
  PspForegroundQuantum = *(_WORD *)v6;
  result = v6[2];
  PspUseJobSchedulingClasses = v6 == &byte_140980187;
  byte_140D2E876 = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v11 = PspComputeQuantum((__int64)(i - 137), *((_BYTE *)i + 754));
      KeSetQuantumProcess(v12, v11);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
