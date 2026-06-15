/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800D8260
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D72AC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001FAE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18004C4A0 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  int ModeEffect; // r15d
  struct tWAVEFORMATEX *v8; // rbx
  struct tWAVEFORMATEX *v9; // r14
  int v10; // eax
  __int64 v11; // rsi
  struct IAudioMediaType *v12; // rdi
  bool v13; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v15; // eax
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  struct IAudioMediaType *v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v20; // [rsp+58h] [rbp-18h] BYREF
  struct _GUID v21; // [rsp+60h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *v22; // [rsp+A8h] [rbp+38h] BYREF

  v20 = 0LL;
  v21 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v21, 0, 1, 0LL, &v20, 0LL);
  if ( ModeEffect >= 0 )
  {
    if ( v20 )
    {
      pv = 0LL;
      v22 = 0LL;
      ModeEffect = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv);
      if ( ModeEffect >= 0 )
      {
        ModeEffect = CloneWaveFormat(a4, &v22);
        if ( ModeEffect >= 0 )
        {
          v8 = (struct tWAVEFORMATEX *)pv;
          if ( (*((_WORD *)pv + 7) & 0xFFF8u) <= 0x100 )
          {
            ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
            v9 = v22;
            ConvertPCMWfxToIEEEFloat(v22);
            v18 = 0LL;
            *(_QWORD *)&v21.Data1 = 0LL;
            v19 = 0LL;
            ModeEffect = CAudioMediaType::Create(v9, (unsigned int)v9->cbSize + 18, &v18, 0.0, 0);
            if ( ModeEffect >= 0 )
            {
              ModeEffect = CAudioMediaType::Create(
                             v8,
                             (unsigned int)v8->cbSize + 18,
                             (struct IAudioMediaType **)&v21,
                             0.0,
                             0);
              if ( ModeEffect >= 0 )
              {
                v10 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a1 + 56LL))(a1);
                v11 = *(_QWORD *)&v21.Data1;
                v12 = v18;
                v13 = v10 == 0;
                lpVtbl = v20->lpVtbl;
                if ( v13 )
                  v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsInputFormatSupported)(
                          v20,
                          v18,
                          *(_QWORD *)&v21.Data1,
                          &v19);
                else
                  v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsOutputFormatSupported)(
                          v20,
                          v18,
                          *(_QWORD *)&v21.Data1,
                          &v19);
                ModeEffect = v15;
                if ( v15 && v15 != -2005073917 )
                  ModeEffect = -2004287480;
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                if ( v11 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
                if ( v12 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
              }
              else
              {
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                if ( *(_QWORD *)&v21.Data1 )
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v21.Data1 + 16LL))(*(_QWORD *)&v21.Data1);
                if ( v18 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
              }
            }
            else
            {
              if ( v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              if ( v18 )
                ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
            }
            CoTaskMemFree(v9);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
          else
          {
            ModeEffect = -2004287480;
            CoTaskMemFree(v22);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
        }
        else
        {
          CoTaskMemFree(v22);
          v22 = 0LL;
          CoTaskMemFree(pv);
          pv = 0LL;
        }
      }
      else
      {
        CoTaskMemFree(0LL);
        v22 = 0LL;
        CoTaskMemFree(pv);
        pv = 0LL;
      }
    }
    else
    {
      ModeEffect = 0;
    }
  }
  if ( v20 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v20->lpVtbl->Release)(v20);
  return (unsigned int)ModeEffect;
}
