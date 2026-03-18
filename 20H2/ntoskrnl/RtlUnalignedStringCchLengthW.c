/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140267ED4
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x140640C4C (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x140640E90 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x14066DD50 (_CmValidateDeviceName.c)
 *     _PnpParseIndirectResourceString @ 0x1406B0610 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406D31AC (_PnpParseIndirectInfString.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406E5EBC (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpSetPropertyWorker @ 0x140735740 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073E2AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140764990 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14076905C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097F27C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140980FB4 (DrvDbValidateDeviceIdName.c)
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
