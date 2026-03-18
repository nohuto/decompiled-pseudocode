/*
 * XREFs of HUBHSM_SettingUpHubPostErrataQuery @ 0x1C0008C20
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000E168 (HUBFDO_SetupHubPostErrataQuery.c)
 */

__int64 __fastcall HUBHSM_SettingUpHubPostErrataQuery(__int64 a1)
{
  return HUBFDO_SetupHubPostErrataQuery(*(PVOID *)(a1 + 960));
}
