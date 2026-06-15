/*
 * XREFs of ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400425F0
 * Callers:
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140042384 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140001D64 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x1400031F0 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010860 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceExclusive::Cleanup(CSystemAudioDeviceExclusive *this)
{
  char *v2; // rcx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v3);
  if ( *((_DWORD *)this + 95) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>((_QWORD *)this + 29);
  v2 = (char *)*((_QWORD *)this + 44);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v3);
}
