/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E3FB8
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18002F6E0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800343A0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

CSaDeviceProxy *__fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CSaDeviceProxy *)CSaDeviceProxy::Release(result);
  }
  return result;
}
