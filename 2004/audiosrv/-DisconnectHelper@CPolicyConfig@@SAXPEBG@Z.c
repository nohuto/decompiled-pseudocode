/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002B5B4
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001C4C0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x18002ADF0 (-DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180058CEC (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D7584 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180011E70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B548 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::DisconnectHelper(const unsigned __int16 *a1)
{
  int AudioSessionManager; // eax
  __int64 v3; // r8
  struct CAudioSessionManager *v4; // rdi
  struct CAudioSessionManagerProvider *v5; // [rsp+38h] [rbp+10h] BYREF
  struct CAudioSessionManager *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)GetAudioSessionManagerProvider(&v5) >= 0 )
  {
    v6 = 0LL;
    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v5, a1, &v6);
    v4 = v6;
    if ( !AudioSessionManager )
    {
      LOBYTE(v3) = 1;
      CAudioSessionManager::Disconnect(v6, 2LL, v3);
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v4);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v5);
}
