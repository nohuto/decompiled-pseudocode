/*
 * XREFs of ___except_validate_jump_buffer @ 0x4B2FB7A6
 * Callers:
 *     __seh_longjmp_unwind4@4 @ 0x4B2F6F78 (__seh_longjmp_unwind4@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

struct _TEB *__cdecl __except_validate_jump_buffer(int a1)
{
  struct _TEB *result; // eax
  void *v2; // ecx

  result = (struct _TEB *)__guard_check_icall_fptr;
  if ( (char *)__guard_check_icall_fptr != (char *)RtlpHpAppCompatDontChangePolicy )
  {
    result = NtCurrentTeb();
    v2 = *(void **)(a1 + 16);
    if ( v2 < result->NtTib.StackLimit || v2 > result->NtTib.StackBase )
      __fastfail(0xDu);
    if ( GuardCheckLongJumpTargetImpl )
      return (struct _TEB *)GuardCheckLongJumpTargetImpl(GuardCheckLongJumpTargetImpl, *(_DWORD *)(a1 + 20), 0);
  }
  return result;
}
