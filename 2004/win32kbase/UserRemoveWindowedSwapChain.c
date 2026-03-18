/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C00C85C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserRemoveWindowedSwapChain())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252D38;
  if ( qword_1C0252D38 )
    return (__int64 (*)(void))qword_1C0252D38();
  return result;
}
