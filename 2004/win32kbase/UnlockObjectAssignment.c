/*
 * XREFs of UnlockObjectAssignment @ 0x1C0076460
 * Callers:
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockObjectAssignment(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)ObfDereferenceObject(result);
  }
  return result;
}
