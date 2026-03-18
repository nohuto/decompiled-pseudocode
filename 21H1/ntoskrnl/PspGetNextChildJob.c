/*
 * XREFs of PspGetNextChildJob @ 0x140612F18
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406129DC (PspLockJobShared.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  PspLockJobShared(a1, (__int64)CurrentThread);
  if ( a2 )
    v6 = (_QWORD *)a2[130];
  else
    v6 = *(_QWORD **)(a1 + 1056);
  while ( v6 != (_QWORD *)(a1 + 1056) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 130)) )
    {
      v5 = v6 - 130;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
