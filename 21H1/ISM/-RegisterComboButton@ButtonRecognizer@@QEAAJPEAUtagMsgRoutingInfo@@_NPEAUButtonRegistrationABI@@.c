/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x18017403C
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x180174320 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180026144 (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172C6C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180172D9C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180172D9C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x180172E58 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x180172F60 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x180173DFC (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x18017436C (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x180174404 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        char a3,
        struct ButtonRegistrationABI *a4)
{
  int *v7; // rdi
  void *v8; // rbx
  char *v9; // rsi
  signed __int64 v10; // rbx
  _QWORD **v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // ecx
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  void **v16; // rdi
  __int64 v17; // rsi
  void *v18; // r15
  char *v19; // r14
  size_t v20; // rsi
  int v21; // eax
  unsigned int v22; // ebx
  char v24; // [rsp+30h] [rbp-89h]
  unsigned int v25; // [rsp+34h] [rbp-85h] BYREF
  int v26[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  void *v28[2]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v29; // [rsp+58h] [rbp-61h]
  _DWORD Src[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v31[8]; // [rsp+80h] [rbp-39h] BYREF
  void *v32; // [rsp+88h] [rbp-31h] BYREF
  __int128 v33; // [rsp+90h] [rbp-29h]
  __int128 v34; // [rsp+A0h] [rbp-19h]
  __int128 v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  Src[0] = *(_DWORD *)a4;
  Src[1] = *((_DWORD *)a4 + 1);
  Src[2] = *((_DWORD *)a4 + 2);
  Src[3] = *((_DWORD *)a4 + 3);
  Src[4] = *((_DWORD *)a4 + 4);
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  std::vector<std::pair<unsigned short,bool>>::_Buy_raw(v28, 5uLL);
  v7 = (int *)v28[0];
  memmove_0(v28[0], Src, 0x14uLL);
  v26[0] = 240;
  v8 = (void *)*std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                  &v27,
                  v7,
                  (unsigned __int64)(v7 + 5),
                  v26);
  v28[1] = v8;
  if ( !a3 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>(v7, (int *)v8, ((_BYTE *)v8 - (_BYTE *)v7) >> 2, v24);
  v9 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31[0] = a3;
  v10 = (_BYTE *)v8 - (_BYTE *)v7;
  if ( v10 >> 2 )
  {
    std::vector<enum _Button>::_Clear_and_reserve_geometric(&v32);
    v9 = (char *)v32;
  }
  memmove_0(v9, v7, v10);
  *(_QWORD *)&v33 = &v9[v10];
  v34 = *(_OWORD *)a2;
  v35 = *((_OWORD *)a2 + 1);
  v36 = *((_QWORD *)a2 + 4);
  v11 = (_QWORD **)((char *)this + 32);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    v26,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v31);
  if ( *(_QWORD *)v26 == *((_QWORD *)this + 4) )
  {
    v13 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v13 + 1;
  }
  else
  {
    v13 = *(_DWORD *)(*(_QWORD *)v26 + 32LL);
  }
  v25 = v13;
  if ( *((_QWORD *)this + 5) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
      (char *)this + 32,
      &v27,
      **v11);
    v13 = v25;
  }
  v14 = *v11;
  v15 = (__int64 *)(*v11)[1];
  if ( *((_BYTE *)v15 + 25) )
    goto LABEL_17;
  do
  {
    if ( *((_DWORD *)v15 + 8) >= v13 )
    {
      v14 = v15;
      v15 = (__int64 *)*v15;
    }
    else
    {
      v15 = (__int64 *)v15[2];
    }
  }
  while ( !*((_BYTE *)v15 + 25) );
  if ( v14 == *v11 || v13 < *((_DWORD *)v14 + 8) )
  {
LABEL_17:
    *(_QWORD *)v26 = &v25;
    v14 = (_QWORD *)*std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                       (__int64 *)this + 4,
                       &v27,
                       v14,
                       v12,
                       (_DWORD **)v26);
  }
  *((_BYTE *)v14 + 40) = v31[0];
  v16 = (void **)(v14 + 6);
  if ( v14 + 6 != &v32 )
  {
    v17 = v33;
    v18 = v32;
    v19 = (char *)*v16;
    if ( (__int64)(v33 - (_QWORD)v32) >> 2 > (unsigned __int64)((__int64)(v14[8] - v14[6]) >> 2) )
    {
      std::vector<enum _Button>::_Clear_and_reserve_geometric(v14 + 6);
      v19 = (char *)*v16;
    }
    v20 = v17 - (_QWORD)v18;
    memmove_0(v19, v18, v20);
    v14[7] = &v19[v20];
  }
  *(_OWORD *)(v14 + 9) = v34;
  *(_OWORD *)(v14 + 11) = v35;
  v14[13] = v36;
  v21 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v25, a2);
  v22 = v21;
  if ( v21 >= 0 )
    v22 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v21);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v32);
  std::vector<Windows::UI::Color>::_Tidy((__int64)v28);
  return v22;
}
