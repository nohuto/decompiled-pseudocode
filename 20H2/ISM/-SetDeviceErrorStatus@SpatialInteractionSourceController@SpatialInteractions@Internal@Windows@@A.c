/*
 * XREFs of ?SetDeviceErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII@Z @ 0x18016EA44
 * Callers:
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180169E14 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016B9B0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetDeviceErrorStatus(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        int a2,
        int a3)
{
  *((_DWORD *)this + 231) = a2;
  *((_DWORD *)this + 232) = a3;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 932));
  *((_BYTE *)this + 105) = 1;
}
