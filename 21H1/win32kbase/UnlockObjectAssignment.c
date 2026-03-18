/*
 * XREFs of UnlockObjectAssignment @ 0x1C00701F0
 * Callers:
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0129350 (UserDeleteW32Thread.c)
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
