/*
 * XREFs of ?DestroyAudioSessionManagerProvider@@YAXXZ @ 0x1800D0D9C
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BAE14 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void DestroyAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx

  EnterCriticalSection(&g_SessionManagerProviderLock);
  v0 = g_SingletonAudioSessionManagerProvider;
  g_SingletonAudioSessionManagerProvider = 0LL;
  if ( v0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v0);
  LeaveCriticalSection(&g_SessionManagerProviderLock);
}
