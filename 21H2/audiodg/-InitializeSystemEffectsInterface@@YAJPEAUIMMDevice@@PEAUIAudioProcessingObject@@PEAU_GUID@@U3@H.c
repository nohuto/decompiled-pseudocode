/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009B20
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006040 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD10 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000AA70 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0jjt_EventWriteTransfer @ 0x140053660 (McTemplateU0jjt_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  __int64 v10; // rcx
  GUID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  APOInitSystemEffects2 *v15; // r8
  __int64 v16; // rdx
  GUID *v18; // r9
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+64h] [rbp-9Ch]
  _OWORD v25[2]; // [rsp+68h] [rbp-98h]
  APOInitSystemEffects2 v26; // [rsp+90h] [rbp-70h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  memset_0(&v26, 0, sizeof(v26));
  v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v11 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v10 )
    v11 = a4;
  *a4 = *v11;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v19) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         &v20) < 0 )
  {
    goto LABEL_12;
  }
  v21 = *a4;
  v14 = FillAPOInitSystemEffectsStructure(a1, a3, &v21, 0, a6, &v26);
  if ( v14 < 0 )
    goto LABEL_13;
  if ( v19 )
  {
    v15 = &v26;
    v16 = 88LL;
  }
  else
  {
    if ( !v20 )
      goto LABEL_10;
    v24 = 0;
    v22 = *(_OWORD *)&v26.APOInit.cbSize;
    v23 = *(_DWORD *)&v26.APOInit.clsid.Data4[4];
    LODWORD(v22) = 56;
    v25[0] = *(_OWORD *)&v26.pAPOEndpointProperties;
    v25[1] = *(_OWORD *)&v26.pReserved;
    v15 = (APOInitSystemEffects2 *)&v22;
    v16 = 56LL;
  }
  v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
          a2,
          v16,
          v15);
LABEL_10:
  if ( v14 < 0 )
    goto LABEL_13;
  if ( (byte_140090581 & 2) != 0 )
  {
    v18 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( v19 )
      v18 = a4;
    McTemplateU0jjt_EventWriteTransfer(v13, v12, a3, v18);
  }
LABEL_12:
  v14 = 0;
LABEL_13:
  if ( v26.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOEndpointProperties->lpVtbl->Release)(v26.pAPOEndpointProperties);
    v26.pAPOEndpointProperties = 0LL;
  }
  if ( v26.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOSystemEffectsProperties->lpVtbl->Release)(v26.pAPOSystemEffectsProperties);
    v26.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v26.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v26.pDeviceCollection->lpVtbl->Release)(v26.pDeviceCollection);
    v26.pDeviceCollection = 0LL;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v14;
}
