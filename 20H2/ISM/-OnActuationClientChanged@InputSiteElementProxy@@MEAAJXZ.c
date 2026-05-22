/*
 * XREFs of ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A6D0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800F3760 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnActuationClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  InputSiteElementProxy *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  bool v9; // r14
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // r12
  __int64 v12; // rcx
  bool v13; // al
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rsi
  InputSiteElementProxy **v19; // rdx
  __int64 *v20; // rdx
  InputSiteElementProxy *v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  InputSiteElementProxy *v25; // [rsp+78h] [rbp+10h]
  char v26; // [rsp+80h] [rbp+18h] BYREF

  v4 = this;
  v5 = *((_QWORD *)this + 28);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v25 = this;
  v24 = 0LL;
  v6 = *(_QWORD **)(v5 + 408);
  v7 = v5 + 400;
  v8 = *(_QWORD **)(v5 + 400);
  if ( v8 != v6 )
  {
    while ( 1 )
    {
      v9 = *v8 == (_QWORD)this;
      v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v8[1];
      v11 = **v10;
      v12 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v11(v10, &GUID_4471cf3a_35aa_f774_027a_bb4e36e27700, &v24) >= 0;
      if ( v9 && v13 )
        break;
      v8 += 2;
      if ( v8 == v6 )
        break;
      this = v25;
    }
  }
  if ( v8 != *(_QWORD **)(v7 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v26, v8);
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (__int64 *)*((_QWORD *)v4 + 28);
  v16 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 64LL))((__int64)v4 + 8);
  if ( v16 )
  {
    v21 = v4;
    v18 = v16 + 8;
    v22[0] = v16 + 8;
    if ( v16 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v16 + 8);
    v19 = (InputSiteElementProxy **)v15[51];
    if ( (InputSiteElementProxy **)v15[52] == v19 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v15 + 50,
        v19,
        &v21);
    }
    else
    {
      *v19 = v4;
      v20 = (__int64 *)(v19 + 1);
      *v20 = 0LL;
      if ( v20 != v22 )
      {
        *v20 = v18;
        v22[0] = 0LL;
      }
      v15[51] += 16LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22);
  }
  return 0LL;
}
