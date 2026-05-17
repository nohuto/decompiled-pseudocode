/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x18006DEB0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DCA0 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(void *a1)
{
  struct _TEB *v1; // rdx

  v1 = NtCurrentTeb();
  return a1 >= v1->NtTib.StackLimit && a1 <= v1->NtTib.StackBase;
}
