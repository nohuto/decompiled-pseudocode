/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180003B34
 * Callers:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x180003B5C (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D5D90 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAud.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@Microsoft@@UEAA@XZ @ 0x1800E3FE8 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@M.c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800EB340 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(
        __int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return v2;
}
