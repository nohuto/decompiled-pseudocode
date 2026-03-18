/*
 * XREFs of LockObjectAssignment @ 0x1C006FAD0
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C002D084 (HMChangeOwnerThreadWorker.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
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
