/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140202C64
 * Callers:
 *     _CmValidateDeviceName @ 0x1405E1FC0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpGetGenericStoreProperty @ 0x1406C130C (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406C1550 (_PnpOpenPropertiesKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406C478C (_RegRtlCreateTreeTransacted.c)
 *     _PnpParseIndirectResourceString @ 0x1406D58EC (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406FFECC (_PnpParseIndirectInfString.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072FAF4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140755D50 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14075A89C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1409794AC (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14097B1E4 (DrvDbValidateDeviceIdName.c)
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
