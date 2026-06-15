/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x1800E7B08
 * Callers:
 *     ?Initialize@TelephonyControllerCallInstance@@IEAAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@@Z @ 0x180144164 (-Initialize@TelephonyControllerCallInstance@@IEAAJAEAV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z @ 0x180144370 (-ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z.c)
 * Callees:
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>::reset(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    ReleaseAudioResourceHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
