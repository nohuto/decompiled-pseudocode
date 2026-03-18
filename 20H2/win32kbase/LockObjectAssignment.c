/*
 * XREFs of LockObjectAssignment @ 0x1C0051D60
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     HMAllocObject @ 0x1C0056580 (HMAllocObject.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
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
