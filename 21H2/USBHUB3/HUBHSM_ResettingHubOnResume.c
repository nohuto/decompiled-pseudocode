/*
 * XREFs of HUBHSM_ResettingHubOnResume @ 0x1C0008A30
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_ResetHub @ 0x1C00078C0 (HUBPARENT_ResetHub.c)
 */

__int64 __fastcall HUBHSM_ResettingHubOnResume(__int64 a1)
{
  HUBPARENT_ResetHub(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
