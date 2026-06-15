/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x18012EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002BAE4 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180057AD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801313A4 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 */

__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002 *a8)
{
  HRESULT Instance; // ebx
  __int64 v13; // r8
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r9
  int v15; // esi
  APOInitSystemEffects2 *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct IUnknown *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v22; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct IMMDevice *v26; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v27; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A4h] [rbp-5Ch]
  _OWORD v31[2]; // [rsp+A8h] [rbp-58h]
  APOInitSystemEffects2 v32; // [rsp+D0h] [rbp-30h] BYREF

  ppv = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  memset_0(&v32, 0, sizeof(v32));
  if ( !a2 )
    return (unsigned int)-2147024809;
  if ( !*((_QWORD *)this + 11) )
    return (unsigned int)-2147024882;
  *(_DWORD *)a8 = 0;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               (LPVOID *)&ppv);
  if ( Instance < 0 )
    goto LABEL_30;
  if ( v20 != ppv )
    ATL::AtlComQIPtrAssign(&v20, ppv, &GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742);
  if ( !v20 )
  {
    Instance = -2147467262;
    goto LABEL_30;
  }
  v15 = 1;
  ((void (__fastcall *)(struct IUnknown *, __int64))v20->lpVtbl[3].Release)(v20, 1LL);
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, const unsigned __int16 *, struct IMMDevice **))ppv->lpVtbl[1].Release)(
               ppv,
               a2,
               &v26);
  if ( Instance < 0 )
    goto LABEL_30;
  Instance = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
               *((_QWORD *)this + 11),
               &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
               &v22);
  if ( Instance >= 0 )
    goto LABEL_15;
  if ( a7 == 1 )
    goto LABEL_29;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
         *((_QWORD *)this + 11),
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         &v25) >= 0 )
  {
LABEL_15:
    v27 = *a4;
    Instance = FillAPOInitSystemEffectsStructure(v26, a3, &v27, a5, a6, &v32);
    if ( Instance < 0 )
      goto LABEL_30;
    if ( v22 )
    {
      v16 = &v32;
      v17 = 88LL;
    }
    else
    {
      if ( !v25 )
      {
LABEL_21:
        if ( a7 && *((struct IUnknown **)this + 12) != v22 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v22);
        v14 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
        v18 = 0LL;
        v21 = 0LL;
        if ( !v14 || ((**v14)(v14, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, &v21), (v18 = v21) == 0) )
          v15 = 0;
        *(_DWORD *)a8 = v15;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_29:
        if ( Instance >= 0 )
          goto LABEL_32;
LABEL_30:
        if ( (unsigned int)dword_18019C4B8 > 2 )
        {
          LODWORD(v24) = Instance;
          *(_QWORD *)&v27.Data1 = "CAPOWrapperSrv::InitializeAPORemote";
          LODWORD(v21) = 153;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_18019C4B8,
            byte_18016C14C,
            v13,
            (__int64)v14,
            (const CHAR **)&v27,
            (__int64)&v21,
            (__int64)&v24);
        }
        goto LABEL_32;
      }
      v16 = (APOInitSystemEffects2 *)&v28;
      v17 = 56LL;
      v29 = *(_DWORD *)&v32.APOInit.clsid.Data4[4];
      v30 = 0;
      v31[0] = *(_OWORD *)&v32.pAPOEndpointProperties;
      v31[1] = *(_OWORD *)&v32.pReserved;
      v28 = *(_OWORD *)&v32.APOInit.cbSize;
      LODWORD(v28) = 56;
    }
    Instance = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
                 (char *)this + 8,
                 v17,
                 v16);
    if ( Instance < 0 )
      goto LABEL_30;
    goto LABEL_21;
  }
  Instance = 0;
LABEL_32:
  if ( v32.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOEndpointProperties->lpVtbl->Release)(v32.pAPOEndpointProperties);
    v32.pAPOEndpointProperties = 0LL;
  }
  if ( v32.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOSystemEffectsProperties->lpVtbl->Release)(v32.pAPOSystemEffectsProperties);
    v32.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v32.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v32.pDeviceCollection->lpVtbl->Release)(v32.pDeviceCollection);
    v32.pDeviceCollection = 0LL;
  }
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( ppv )
    ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->Release)(ppv);
  return (unsigned int)Instance;
}
