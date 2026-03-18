/*
 * XREFs of sub_1C002DC34 @ 0x1C002DC34
 * Callers:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     WorkerRoutine @ 0x1C00057E0 (WorkerRoutine.c)
 * Callees:
 *     sub_1C00417F0 @ 0x1C00417F0 (sub_1C00417F0.c)
 */

void __fastcall __noreturn sub_1C002DC34(__int64 a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2;
  if ( a1 )
    sub_1C00417F0(a1);
  KeBugCheckEx(0xFEu, 8uLL, 6uLL, v3, a3);
}
