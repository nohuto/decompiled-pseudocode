/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D16DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManager_CAudioSessionManager_unsigned_short_const___&__::_1_::dtor$2 @ 0x18007ADE7 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManager_CAudioSessionManag_ea_18007ADE7.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CAudioSessionManager>::~ComPtr<CAudioSessionManager>(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v1);
  }
  return v1;
}
