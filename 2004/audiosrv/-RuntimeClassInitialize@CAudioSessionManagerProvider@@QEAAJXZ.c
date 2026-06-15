/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180065238
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180065184 (--$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAud.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x180065690 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800674F8 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManagerProvider::RuntimeClassInitialize(CAudioSessionManagerProvider *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v3; // eax
  struct ITelephonyControl *v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct IAudioDuckingManager *v9; // rax
  CAudioSessionManagerProvider *v10; // rcx
  struct IAudioPolicyManager *v11; // rax
  struct ISessionInternalEvents *v12; // rax
  struct IUnknown *v13; // rax
  DynamicAudioEndpointManager *v14; // rax
  DynamicAudioEndpointManager *v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CAudioSessionManagerProvider *v19; // [rsp+60h] [rbp+20h] BYREF
  struct IAudioPolicyManager *v20; // [rsp+68h] [rbp+28h] BYREF
  struct ITelephonyControl *v21; // [rsp+70h] [rbp+30h] BYREF
  struct ISessionInternalEvents *v22; // [rsp+78h] [rbp+38h] BYREF

  v19 = this;
  v17 = 0LL;
  v1 = (**(__int64 (__fastcall ***)(struct IAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
         g_AudioResourceManager,
         &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
         &v17);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)v2);
    goto LABEL_17;
  }
  v21 = 0LL;
  v3 = PhoneCallAudio::CreateInstance(&v21);
  v2 = v3;
  if ( v3 >= 0 )
  {
    v20 = 0LL;
    v4 = v21;
    v5 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v17, v21, &v20);
    v2 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      if ( v20 )
        (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_15;
    }
    v22 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, struct ISessionInternalEvents **))v20)(
           v20,
           &GUID_a68ab569_b923_4330_a258_1735412d392e,
           &v22);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v6);
LABEL_11:
      if ( v22 )
        (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v22 + 16LL))(v22);
      goto LABEL_13;
    }
    v19 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, CAudioSessionManagerProvider **))(*(_QWORD *)v20 + 24LL))(
           v20,
           &v19);
    v2 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v16 = 0LL;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(&v16);
      v2 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v8);
        v10 = v19;
        v14 = v16;
      }
      else
      {
        v9 = v19;
        v10 = 0LL;
        v19 = 0LL;
        g_DuckingManager = v9;
        v11 = v20;
        v20 = 0LL;
        g_PolicyManager = v11;
        v12 = v22;
        v22 = 0LL;
        g_PolicyEventsHandler = v12;
        v13 = (struct IUnknown *)v4;
        v4 = 0LL;
        v21 = 0LL;
        g_TelephonyControl = v13;
        v14 = 0LL;
        g_DynamicAudioEndpointManager = v16;
        v2 = 0;
      }
      if ( !v14 )
      {
LABEL_9:
        if ( v10 )
          (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_11;
      }
      (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v10 = v19;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (const char *)(unsigned int)v3);
  v4 = v21;
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  return v2;
}
