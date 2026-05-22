/*
 * XREFs of ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A230
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A440 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIActivationConfigurationInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationConfigurationInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1DA4 (--$As@UIActivationConfigurationInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800F3BC0 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnActivationConfigurationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  InputSiteElementProxy *v6; // rbp
  InputSiteElementProxy **v7; // r15
  __int64 v8; // r14
  InputSiteElementProxy **v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  InputSiteElementProxy *v16; // rdi
  bool v17; // al
  __int64 *v18; // rdx
  InputSiteElementProxy *v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  InputSiteElementProxy *v23; // [rsp+68h] [rbp+10h]
  char v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 28);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v6 = this;
  v23 = this;
  v22 = 0LL;
  v7 = *(InputSiteElementProxy ***)(v5 + 408);
  v8 = v5 + 400;
  v9 = *(InputSiteElementProxy ***)(v5 + 400);
  if ( v9 != v7 )
  {
    while ( 1 )
    {
      v16 = *v9;
      v17 = (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationConfigurationInputObjectProxy>(v9 + 1, &v22) >= 0;
      if ( v16 == v6 && v17 )
        break;
      v9 += 2;
      if ( v9 == v7 )
        break;
      v6 = v23;
    }
  }
  if ( v9 != *(InputSiteElementProxy ***)(v8 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v8, &v24, v9);
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 28);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  if ( v12 )
  {
    v19 = this;
    v14 = v12 + 8;
    v20 = v12 + 8;
    if ( v12 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v12 + 8);
    v15 = *(_QWORD **)(v11 + 408);
    if ( *(_QWORD **)(v11 + 416) == v15 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v11 + 400,
        v15,
        &v19);
      v14 = v20;
    }
    else
    {
      *v15 = this;
      v18 = v15 + 1;
      *v18 = 0LL;
      if ( v18 != &v20 )
      {
        *v18 = v14;
        v14 = 0LL;
      }
      *(_QWORD *)(v11 + 408) += 16LL;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
