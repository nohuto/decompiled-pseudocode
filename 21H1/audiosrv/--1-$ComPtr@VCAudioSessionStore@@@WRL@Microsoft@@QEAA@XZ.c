/*
 * XREFs of ??1?$ComPtr@VCAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D5964
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$2 @ 0x18007A6FC (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceMan_ea_18007A6FC.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_unsigned_short_const___&_unsigned_short_const___&__::_1_::dtor$1 @ 0x18007A7D1 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_unsigned_short.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionStore>::~ComPtr<CAudioSessionStore>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>::Release(result);
  }
  return result;
}
