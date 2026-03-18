/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402A488C
 * Callers:
 *     NtQueryObject @ 0x14070FD80 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x140725858 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140726394 (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x140984994 (ObGetObjectInformation.c)
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
