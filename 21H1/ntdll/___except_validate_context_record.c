/*
 * XREFs of ___except_validate_context_record @ 0x4B2FB774
 * Callers:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 * Callees:
 *     <none>
 */

_DWORD (__stdcall *__cdecl __except_validate_context_record(int a1))()
{
  _DWORD (__stdcall *result)(); // eax
  struct _TEB *v2; // ecx

  result = __guard_check_icall_fptr;
  if ( (char *)__guard_check_icall_fptr != (char *)RtlpHpAppCompatDontChangePolicy )
  {
    v2 = NtCurrentTeb();
    result = *(_DWORD (__stdcall **)())(a1 + 196);
    if ( (void *)result < v2->NtTib.StackLimit || (void *)result > v2->NtTib.StackBase )
      __fastfail(0xDu);
  }
  return result;
}
