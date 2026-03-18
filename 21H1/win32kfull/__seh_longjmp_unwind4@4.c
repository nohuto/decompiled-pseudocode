/*
 * XREFs of __seh_longjmp_unwind4@4 @ 0xEE24C
 * Callers:
 *     <none>
 * Callees:
 *     __local_unwind4 @ 0xEE174 (__local_unwind4.c)
 */

int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}
