/*
 * XREFs of ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x180138AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800A0958 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver *v2; // r14
  char *v4; // rcx
  _BYTE *v5; // rdx
  _QWORD *v6; // r15
  _QWORD *i; // rbx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  struct ISupportedInputUpdateObserver *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v2 = a2;
  v4 = (char *)this + 576;
  v5 = (_BYTE *)*((_QWORD *)v4 + 1);
  if ( *((_BYTE **)v4 + 2) == v5 )
  {
    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((const void **)v4, v5, &v14);
    v2 = v14;
  }
  else
  {
    *(_QWORD *)v5 = v2;
    *((_QWORD *)v4 + 1) += 8LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v13 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))i[7];
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
    if ( v9(v8, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v13) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ISupportedInputUpdateObserver *, __int64))(*(_QWORD *)v2 + 24LL))(v2, v13);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2229LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v10);
        return 0LL;
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  }
  return 0LL;
}
