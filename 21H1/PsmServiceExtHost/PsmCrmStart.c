/*
 * XREFs of PsmCrmStart @ 0x1800425A0
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x1800425C4 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x1800428CC (CrmGlobalsInitialize.c)
 */

__int64 PsmCrmStart()
{
  __int64 result; // rax

  CrmGlobalsInitialize();
  result = CrmGlobalsStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
