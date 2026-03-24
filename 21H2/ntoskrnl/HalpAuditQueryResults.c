/*
 * XREFs of HalpAuditQueryResults @ 0x1408666F4
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098FEF0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAuditQueryResults(_QWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)HalpAuditStatus;
  if ( HalpAuditStatus == -1073741637 )
    return 3221225659LL;
  *a1 = HalpAuditResults;
  return result;
}
