/*
 * XREFs of __except_handler4 @ 0x4B2FAD10
 * Callers:
 *     <none>
 * Callees:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 */

int __cdecl _except_handler4(int a1, char *TargetFrame, int a3)
{
  return _except_handler4_common(
           &__security_cookie,
           (void (__thiscall *)(int))__security_check_cookie,
           a1,
           TargetFrame,
           a3);
}
