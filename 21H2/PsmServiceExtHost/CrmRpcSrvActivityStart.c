/*
 * XREFs of CrmRpcSrvActivityStart @ 0x18002EC30
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityStart @ 0x18002ECD8 (CrmSrvActivityStart.c)
 */

__int64 __fastcall CrmRpcSrvActivityStart(__int64 a1)
{
  __int64 result; // rax

  result = CrmSrvActivityStart(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
