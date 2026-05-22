/*
 * XREFs of ?RuntimeClassInitialize@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAJPEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x18016E7A0
 * Callers:
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x180168340 (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *a2,
        const struct SPATIAL_NODE_ID *a3,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a4)
{
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v11; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 11) = a2;
  *((_OWORD *)this + 4) = *(_OWORD *)a3;
  v6 = (struct Windows::Internal::Holographic::ISpatialGraphDriverClient *)*((_QWORD *)this + 12);
  if ( v6 != a4 )
  {
    v11 = a4;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
    v11 = (struct Windows::Internal::Holographic::ISpatialGraphDriverClient *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v11);
    v6 = (struct Windows::Internal::Holographic::ISpatialGraphDriverClient *)*((_QWORD *)this + 12);
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, char *, Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *))(*(_QWORD *)v6 + 48LL))(
         v6,
         (char *)this + 64,
         this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 104) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
