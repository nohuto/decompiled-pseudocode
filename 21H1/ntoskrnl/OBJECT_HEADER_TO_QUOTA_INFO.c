/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14025B3EC
 * Callers:
 *     NtQueryObject @ 0x1405D95E0 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x1406141C8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140615390 (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x1408D8B08 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
