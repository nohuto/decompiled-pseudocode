/*
 * XREFs of HUBDSM_ReleasingPowerReferenceOnHubOnEnumerationFailure @ 0x1C001D230
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ReleaseWdfPowerReferenceOnHub @ 0x1C0019758 (HUBPDO_ReleaseWdfPowerReferenceOnHub.c)
 */

__int64 __fastcall HUBDSM_ReleasingPowerReferenceOnHubOnEnumerationFailure(__int64 a1)
{
  HUBPDO_ReleaseWdfPowerReferenceOnHub(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
