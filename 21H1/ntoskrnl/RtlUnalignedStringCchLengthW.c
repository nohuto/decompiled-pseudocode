/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14025BB84
 * Callers:
 *     _CmValidateDeviceName @ 0x140618100 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x1406AAD50 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1406AAF78 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406AE410 (_RegRtlCreateTreeTransacted.c)
 *     _PnpParseIndirectResourceString @ 0x1406B7A1C (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406DD26C (_PnpParseIndirectInfString.c)
 *     _PnpSetPropertyWorker @ 0x14072BE70 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407363C8 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1407516C0 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x140758A1C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097810C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140979E44 (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = cchMax - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
