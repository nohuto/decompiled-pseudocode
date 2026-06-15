/*
 * XREFs of ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x180067C54
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180066938 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005612C (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x180056628 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::CreateInstance(struct IUnknown *a1, struct IAudioDeviceMgr **a2)
{
  AudioDeviceMgr *v4; // rbx
  AudioDeviceMgr *v5; // rax
  int v6; // edi
  int v7; // eax

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (AudioDeviceMgr *)operator new(0xE8uLL);
    if ( v5 )
      v4 = AudioDeviceMgr::AudioDeviceMgr(v5);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v6 = AudioDeviceMgr::Initialize(v4, a1);
      if ( v6 >= 0 )
      {
        v7 = (**(__int64 (__fastcall ***)(AudioDeviceMgr *, GUID *, struct IAudioDeviceMgr **))v4)(
               v4,
               &GUID_495a7fca_552f_402a_8e78_78bf3ea87971,
               a2);
        v6 = 0;
        if ( v7 < 0 )
          v6 = v7;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v4 )
    (*(void (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}
