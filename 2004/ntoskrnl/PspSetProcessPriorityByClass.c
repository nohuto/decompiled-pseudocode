/*
 * XREFs of PspSetProcessPriorityByClass @ 0x1402F1898
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14065A394 (PspApplyJobLimitsToProcess.c)
 *     PsSetProcessPriorityByClass @ 0x1406F7670 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406F76A0 (PspSetProcessForegroundBackgroundRequest.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x1406AEBD4 (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PspSetProcessPriorityByClass(__int64 a1, int a2)
{
  int v3; // eax
  char v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v5 = 0;
  v7 = 0;
  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v5, (unsigned int)&v7, (__int64)&v6);
  return KeSetPriorityAndQuantumProcess(a1, v3, v5, v7, v6);
}
