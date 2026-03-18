/*
 * XREFs of @_EH4_CallFilterFunc@8 @ 0xEE268
 * Callers:
 *     __except_handler4 @ 0xEE020 (__except_handler4.c)
 * Callees:
 *     <none>
 */

int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}
