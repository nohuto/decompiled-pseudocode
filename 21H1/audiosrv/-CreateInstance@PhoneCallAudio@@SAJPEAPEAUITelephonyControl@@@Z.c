/*
 * XREFs of ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800673F8
 * Callers:
 *     ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180065138 (-RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058174 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800582EC (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800674D4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x180067604 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x180068484 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::CreateInstance(struct ITelephonyControl **a1)
{
  unsigned int v2; // esi
  PhoneCallAudio *v3; // rbx
  struct ITelephonyControl *v4; // rdi
  PhoneCallAudio *v5; // rax
  int v6; // ebp
  int Instance; // eax
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  PhoneCallAudio *v10; // [rsp+58h] [rbp+10h]
  PhoneCallAudio *v11; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v5 = (PhoneCallAudio *)operator new(0xA0uLL);
    v11 = v5;
    if ( v5 )
      v3 = PhoneCallAudio::PhoneCallAudio(v5);
    else
      v3 = 0LL;
    v10 = v3;
    if ( v3 )
    {
      v6 = 0;
      Instance = AudioDeviceMgr::CreateInstance(v3, (struct IAudioDeviceMgr **)v3 + 6);
      if ( Instance < 0
        || (Instance = PhoneCallEndTimer::CreateInstance(
                         v3,
                         (PhoneCallAudio *)((char *)v3 + 80),
                         (struct PhoneCallEndTimer **)v3 + 7),
            Instance < 0) )
      {
        v6 = Instance;
      }
      else
      {
        PhoneCallAudio::InitPhoneTopology(v3);
      }
      if ( v6 < 0 )
      {
        v2 = v6;
      }
      else
      {
        if ( v3 != (PhoneCallAudio *)-8LL )
        {
          ATL::AtlComPtrAssign(&v9, (struct IUnknown *)v3 + 1);
          v4 = (struct ITelephonyControl *)v9;
        }
        *a1 = v4;
      }
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  if ( v3 )
    (*(void (__fastcall **)(PhoneCallAudio *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
