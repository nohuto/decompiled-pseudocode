/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F810
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18000F350 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManag.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18000F380 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_18000F380.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 28);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 28);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
