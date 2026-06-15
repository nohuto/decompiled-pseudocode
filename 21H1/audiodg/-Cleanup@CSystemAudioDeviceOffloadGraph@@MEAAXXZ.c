/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14003AB50
 * Callers:
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003A90C (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010720 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceOffloadGraph::Cleanup(CSystemAudioDeviceOffloadGraph *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  EtwEventActivityIdControl(4LL, &v2);
}
