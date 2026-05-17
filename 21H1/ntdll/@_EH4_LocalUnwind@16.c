/*
 * XREFs of @_EH4_LocalUnwind@16 @ 0x4B2F6FF0
 * Callers:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 * Callees:
 *     __local_unwind4 @ 0x4B2F6EA0 (__local_unwind4.c)
 */

int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}
