/*
 * XREFs of MiReturnVadCharges @ 0x140977F8C
 * Callers:
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14097ECFC (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 */

struct _KTHREAD *__fastcall MiReturnVadCharges(_QWORD *a1)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // rdx
  struct _KPROCESS *Process; // rdi
  __int64 v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned __int64 v7; // r8

  result = KeGetCurrentThread();
  v3 = a1[2];
  Process = result->ApcState.Process;
  if ( v3 )
    result = (struct _KTHREAD *)PsReturnProcessNonPagedPoolQuota(result->ApcState.Process, v3);
  v5 = a1[1];
  if ( v5 )
    result = (struct _KTHREAD *)PsReturnProcessPagedPoolQuota(Process, v5);
  if ( *a1 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    return (struct _KTHREAD *)MiReturnResident(ProcessPartition, v7);
  }
  return result;
}
