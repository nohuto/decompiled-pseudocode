/*
 * XREFs of ACPITableLoadNotifyPnp @ 0x1C002E160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPITableLoadNotifyPnp(__int64 a1)
{
  __int64 result; // rax

  if ( (AcpiOverrideAttributes & 0x400) == 0 )
    return ACPIBuildSpecialSynchronizationRequest(a1, (__int64)ACPIBuildIssueInvalidateRelations, a1, 127, 1);
  return result;
}
