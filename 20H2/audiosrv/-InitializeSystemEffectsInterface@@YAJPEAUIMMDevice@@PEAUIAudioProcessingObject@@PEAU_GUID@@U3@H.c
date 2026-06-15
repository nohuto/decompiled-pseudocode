/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180131AFC
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180010640 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801313A4 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     McTemplateU0jjt_EventWriteTransfer @ 0x180131E10 (McTemplateU0jjt_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        BOOL a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  __int64 v11; // rcx
  GUID *v12; // rax
  int v13; // ebx
  BOOL v14; // r15d
  __int64 v15; // rdx
  struct APOInitSystemEffects2 *v16; // r8
  __int64 v17; // rdx
  GUID *v18; // r9
  struct IAudioSystemEffects2 *v19; // rax
  struct IAudioSystemEffects2 *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v23; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+64h] [rbp-9Ch]
  _OWORD v27[2]; // [rsp+68h] [rbp-98h]
  struct APOInitSystemEffects2 v28; // [rsp+90h] [rbp-70h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset_0(&v28, 0, sizeof(v28));
  v11 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v11 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v11 )
    v12 = a4;
  *a4 = *v12;
  if ( a7 )
    *a7 = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioSystemEffects2 **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v21);
  if ( v13 < 0 )
  {
    if ( a7 )
      goto LABEL_26;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           &v22) < 0 )
      goto LABEL_10;
  }
  v23 = *a4;
  v14 = a5;
  v13 = FillAPOInitSystemEffectsStructure(a1, a3, &v23, a5, a6, &v28);
  if ( v13 >= 0 )
  {
    if ( v21 )
    {
      v16 = &v28;
      v17 = 88LL;
    }
    else
    {
      if ( !v22 )
        goto LABEL_17;
      v26 = 0;
      v24 = *(_OWORD *)&v28.APOInit.cbSize;
      v25 = *(_DWORD *)&v28.APOInit.clsid.Data4[4];
      v17 = 56LL;
      LODWORD(v24) = 56;
      v27[0] = *(_OWORD *)&v28.pAPOEndpointProperties;
      v27[1] = *(_OWORD *)&v28.pReserved;
      v16 = (struct APOInitSystemEffects2 *)&v24;
    }
    v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
            a2,
            v17,
            v16);
LABEL_17:
    if ( v13 >= 0 )
    {
      if ( (byte_18019F941 & 2) != 0 )
      {
        if ( !v21 )
          v14 = 0;
        v18 = &GUID_00000000_0000_0000_0000_000000000000;
        if ( v21 )
          v18 = a4;
        McTemplateU0jjt_EventWriteTransfer(v21, v15, a3, v18, v14);
      }
      if ( a7 )
      {
        v19 = v21;
        v21 = 0LL;
        *a7 = v19;
      }
LABEL_10:
      v13 = 0;
    }
  }
LABEL_26:
  if ( v28.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v28.pAPOEndpointProperties->lpVtbl->Release)(v28.pAPOEndpointProperties);
    v28.pAPOEndpointProperties = 0LL;
  }
  if ( v28.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v28.pAPOSystemEffectsProperties->lpVtbl->Release)(v28.pAPOSystemEffectsProperties);
    v28.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v28.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v28.pDeviceCollection->lpVtbl->Release)(v28.pDeviceCollection);
    v28.pDeviceCollection = 0LL;
  }
  if ( v21 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v13;
}
