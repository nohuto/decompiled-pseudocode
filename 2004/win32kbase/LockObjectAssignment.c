/*
 * XREFs of LockObjectAssignment @ 0x1C0076B50
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C004FD24 (HMChangeOwnerThreadWorker.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     HMAllocObject @ 0x1C0094E60 (HMAllocObject.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
