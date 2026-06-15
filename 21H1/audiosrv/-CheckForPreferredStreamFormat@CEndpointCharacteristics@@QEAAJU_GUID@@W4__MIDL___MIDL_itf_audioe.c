/*
 * XREFs of ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18004A030
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180049E80 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021370 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800232E0 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D214 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::CheckForPreferredStreamFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v5; // rsi
  unsigned __int64 v6; // rbx
  struct IAudioMediaType **v9; // r14
  int v10; // eax
  struct IAudioMediaType **v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  int InitializedSystemEffectInterface; // eax
  unsigned int v16; // ebx
  struct IAudioMediaType **v17; // rcx
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  struct IAudioSystemEffects2 **v22; // [rsp+20h] [rbp-60h]
  __int64 v23[2]; // [rsp+60h] [rbp-20h] BYREF
  int v24[4]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v5 = a4;
  v6 = a3;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v10 = CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3);
  v11 = a5;
  a5 = 0LL;
  if ( v10 )
  {
    if ( v11 )
      ((void (__fastcall *)(struct IAudioMediaType **))(*v11)[2].lpVtbl)(v11);
    a5 = 0LL;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v6) )
    {
      if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) || (v12 = 0, (_DWORD)v6 == 3) )
        v12 = 1;
      *(struct _GUID *)v24 = *a2;
      v13 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 207, v6);
      if ( !SystemEffectDescriptor::IsModeSupportedForStreaming(v13, (__int128 *)v24, v12)
        || (*(struct _GUID *)v24 = *a2,
            v14 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 207, v6),
            InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                                 (__int64)this,
                                                 v14,
                                                 1,
                                                 0,
                                                 (__int128 *)v24,
                                                 0,
                                                 0,
                                                 v6,
                                                 0LL,
                                                 &a5,
                                                 0LL),
            v16 = InitializedSystemEffectInterface,
            InitializedSystemEffectInterface >= 0) )
      {
        v5 = a4;
        goto LABEL_10;
      }
      v20 = 7953LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)InitializedSystemEffectInterface,
        (int)v22);
      goto LABEL_14;
    }
  }
  else
  {
    if ( v11 )
      ((void (__fastcall *)(struct IAudioMediaType **))(*v11)[2].lpVtbl)(v11);
    InitializedSystemEffectInterface = CEndpointCharacteristics::GetLfx(
                                         this,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6,
                                         0LL,
                                         (struct IAudioProcessingObject **)&a5,
                                         v22);
    v16 = InitializedSystemEffectInterface;
    if ( InitializedSystemEffectInterface < 0 )
    {
      v20 = 7957LL;
      goto LABEL_27;
    }
  }
LABEL_10:
  v17 = a5;
  if ( a5 )
  {
    *(_QWORD *)v24 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioMediaType **, GUID *, int *))(*a5)->lpVtbl)(
           a5,
           &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7,
           v24) >= 0 )
    {
      v23[0] = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v24 + 24LL))(
              *(_QWORD *)v24,
              v5,
              v23);
      v16 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F1E,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v18,
          (int)v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v24);
LABEL_14:
        v17 = a5;
        goto LABEL_15;
      }
      v21 = v23[0];
      v23[0] = 0LL;
      *v9 = (struct IAudioMediaType *)v21;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v23);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v24);
    v17 = a5;
  }
  v16 = 0;
LABEL_15:
  if ( v17 )
    ((void (__fastcall *)(struct IAudioMediaType **))(*v17)[2].lpVtbl)(v17);
  return v16;
}
