/*
 * XREFs of ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A6D0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800F3CB0 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnActivationControllerChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  InputSiteElementProxy *v6; // r12
  InputSiteElementProxy **v7; // r13
  __int64 v8; // r15
  InputSiteElementProxy **v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  InputSiteElementProxy *v17; // rbp
  InputSiteElementProxy *v18; // rsi
  int (__fastcall *v19)(InputSiteElementProxy *, GUID *, __int64 *); // rdi
  bool v20; // al
  __int64 *v21; // rdx
  InputSiteElementProxy *v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  InputSiteElementProxy *v26; // [rsp+78h] [rbp+10h]
  char v27; // [rsp+80h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 28);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x58,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v6 = this;
  v26 = this;
  v25 = 0LL;
  v7 = *(InputSiteElementProxy ***)(v5 + 408);
  v8 = v5 + 400;
  v9 = *(InputSiteElementProxy ***)(v5 + 400);
  if ( v9 != v7 )
  {
    while ( 1 )
    {
      v17 = *v9;
      v18 = v9[1];
      v19 = **(int (__fastcall ***)(InputSiteElementProxy *, GUID *, __int64 *))v18;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
      v20 = v19(v18, &GUID_4739ef9b_2c9a_a4ae_1c5a_9cb0b6854bfe, &v25) >= 0;
      if ( v17 == v6 && v20 )
        break;
      v9 += 2;
      if ( v9 == v7 )
        break;
      v6 = v26;
    }
  }
  if ( v9 != *(InputSiteElementProxy ***)(v8 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v8, &v27, v9);
  v10 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 28);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  if ( v12 )
  {
    v13 = v11 + 400;
    v22 = this;
    v14 = v12 + 8;
    v23 = v12 + 8;
    if ( v12 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v12 + 8);
    v15 = *(_QWORD **)(v13 + 8);
    if ( *(_QWORD **)(v13 + 16) == v15 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v13,
        v15,
        &v22);
      v14 = v23;
    }
    else
    {
      *v15 = this;
      v21 = v15 + 1;
      *v21 = 0LL;
      if ( v21 != &v23 )
      {
        *v21 = v14;
        v14 = 0LL;
      }
      *(_QWORD *)(v13 + 8) += 16LL;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
