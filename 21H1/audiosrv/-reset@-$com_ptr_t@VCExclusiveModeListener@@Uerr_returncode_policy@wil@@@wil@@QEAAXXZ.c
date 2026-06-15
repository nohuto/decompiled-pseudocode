/*
 * XREFs of ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010A0D0
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180048020 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180109780 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180108C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMM_ea_180108C10.c)
 */

__int64 __fastcall wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(result);
  return result;
}
