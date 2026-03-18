/*
 * XREFs of UnlockObjectAssignment @ 0x1C0052170
 * Callers:
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
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
