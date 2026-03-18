/*
 * XREFs of @_EH4_LocalUnwind@16 @ 0xEE2B8
 * Callers:
 *     __except_handler4 @ 0xEE020 (__except_handler4.c)
 * Callees:
 *     __local_unwind4 @ 0xEE174 (__local_unwind4.c)
 */

int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}
