/*
 * XREFs of AuthzBasepSupportSetOperation @ 0x1402F389C
 * Callers:
 *     AuthzBasepIsValidExpression @ 0x1402F3788 (AuthzBasepIsValidExpression.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepSupportSetOperation(unsigned __int64 a1)
{
  __int64 v1; // rax
  bool result; // al

  LOBYTE(a1) = a1 + 0x80;
  result = 0;
  if ( (unsigned __int8)a1 <= 0x22u )
  {
    v1 = 0x7000FFFC3LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
