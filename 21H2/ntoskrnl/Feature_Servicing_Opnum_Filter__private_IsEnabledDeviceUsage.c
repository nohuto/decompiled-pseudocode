/*
 * XREFs of Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x1403F9BD0
 * Callers:
 *     AdtpWriteToEtw @ 0x1407B8BF8 (AdtpWriteToEtw.c)
 * Callees:
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x1403F9C08 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Opnum_Filter__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Opnum_Filter__private_featureState & 1;
  else
    return Feature_Servicing_Opnum_Filter__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Opnum_Filter__private_featureState,
             3LL);
}
