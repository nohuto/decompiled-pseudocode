/*
 * XREFs of ?ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ @ 0x1800CA1F0
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800CA0D4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801DC970 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CBaseExpression::ResolveTargetNoRef(CBaseExpression *this)
{
  __int64 v1; // rdx
  struct CResource *result; // rax

  v1 = *((_QWORD *)this + 22);
  result = 0LL;
  if ( v1 )
    return *(struct CResource **)(v1 + 16);
  return result;
}
