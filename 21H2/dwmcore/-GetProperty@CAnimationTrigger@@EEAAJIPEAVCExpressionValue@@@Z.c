/*
 * XREFs of ?GetProperty@CAnimationTrigger@@EEAAJIPEAVCExpressionValue@@@Z @ 0x180209C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTrigger::GetProperty(CAnimationTrigger *this, int a2, struct CExpressionValue *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 2147942487LL;
  *(_BYTE *)a3 = *((_BYTE *)this + 112);
  *((_DWORD *)a3 + 18) = 17;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
