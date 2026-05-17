/*
 * XREFs of __seh_longjmp_unwind4@4 @ 0x4B2F6F78
 * Callers:
 *     <none>
 * Callees:
 *     __local_unwind4 @ 0x4B2F6EA0 (__local_unwind4.c)
 *     ___except_validate_jump_buffer @ 0x4B2FB7A6 (___except_validate_jump_buffer.c)
 */

int __stdcall _seh_longjmp_unwind4(int a1)
{
  __except_validate_jump_buffer(a1);
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}
