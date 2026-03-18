/*
 * XREFs of EditionResetIMEConversionStatus @ 0x1C012DDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionResetIMEConversionStatus(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1 || !a2 || (result = 1023LL, ((*(_WORD *)(a2 + 40) ^ *(_WORD *)(a1 + 40)) & 0x3FF) != 0) )
    gdwIMEConversionStatus = -1;
  return result;
}
