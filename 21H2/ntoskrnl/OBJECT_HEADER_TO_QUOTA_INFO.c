/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14027E9DC
 * Callers:
 *     ObAdjustSecurityQuota @ 0x14065FB48 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140660238 (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x140718950 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1408DD478 (ObGetObjectInformation.c)
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
