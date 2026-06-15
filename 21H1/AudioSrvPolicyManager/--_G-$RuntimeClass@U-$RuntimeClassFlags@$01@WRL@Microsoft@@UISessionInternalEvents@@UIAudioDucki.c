/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISessionInternalEvents@@UIAudioDuckingManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000E960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents,IAudioDuckingManager>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[5] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
