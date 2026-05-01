/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180369E1C
 * Callers:
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180368A90 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18036AA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180196E9C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1802561B4 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180367814 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180367AEC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180367AEC.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180367B94 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180367B94.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  __int64 v4; // r9
  __m128 v5; // xmm5
  __m128i v6; // xmm0
  __m128 v7; // xmm4
  __int64 *v8; // r9
  float v9; // xmm3_4
  float v10; // xmm11_4
  float v11; // xmm12_4
  __int64 *v12; // rax
  float v13; // xmm2_4
  __int64 *v14; // rcx
  __int64 **v15; // rax
  float v16; // xmm10_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rcx
  float v24; // xmm6_4
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int v36; // r10d
  __int64 v37; // rax
  __int64 v38; // rcx
  const WCHAR *v39; // r8
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  const WCHAR *v44; // r8
  unsigned int v45; // eax
  unsigned int lpData[2]; // [rsp+38h] [rbp-69h] BYREF
  unsigned int *v48; // [rsp+40h] [rbp-61h] BYREF
  __int64 v49; // [rsp+48h] [rbp-59h] BYREF
  float v50; // [rsp+50h] [rbp-51h]
  float v51; // [rsp+54h] [rbp-4Dh]
  int Data; // [rsp+58h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  unsigned int v54; // [rsp+118h] [rbp+77h] BYREF

  v54 = a3;
  v4 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v5 = *(__m128 *)((char *)this + v4 + 232);
  v6 = *(__m128i *)((char *)this + v4 + 264);
  v7 = *(__m128 *)((char *)this + v4 + 248);
  v8 = (__int64 *)((char *)this + 480);
  v9 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
  v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
  v10 = *(float *)a2 - v9;
  v11 = *((float *)a2 + 1) - v5.m128_f32[0];
  v12 = (__int64 *)*((_QWORD *)this + 60);
  v13 = (float)_mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  v14 = (__int64 *)v12[1];
  *(float *)&v49 = (float)(v9 * v13) / 100.0;
  *((float *)&v49 + 1) = (float)(v5.m128_f32[0] * v13) / 100.0;
  v50 = (float)(v7.m128_f32[0] * v13) / 100.0;
  v51 = (float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] * v13) / 100.0;
  if ( *((_BYTE *)v14 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v14 + 7) >= a3 )
    {
      v12 = v14;
      v14 = (__int64 *)*v14;
    }
    else
    {
      v14 = (__int64 *)v14[2];
    }
  }
  while ( !*((_BYTE *)v14 + 25) );
  if ( v12 == (__int64 *)*v8 || a3 < *((_DWORD *)v12 + 7) )
  {
LABEL_8:
    *(_QWORD *)lpData = &v54;
    v15 = (__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                        v8,
                        &v48,
                        v12,
                        (__int64)v8,
                        (_DWORD **)lpData);
    a3 = v54;
    v12 = *v15;
  }
  v16 = *((float *)v12 + 9);
  if ( v50 < *((float *)v12 + 8) || (v17 = v51, v51 < v16) )
  {
    v19 = (__int64 *)((char *)this + 464);
    v31 = (__int64 *)*((_QWORD *)this + 58);
    v32 = (__int64 *)v31[1];
    if ( *((_BYTE *)v32 + 25) )
      goto LABEL_69;
    do
    {
      if ( *((_DWORD *)v32 + 7) >= a3 )
      {
        v31 = v32;
        v32 = (__int64 *)*v32;
      }
      else
      {
        v32 = (__int64 *)v32[2];
      }
    }
    while ( !*((_BYTE *)v32 + 25) );
    if ( v31 == (__int64 *)*v19 || a3 < *((_DWORD *)v31 + 7) )
    {
LABEL_69:
      *(_QWORD *)lpData = &v54;
      v31 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                          (__int64 *)this + 58,
                          &v48,
                          v31,
                          (__int64)v8,
                          (_DWORD **)lpData);
    }
    *((_BYTE *)v31 + 40) = 0;
  }
  else
  {
    if ( v50 <= *((float *)v12 + 8) )
    {
      v19 = (__int64 *)((char *)this + 464);
      v22 = (__int64 *)*((_QWORD *)this + 58);
      v23 = (__int64 *)v22[1];
      if ( *((_BYTE *)v23 + 25) )
        goto LABEL_30;
      do
      {
        if ( *((_DWORD *)v23 + 7) >= a3 )
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
      if ( v22 == (__int64 *)*v19 || a3 < *((_DWORD *)v22 + 7) )
      {
LABEL_30:
        *(_QWORD *)lpData = &v54;
        v22 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            (__int64 *)this + 58,
                            &v48,
                            v22,
                            (__int64)v8,
                            (_DWORD **)lpData);
      }
      *((_DWORD *)v22 + 8) = 0;
    }
    else
    {
      v18 = fmaxf(0.0, v10 / (float)(v50 - *((float *)v12 + 8)));
      if ( v18 >= 1.0 )
        v18 = FLOAT_1_0;
      v19 = (__int64 *)((char *)this + 464);
      v20 = (__int64 *)*((_QWORD *)this + 58);
      v21 = (__int64 *)v20[1];
      if ( *((_BYTE *)v21 + 25) )
        goto LABEL_21;
      do
      {
        if ( *((_DWORD *)v21 + 7) >= a3 )
        {
          v20 = v21;
          v21 = (__int64 *)*v21;
        }
        else
        {
          v21 = (__int64 *)v21[2];
        }
      }
      while ( !*((_BYTE *)v21 + 25) );
      if ( v20 == (__int64 *)*v19 || a3 < *((_DWORD *)v20 + 7) )
      {
LABEL_21:
        *(_QWORD *)lpData = &v54;
        v20 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            (__int64 *)this + 58,
                            &v48,
                            v20,
                            (__int64)v8,
                            (_DWORD **)lpData);
      }
      *((float *)v20 + 8) = v18;
    }
    if ( v17 <= v16 )
    {
      v27 = *v19;
      v28 = *(_QWORD *)(*v19 + 8);
      if ( *(_BYTE *)(v28 + 25) )
        goto LABEL_51;
      do
      {
        if ( *(_DWORD *)(v28 + 28) >= v54 )
        {
          v27 = v28;
          v28 = *(_QWORD *)v28;
        }
        else
        {
          v28 = *(_QWORD *)(v28 + 16);
        }
      }
      while ( !*(_BYTE *)(v28 + 25) );
      if ( v27 == *v19 || v54 < *(_DWORD *)(v27 + 28) )
      {
LABEL_51:
        *(_QWORD *)lpData = &v54;
        v27 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                 v19,
                 &v48,
                 (__int64 *)v27,
                 (__int64)v8,
                 (_DWORD **)lpData);
      }
      *(_DWORD *)(v27 + 36) = 0;
    }
    else
    {
      v24 = fmaxf(0.0, v11 / (float)(v17 - v16));
      if ( v24 >= 1.0 )
        v24 = FLOAT_1_0;
      v25 = *v19;
      v26 = *(_QWORD *)(*v19 + 8);
      if ( *(_BYTE *)(v26 + 25) )
        goto LABEL_42;
      do
      {
        if ( *(_DWORD *)(v26 + 28) >= v54 )
        {
          v25 = v26;
          v26 = *(_QWORD *)v26;
        }
        else
        {
          v26 = *(_QWORD *)(v26 + 16);
        }
      }
      while ( !*(_BYTE *)(v26 + 25) );
      if ( v25 == *v19 || v54 < *(_DWORD *)(v25 + 28) )
      {
LABEL_42:
        *(_QWORD *)lpData = &v54;
        v25 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                 v19,
                 &v48,
                 (__int64 *)v25,
                 (__int64)v8,
                 (_DWORD **)lpData);
      }
      *(float *)(v25 + 36) = v24;
    }
    v29 = *v19;
    v30 = *(_QWORD *)(*v19 + 8);
    if ( *(_BYTE *)(v30 + 25) )
      goto LABEL_60;
    do
    {
      if ( *(_DWORD *)(v30 + 28) >= v54 )
      {
        v29 = v30;
        v30 = *(_QWORD *)v30;
      }
      else
      {
        v30 = *(_QWORD *)(v30 + 16);
      }
    }
    while ( !*(_BYTE *)(v30 + 25) );
    if ( v29 == *v19 || v54 < *(_DWORD *)(v29 + 28) )
    {
LABEL_60:
      *(_QWORD *)lpData = &v54;
      v29 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               v19,
               &v48,
               (__int64 *)v29,
               (__int64)v8,
               (_DWORD **)lpData);
    }
    *(_BYTE *)(v29 + 40) = 1;
  }
  v33 = *v19;
  v34 = *(_QWORD *)(*v19 + 8);
  if ( *(_BYTE *)(v34 + 25) )
    goto LABEL_78;
  do
  {
    if ( *(_DWORD *)(v34 + 28) >= v54 )
    {
      v33 = v34;
      v34 = *(_QWORD *)v34;
    }
    else
    {
      v34 = *(_QWORD *)(v34 + 16);
    }
  }
  while ( !*(_BYTE *)(v34 + 25) );
  if ( v33 == *v19 || v54 < *(_DWORD *)(v33 + 28) )
  {
LABEL_78:
    *(_QWORD *)lpData = &v54;
    v33 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
             v19,
             &v48,
             (__int64 *)v33,
             (__int64)v8,
             (_DWORD **)lpData);
  }
  if ( *(_BYTE *)(v33 + 40)
    && *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
          (__int64 **)this + 9,
          (__int64 **)&v48,
          &v54) != *((__int64 **)this + 9)
    && *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
          (__int64 **)this + 11,
          (__int64 **)&v48,
          &v54) != *((__int64 **)this + 11) )
  {
    v37 = *v19;
    v38 = *(_QWORD *)(*v19 + 8);
    if ( *(_BYTE *)(v38 + 25) )
      goto LABEL_89;
    do
    {
      if ( *(_DWORD *)(v38 + 28) >= v36 )
      {
        v37 = v38;
        v38 = *(_QWORD *)v38;
      }
      else
      {
        v38 = *(_QWORD *)(v38 + 16);
      }
    }
    while ( !*(_BYTE *)(v38 + 25) );
    if ( v37 == *v19 || v36 < *(_DWORD *)(v37 + 28) )
    {
LABEL_89:
      v48 = &v54;
      v37 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               v19,
               &v49,
               (__int64 *)v37,
               v35,
               &v48);
    }
    Data = (int)(float)((float)*((int *)this + 27) * *(float *)(v37 + 32));
    std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((__int64 **)this + 9, (__int64)&v49, &v54);
    v39 = (const WCHAR *)(v49 + 40);
    if ( *(_QWORD *)(v49 + 64) >= 8uLL )
      v39 = *(const WCHAR **)v39;
    v40 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v39, 4u, &Data, 4u);
    if ( v40 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1106LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v40);
    v42 = *v19;
    v43 = *(_QWORD *)(*v19 + 8);
    if ( *(_BYTE *)(v43 + 25) )
      goto LABEL_101;
    do
    {
      if ( *(_DWORD *)(v43 + 28) >= v54 )
      {
        v42 = v43;
        v43 = *(_QWORD *)v43;
      }
      else
      {
        v43 = *(_QWORD *)(v43 + 16);
      }
    }
    while ( !*(_BYTE *)(v43 + 25) );
    if ( v42 == *v19 || v54 < *(_DWORD *)(v42 + 28) )
    {
LABEL_101:
      v48 = &v54;
      v42 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               v19,
               &v49,
               (__int64 *)v42,
               v41,
               &v48);
    }
    lpData[0] = (int)(float)((float)*((int *)this + 27) * *(float *)(v42 + 36));
    std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((__int64 **)this + 11, (__int64)&v49, &v54);
    v44 = (const WCHAR *)(v49 + 40);
    if ( *(_QWORD *)(v49 + 64) >= 8uLL )
      v44 = *(const WCHAR **)v44;
    v45 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v44, 4u, lpData, 4u);
    if ( v45 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1109LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v45);
  }
  return 0LL;
}
