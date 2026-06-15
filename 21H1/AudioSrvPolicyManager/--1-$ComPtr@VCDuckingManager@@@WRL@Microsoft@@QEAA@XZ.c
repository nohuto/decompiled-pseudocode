/*
 * XREFs of ??1?$ComPtr@VCDuckingManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18000E6B8
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$9 @ 0x180040A98 (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18000FB00.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDuckingManager>::~ComPtr<CDuckingManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(result);
  }
  return result;
}
