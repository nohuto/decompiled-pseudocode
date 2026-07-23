/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14026C97C
 * Callers:
 *     ObAdjustSecurityQuota @ 0x140654968 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140655058 (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x1406C6FA0 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1408DD5D8 (ObGetObjectInformation.c)
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
