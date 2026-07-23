/*
 * XREFs of __raise_exc @ 0x4B2FDAE6
 * Callers:
 *     __87except @ 0x4B2FEB82 (__87except.c)
 * Callees:
 *     __raise_exc_ex @ 0x4B2FDB09 (__raise_exc_ex.c)
 */

void __cdecl __noreturn _raise_exc(ULONG_PTR Arguments, int a2, int a3, int a4, int a5)
{
  _raise_exc_ex(Arguments, a2, a3, a4, a5, 0);
}
