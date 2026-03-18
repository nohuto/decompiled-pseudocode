/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x1406E42C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpSetGlobalQuotaAllowed()
{
  __int64 result; // rax

  result = CmpGlobalQuota;
  CmpGlobalQuotaAllowed = CmpGlobalQuota;
  return result;
}
