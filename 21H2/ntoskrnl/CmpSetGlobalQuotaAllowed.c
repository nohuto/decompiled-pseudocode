/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x1406C3FA8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
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
