/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180173448
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180172100 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x180172D70 (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x180172F60 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x1801732B4 (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x180173848 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x180173C0C (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x180173EDC (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x18017436C (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v3; // ecx
  char v4; // r8
  int v5; // ecx
  int v6; // ecx
  char **v7; // r12
  const void *v8; // rsi
  void **v9; // rax
  size_t v10; // rbx
  char *v11; // rdi
  char *v12; // rax
  bool v13; // zf
  int v14; // r15d
  int v15; // edi
  __int64 v16; // rdx
  const void *v17; // rsi
  void **v18; // rax
  size_t v19; // rbx
  char *v20; // rdi
  __int64 *v21; // rdi
  size_t *v22; // rsi
  void *v23; // rcx
  signed __int64 v24; // r13
  unsigned __int64 v25; // rax
  char v26; // al
  __int64 *v27; // rax
  void **v28; // rsi
  __int64 *v29; // rdi
  void *v30; // rcx
  char *v31; // r13
  unsigned __int64 v32; // rax
  char IsComboButtonCandidate; // al
  __int64 v35; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  size_t Size; // [rsp+60h] [rbp+40h] BYREF
  void *Src; // [rsp+68h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)a2 + 68);
  LODWORD(Size) = *((_DWORD *)a2 + 16);
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v4 )
      return 0LL;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
    ButtonRecognizer::FindExactComboButtonMatch(this, &Size, (char *)this + 48);
    if ( Size != **((_QWORD **)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v27 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Size);
      v28 = (void **)((char *)this + 88);
      v29 = v27;
      *((_DWORD *)this + 18) = *(_DWORD *)v27;
      *((_BYTE *)this + 80) = *((_BYTE *)v27 + 8);
      if ( (__int64 *)((char *)this + 88) != v27 + 2 )
      {
        v30 = (void *)v27[2];
        v31 = (char *)*v28;
        Size = v27[3] - (_QWORD)v30;
        v32 = (__int64)(*((_QWORD *)this + 13) - (_QWORD)v31) >> 2;
        Src = v30;
        if ( (__int64)Size >> 2 > v32 )
        {
          std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
          v30 = Src;
          v31 = (char *)*v28;
        }
        memmove_0(v31, v30, Size);
        *((_QWORD *)this + 12) = &v31[Size];
      }
      *((_OWORD *)this + 7) = *(_OWORD *)(v29 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v29 + 7);
      *((_QWORD *)this + 18) = v29[9];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v15 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v15 < 0 )
        {
          v16 = 460LL;
          goto LABEL_43;
        }
        *((_BYTE *)this + 16) = 1;
LABEL_45:
        *((_DWORD *)this + 6) = 3;
        return 0LL;
      }
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_45;
    }
    v35 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v35 + 80LL))(
            v35,
            10000000 * qword_180208AC8,
            0LL);
    if ( v15 < 0 )
    {
      v16 = 468LL;
      goto LABEL_43;
    }
    goto LABEL_50;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = 1;
    *((_BYTE *)this + 17) = 1;
    if ( !v4 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v15 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v15 < 0 )
        {
          v16 = 484LL;
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\li"
                     "b\\buttonrecognizer.cpp",
            (const char *)(unsigned int)v15);
          return (unsigned int)v15;
        }
        *((_BYTE *)this + 16) = 1;
      }
      v17 = (const void *)*((_QWORD *)this + 7);
      v18 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                       &Src,
                       *((_DWORD **)this + 6),
                       (unsigned __int64)v17,
                       &Size);
      v19 = *((_QWORD *)this + 7) - (_QWORD)v17;
      v20 = (char *)*v18;
      memmove_0(*v18, v17, v19);
      *((_QWORD *)this + 7) = &v20[v19];
      v13 = *((_QWORD *)this + 6) == (_QWORD)&v20[v19];
LABEL_14:
      if ( !v13 )
        v14 = 3;
      goto LABEL_51;
    }
    *((_BYTE *)this + 18) = 0;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
    ButtonRecognizer::FindExactComboButtonMatch(this, &Size, (char *)this + 48);
    if ( Size != **((_QWORD **)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v21 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Size);
      v22 = (size_t *)((char *)this + 88);
      *((_DWORD *)this + 18) = *(_DWORD *)v21;
      *((_BYTE *)this + 80) = *((_BYTE *)v21 + 8);
      if ( (__int64 *)((char *)this + 88) != v21 + 2 )
      {
        v23 = (void *)*v22;
        v24 = v21[3] - v21[2];
        Src = (void *)v21[2];
        v25 = (__int64)(*((_QWORD *)this + 13) - (_QWORD)v23) >> 2;
        Size = (size_t)v23;
        if ( v24 >> 2 > v25 )
        {
          std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
          v23 = (void *)*v22;
          Size = *v22;
        }
        memmove_0(v23, Src, v24);
        *((_QWORD *)this + 12) = v24 + Size;
      }
      *((_OWORD *)this + 7) = *(_OWORD *)(v21 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v21 + 7);
      *((_QWORD *)this + 18) = v21[9];
    }
    v26 = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !v26 )
      {
        v15 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v15 < 0 )
        {
          v16 = 509LL;
          goto LABEL_43;
        }
        *((_BYTE *)this + 16) = 1;
        goto LABEL_28;
      }
    }
    else if ( !v26 )
    {
LABEL_28:
      v14 = 3;
LABEL_51:
      *((_DWORD *)this + 6) = v14;
      return 0LL;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
            *((_QWORD *)this + 19),
            10000000 * qword_180208AC8,
            0LL);
    if ( v15 < 0 )
    {
      v16 = 515LL;
      goto LABEL_43;
    }
LABEL_50:
    v14 = 2;
    goto LABEL_51;
  }
  if ( v6 == 1 )
  {
    v7 = (char **)((char *)this + 48);
    if ( v4 )
    {
      std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
      v12 = (char *)*((_QWORD *)this + 7);
    }
    else
    {
      v8 = (const void *)*((_QWORD *)this + 7);
      v9 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                      &Src,
                      *v7,
                      (unsigned __int64)v8,
                      &Size);
      v10 = *((_QWORD *)this + 7) - (_QWORD)v8;
      v11 = (char *)*v9;
      memmove_0(*v9, v8, v10);
      v12 = &v11[v10];
      *((_QWORD *)this + 7) = &v11[v10];
    }
    v13 = *v7 == v12;
    v14 = 1;
    goto LABEL_14;
  }
  return 0LL;
}
