/*
 * XREFs of GetOperatorIndexByToken @ 0x140669B7C
 * Callers:
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = &qword_140006358; *(_BYTE *)i != a1; i += 3 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
