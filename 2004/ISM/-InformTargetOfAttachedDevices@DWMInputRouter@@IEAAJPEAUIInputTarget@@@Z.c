/*
 * XREFs of ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18002A7AC
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A640 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064040 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::InformTargetOfAttachedDevices(
        DWMInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 **))
{
  __int64 (__fastcall *v4)(struct IInputTarget *, GUID *, __int64 **); // rbx
  int v5; // eax
  __int64 *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned int v14; // eax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
  v5 = v4((struct IInputTarget *)a2, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v17);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v5,
      v15);
    JUMPOUT(0x18002A8CDLL);
  }
  v6 = v17;
  if ( !v17 )
  {
    v14 = wil::verify_hresult<long>(2147549183LL);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)v14,
      v15);
    __debugbreak();
  }
  v7 = (_QWORD *)*((_QWORD *)this + 25);
  v8 = (_QWORD *)*v7;
  while ( 1 )
  {
    v9 = *v6;
    if ( v8 == v7 )
      break;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 24))(v6, v8[3]);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1026LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10,
        v15);
      Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v17);
      return v11;
    }
    v8 = (_QWORD *)*v8;
    v6 = v17;
  }
  v10 = (*(__int64 (**)(void))(v9 + 48))();
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 1030LL;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v17);
  return 0LL;
}
