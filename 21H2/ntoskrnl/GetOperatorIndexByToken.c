/*
 * XREFs of GetOperatorIndexByToken @ 0x1409D11D0
 * Callers:
 *     LocalGetConditionForString @ 0x1409D1D04 (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x1409D3874 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = &qword_14000A998; *(_BYTE *)i != a1; i += 3 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
