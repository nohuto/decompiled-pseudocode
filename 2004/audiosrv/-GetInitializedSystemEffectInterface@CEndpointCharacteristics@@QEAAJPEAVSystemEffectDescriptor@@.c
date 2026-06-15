/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021370
 * Callers:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037DE8 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048EC0 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004940C (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18004A07C (-CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D200 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D2D4 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180021560 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x180032D00 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int128 *a5,
        unsigned int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  unsigned int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  unsigned int v18; // r12d
  __int128 *v19; // r13
  int SystemEffectClsidsForMode; // eax
  void *v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rdx
  _QWORD **v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-20h] BYREF
  __int128 v29; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  int v33; // [rsp+C0h] [rbp+58h]
  int v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v13 = 0;
  v14 = 0LL;
  v27 = 0LL;
  v15 = a9;
  if ( a9 )
    *a9 = 0LL;
  v16 = a10;
  if ( a10 )
    *a10 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  if ( !a7 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1) )
  {
    LODWORD(a9) = 0;
    pv = 0LL;
    v18 = a6;
    v19 = a5;
    v29 = *a5;
    SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(a2, &v29, a6 != 0, &a9);
    v13 = SystemEffectClsidsForMode;
    if ( SystemEffectClsidsForMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A9,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SystemEffectClsidsForMode,
        (int)&pv);
      v21 = pv;
    }
    else
    {
      v21 = pv;
      if ( !(_DWORD)a9 )
      {
LABEL_14:
        CoTaskMemFree(v21);
        v13 = 0;
        goto LABEL_15;
      }
      LODWORD(a11) = v34 == 1;
      *(_QWORD *)&v29 = pv;
      LODWORD(a10) = *(_DWORD *)(a1 + 188);
      v32 = v33;
      v26 = &a9;
      v22 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              &v27,
              &v32,
              &a11,
              &a10);
      v13 = v22;
      if ( v22 < 0 )
      {
        v25 = 1203LL;
      }
      else
      {
        if ( !v16 && !v17 )
          goto LABEL_14;
        v29 = *v19;
        LODWORD(v26) = a8;
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v27 + 24LL))(
                v27,
                *(_QWORD *)(a1 + 16),
                &v29,
                v18);
        v13 = v22;
        if ( v22 >= 0 )
          goto LABEL_14;
        v25 = 1207LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v22,
        (int)v26);
    }
    CoTaskMemFree(v21);
    v14 = v27;
    goto LABEL_18;
  }
LABEL_15:
  v14 = v27;
LABEL_16:
  if ( v15 )
  {
    v23 = v14;
    v14 = 0LL;
    v27 = 0LL;
    *v15 = v23;
  }
LABEL_18:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v13;
}
