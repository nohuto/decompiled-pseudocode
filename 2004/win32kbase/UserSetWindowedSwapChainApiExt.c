/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x1C00C8590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserSetWindowedSwapChainApiExt())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252D30;
  if ( qword_1C0252D30 )
    return (__int64 (*)(void))qword_1C0252D30();
  return result;
}
