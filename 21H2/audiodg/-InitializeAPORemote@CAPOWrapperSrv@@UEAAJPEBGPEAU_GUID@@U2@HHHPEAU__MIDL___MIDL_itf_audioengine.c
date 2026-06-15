/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000A190
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000AA70 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140052014 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_140052014.c)
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
  HRESULT v11; // edi
  void *v12; // rbx
  int v13; // r14d
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r9
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v19; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v20; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  struct IMMDevice *v24; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[20]; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+A4h] [rbp-5Ch]
  _OWORD v28[2]; // [rsp+A8h] [rbp-58h]
  struct APOInitSystemEffects2 v29; // [rsp+D0h] [rbp-30h] BYREF

  v18 = (__int64)a4;
  ppv = 0LL;
  v19 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  memset_0(&v29, 0, sizeof(v29));
  if ( !a2 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 11) )
    return 2147942414LL;
  *(_DWORD *)a8 = 0;
  v11 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v11 < 0 )
    goto LABEL_42;
  v12 = v19;
  if ( v19 != ppv )
  {
    if ( ppv )
      (**(void (__fastcall ***)(LPVOID, GUID *, void **))ppv)(ppv, &GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742, &v19);
    if ( v12 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( !v19 )
  {
    v11 = -2147467262;
    goto LABEL_42;
  }
  v13 = 1;
  (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v19 + 88LL))(v19, 1LL);
  v11 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v24);
  if ( v11 < 0 )
    goto LABEL_42;
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v20);
  if ( v11 < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_21;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           &v23) < 0 )
    {
      v11 = 0;
      goto LABEL_22;
    }
  }
  v25 = *(struct _GUID *)v18;
  v11 = FillAPOInitSystemEffectsStructure(v24, a3, &v25, a5, a6, &v29);
  if ( v11 < 0 )
    goto LABEL_42;
  if ( v20 )
  {
    v11 = (*(__int64 (__fastcall **)(char *, __int64, struct APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            88LL,
            &v29);
    if ( v11 < 0 )
      goto LABEL_42;
    goto LABEL_15;
  }
  if ( v23 )
  {
    *(_OWORD *)&v26[4] = 0LL;
    *(_DWORD *)&v26[16] = *(_DWORD *)&v29.APOInit.clsid.Data4[4];
    v27 = 0;
    v28[0] = *(_OWORD *)&v29.pAPOEndpointProperties;
    v28[1] = *(_OWORD *)&v29.pReserved;
    v17 = *((_QWORD *)this + 1);
    *(_OWORD *)v26 = *(_OWORD *)&v29.APOInit.cbSize;
    *(_DWORD *)v26 = 56;
    v11 = (*(__int64 (__fastcall **)(char *, __int64, _BYTE *))(v17 + 48))((char *)this + 8, 56LL, v26);
    if ( v11 < 0 )
    {
LABEL_42:
      if ( (unsigned int)dword_14008F0D0 > 2 )
      {
        LODWORD(v22) = v11;
        *(_QWORD *)&v25.Data1 = "CAPOWrapperSrv::InitializeAPORemote";
        LODWORD(v18) = 153;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_14008F0D0,
          (__int64)&v25,
          (__int64)&v18,
          (__int64)&v22);
      }
      goto LABEL_22;
    }
  }
LABEL_15:
  if ( a7 && *((struct IUnknown **)this + 12) != v20 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v20);
  v14 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  v18 = 0LL;
  v15 = 0LL;
  if ( !v14 || ((**v14)(v14, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, &v18), (v15 = v18) == 0) )
    v13 = 0;
  *(_DWORD *)a8 = v13;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_21:
  if ( v11 < 0 )
    goto LABEL_42;
LABEL_22:
  if ( v29.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v29.pAPOEndpointProperties->lpVtbl->Release)(v29.pAPOEndpointProperties);
    v29.pAPOEndpointProperties = 0LL;
  }
  if ( v29.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v29.pAPOSystemEffectsProperties->lpVtbl->Release)(v29.pAPOSystemEffectsProperties);
    v29.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v29.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v29.pDeviceCollection->lpVtbl->Release)(v29.pDeviceCollection);
    v29.pDeviceCollection = 0LL;
  }
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
  if ( v19 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
