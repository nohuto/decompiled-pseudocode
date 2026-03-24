/*
 * XREFs of ?ClearCache@CExpression@@UEAAXXZ @ 0x1801C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

void __fastcall CExpression::ClearCache(void **this)
{
  if ( this[42] )
    memset_0(this[42], 0, *((unsigned int *)this + 86));
}
