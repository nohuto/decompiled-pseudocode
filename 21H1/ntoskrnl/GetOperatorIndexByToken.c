/*
 * XREFs of GetOperatorIndexByToken @ 0x140690D3C
 * Callers:
 *     LocalpGetStringForCondition @ 0x14068F6A4 (LocalpGetStringForCondition.c)
 *     LocalGetConditionForString @ 0x14092364C (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = &qword_1400062D8; *(_BYTE *)i != a1; i += 3 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
