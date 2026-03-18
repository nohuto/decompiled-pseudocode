/*
 * XREFs of GetOperatorIndexByToken @ 0x1406FDF1C
 * Callers:
 *     LocalpGetStringForCondition @ 0x1406FC3C8 (LocalpGetStringForCondition.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = &qword_140006458; *(_BYTE *)i != a1; i += 3 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
