/*
 * XREFs of ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x180058918
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180058038 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18036A190 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18036722C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_18036722C.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18036736C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_18036736C.c)
 */

LSTATUS __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        __int64 a3,
        int a4)
{
  char *v4; // rbx
  __int64 *v5; // rax
  __int64 *v7; // r8
  __int64 **v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rcx
  __int64 *v13; // rax
  LSTATUS result; // eax
  __int64 **v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  const WCHAR *v18; // r8
  bool v19; // cc
  int v20; // eax
  char *v21; // r9
  __int64 *v22; // rax
  __int64 *v23; // rcx
  const WCHAR *v24; // r8
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  float v28; // xmm0_4
  __int64 *v29; // rax
  __int64 *v30; // rcx
  float v31; // xmm6_4
  __int64 *v32; // rax
  __int64 *v33; // rcx
  float v34; // xmm6_4
  __int64 *v35; // rax
  __int64 *v36; // rcx
  DWORD v37; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v38; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v39[16]; // [rsp+50h] [rbp-28h] BYREF
  int pvData; // [rsp+A0h] [rbp+28h] BYREF
  unsigned int v41; // [rsp+A8h] [rbp+30h] BYREF
  int v42; // [rsp+B0h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+B8h] [rbp+40h] BYREF

  v41 = a2;
  v4 = (char *)this + 464;
  v5 = (__int64 *)*((_QWORD *)this + 58);
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_17;
  do
  {
    if ( *((_DWORD *)v7 + 7) < a2 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v5 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v5 == *(__int64 **)v4 || a2 < *((_DWORD *)v5 + 7) )
  {
LABEL_17:
    v38 = &v41;
    v15 = (__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                        (int)this + 464,
                        (unsigned int)v39,
                        (_DWORD)v5,
                        a4,
                        (__int64)&v38);
    a2 = v41;
    v5 = *v15;
  }
  if ( *((_BYTE *)v5 + 40) )
    return 0;
  v8 = (__int64 **)((char *)this + 72);
  v9 = (__int64 *)*((_QWORD *)this + 9);
  v10 = (__int64 *)v9[1];
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_9;
  do
  {
    if ( *((_DWORD *)v10 + 8) >= a2 )
    {
      v9 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v9 == *v8 || a2 < *((_DWORD *)v9 + 8) )
LABEL_9:
    v9 = *v8;
  if ( v9 == *v8 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 11);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    if ( *((_BYTE *)v13 + 25) )
      goto LABEL_12;
    do
    {
      if ( *((_DWORD *)v13 + 8) >= a2 )
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    while ( !*((_BYTE *)v13 + 25) );
    if ( v12 == v11 || a2 < *((_DWORD *)v12 + 8) )
LABEL_12:
      v12 = (__int64 *)*((_QWORD *)this + 11);
    if ( v12 == v11 )
      return 0;
  }
  v16 = *v8;
  pcbData = 4;
  v17 = (__int64 *)v16[1];
  if ( *((_BYTE *)v17 + 25) )
    goto LABEL_39;
  do
  {
    if ( *((_DWORD *)v17 + 8) >= a2 )
    {
      v16 = v17;
      v17 = (__int64 *)*v17;
    }
    else
    {
      v17 = (__int64 *)v17[2];
    }
  }
  while ( !*((_BYTE *)v17 + 25) );
  if ( v16 == *v8 || a2 < *((_DWORD *)v16 + 8) )
  {
LABEL_39:
    v38 = &v41;
    v16 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                         (int)this + 72,
                         (unsigned int)v39,
                         (_DWORD)v16,
                         (_DWORD)v8,
                         (__int64)&v38);
  }
  v18 = (const WCHAR *)(v16 + 5);
  if ( (unsigned __int64)v16[8] >= 8 )
    v18 = *(const WCHAR **)v18;
  result = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v18, 0x10u, 0LL, &pvData, &pcbData);
  v19 = result <= 0;
  if ( !result )
  {
    v20 = pvData;
    v21 = (char *)this + 88;
    v19 = (unsigned int)pvData <= *((_DWORD *)this + 27);
    v37 = 4;
    if ( !v19 )
      v20 = *((_DWORD *)this + 27);
    pvData = v20;
    v22 = *(__int64 **)v21;
    v23 = *(__int64 **)(*(_QWORD *)v21 + 8LL);
    if ( *((_BYTE *)v23 + 25) )
      goto LABEL_54;
    do
    {
      if ( *((_DWORD *)v23 + 8) >= v41 )
      {
        v22 = v23;
        v23 = (__int64 *)*v23;
      }
      else
      {
        v23 = (__int64 *)v23[2];
      }
    }
    while ( !*((_BYTE *)v23 + 25) );
    if ( v22 == *(__int64 **)v21 || v41 < *((_DWORD *)v22 + 8) )
    {
LABEL_54:
      v38 = &v41;
      v22 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                           (int)this + 88,
                           (unsigned int)v39,
                           (_DWORD)v22,
                           (_DWORD)v21,
                           (__int64)&v38);
    }
    v24 = (const WCHAR *)(v22 + 5);
    if ( (unsigned __int64)v22[8] >= 8 )
      v24 = *(const WCHAR **)v24;
    result = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v24, 0x10u, 0LL, &v42, &v37);
    v19 = result <= 0;
    if ( !result )
    {
      v26 = *((_DWORD *)this + 27);
      v27 = v42;
      if ( v42 > (unsigned int)v26 )
        v27 = *((_DWORD *)this + 27);
      v42 = v27;
      v28 = (float)v26;
      v29 = *(__int64 **)v4;
      v30 = *(__int64 **)(*(_QWORD *)v4 + 8LL);
      v31 = (float)pvData / v28;
      if ( *((_BYTE *)v30 + 25) )
        goto LABEL_67;
      do
      {
        if ( *((_DWORD *)v30 + 7) >= v41 )
        {
          v29 = v30;
          v30 = (__int64 *)*v30;
        }
        else
        {
          v30 = (__int64 *)v30[2];
        }
      }
      while ( !*((_BYTE *)v30 + 25) );
      if ( v29 == *(__int64 **)v4 || v41 < *((_DWORD *)v29 + 7) )
      {
LABEL_67:
        v38 = &v41;
        v29 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                             (_DWORD)v4,
                             (unsigned int)v39,
                             (_DWORD)v29,
                             v25,
                             (__int64)&v38);
      }
      *((float *)v29 + 8) = v31;
      v32 = *(__int64 **)v4;
      v33 = *(__int64 **)(*(_QWORD *)v4 + 8LL);
      v34 = (float)v42 / (float)*((int *)this + 27);
      if ( *((_BYTE *)v33 + 25) )
        goto LABEL_75;
      do
      {
        if ( *((_DWORD *)v33 + 7) >= v41 )
        {
          v32 = v33;
          v33 = (__int64 *)*v33;
        }
        else
        {
          v33 = (__int64 *)v33[2];
        }
      }
      while ( !*((_BYTE *)v33 + 25) );
      if ( v32 == *(__int64 **)v4 || v41 < *((_DWORD *)v32 + 7) )
      {
LABEL_75:
        v38 = &v41;
        v32 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                             (_DWORD)v4,
                             (unsigned int)v39,
                             (_DWORD)v32,
                             v25,
                             (__int64)&v38);
      }
      *((float *)v32 + 9) = v34;
      v35 = *(__int64 **)v4;
      v36 = *(__int64 **)(*(_QWORD *)v4 + 8LL);
      if ( *((_BYTE *)v36 + 25) )
        goto LABEL_83;
      do
      {
        if ( *((_DWORD *)v36 + 7) >= v41 )
        {
          v35 = v36;
          v36 = (__int64 *)*v36;
        }
        else
        {
          v36 = (__int64 *)v36[2];
        }
      }
      while ( !*((_BYTE *)v36 + 25) );
      if ( v35 == *(__int64 **)v4 || v41 < *((_DWORD *)v35 + 7) )
      {
LABEL_83:
        v38 = &v41;
        v35 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                             (_DWORD)v4,
                             (unsigned int)v39,
                             (_DWORD)v35,
                             v25,
                             (__int64)&v38);
      }
      *((_BYTE *)v35 + 40) = 1;
      return 0;
    }
  }
  if ( !v19 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
