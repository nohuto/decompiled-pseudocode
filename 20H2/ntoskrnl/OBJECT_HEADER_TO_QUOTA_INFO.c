/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x140209D7C
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1405F5DA8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405F6F70 (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x140634BE0 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1408DFCB8 (ObGetObjectInformation.c)
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
