/*
 * XREFs of PspGetNextJobProcess @ 0x140657B30
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14027B210 (PspExecuteJobFreezeThawCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x140656960 (PspSetCpuRateControlJobPostCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406579D0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x140657A70 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140903A14 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x140906940 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x14068AB34 (PspLockJobExclusive.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi

  PspLockJobExclusive(a1, a2);
  if ( !a4 )
  {
    v8 = (_QWORD *)(a1 + 1088);
    v9 = *(_QWORD *)(a1 + 1088);
    if ( *(_QWORD *)(v9 + 8) == a1 + 1088 )
    {
      *a3 = v9;
      v10 = (_QWORD *)(a1 + 40);
      a3[1] = v8;
      *(_QWORD *)(v9 + 8) = a3;
      *v8 = a3;
      a3[2] = a1 + 40;
      goto LABEL_4;
    }
    goto FatalListEntryError_80;
  }
  v10 = (_QWORD *)a3[2];
LABEL_4:
  while ( 1 )
  {
    v10 = (_QWORD *)*v10;
    if ( v10 == (_QWORD *)(a1 + 40) )
      break;
    v13 = v10 - 185;
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 185)) )
      goto LABEL_8;
  }
  v11 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v12 = (_QWORD *)a3[1], (_QWORD *)*v12 != a3) )
FatalListEntryError_80:
    __fastfail(3u);
  *v12 = v11;
  v13 = 0LL;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_8:
  a3[2] = v10;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v13;
}
