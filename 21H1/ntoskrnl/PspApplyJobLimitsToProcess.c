/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x14065D8C8
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14065D0A8 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406ECED0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x1402D41C4 (KeSetDisableQuantumProcess.c)
 *     PspSetProcessPriorityByClass @ 0x1403369D8 (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x140336CD4 (KeSetQuantumProcess.c)
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140615F90 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140616040 (PspLockJobMemoryLimitsShared.c)
 *     PspSetProcessAffinitySafe @ 0x140903F14 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r8
  _DWORD *v10; // r9
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 1296);
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v5 + 848) & 0x20) != 0 )
  {
    v8 = *(_BYTE *)(a1 + 1850) == 2;
    *(_BYTE *)(a1 + 1463) = *(_BYTE *)(v5 + 872);
    PspSetProcessPriorityByClass(a1, v8);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v5 + 848) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, 1, (int)v5 + 616, 0, (__int64)&v11) >= 0
    && v11 )
  {
    PspWritePebAffinityInfo((__int64)CurrentThread, a1, v9, v10);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v5, (__int64)CurrentThread);
    if ( (*(_DWORD *)(v5 + 848) & 0x100) != 0 )
      v6 = *(_QWORD *)(v5 + 808);
    else
      v6 = 0LL;
    *(_QWORD *)(a1 + 1600) = v6;
    PspUnlockJobMemoryLimitsShared(v5, (__int64)CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1463) != 1 )
  {
    v7 = *(_DWORD *)(v5 + 852);
    if ( v7 >= 0xA )
      v7 = *(_DWORD *)(v5 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v7));
    KeSetDisableQuantumProcess(a1, v7 == 9);
  }
}
