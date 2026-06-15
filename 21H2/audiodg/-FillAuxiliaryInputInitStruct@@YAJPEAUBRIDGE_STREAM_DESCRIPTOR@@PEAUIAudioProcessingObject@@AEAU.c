/*
 * XREFs of ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14003CF98
 * Callers:
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14003D204 (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000AA70 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FillAuxiliaryInputInitStruct(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct APOInitSystemEffects2 *a3)
{
  int v6; // ebx
  struct IMMDevice *v8; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  struct _GUID v10; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v8 = 0LL;
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *((_QWORD *)a1 + 5),
           &v8);
  pv = 0LL;
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, LPVOID *))a2->lpVtbl->GetRegistrationProperties)(
           a2,
           &pv);
    if ( v6 >= 0 )
    {
      v10 = *(struct _GUID *)((char *)a1 + 12);
      v6 = FillAPOInitSystemEffectsStructure(
             v8,
             (struct _GUID *)pv,
             &v10,
             0,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a1 + 2),
             a3);
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
