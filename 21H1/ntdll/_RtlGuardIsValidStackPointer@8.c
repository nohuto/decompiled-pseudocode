/*
 * XREFs of _RtlGuardIsValidStackPointer@8 @ 0x4B2E92F5
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

BOOL __fastcall RtlGuardIsValidStackPointer(void *a1)
{
  struct _TEB *v1; // edx

  v1 = NtCurrentTeb();
  return a1 >= v1->NtTib.StackLimit && a1 <= v1->NtTib.StackBase;
}
