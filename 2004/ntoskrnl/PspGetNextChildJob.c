/*
 * XREFs of PspGetNextChildJob @ 0x14068B098
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x14068AB5C (PspLockJobShared.c)
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
