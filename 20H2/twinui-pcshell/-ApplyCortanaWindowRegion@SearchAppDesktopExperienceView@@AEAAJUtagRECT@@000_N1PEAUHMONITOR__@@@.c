/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18000FFB8
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800130D0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18000FCC0 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x18000FD48 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800104F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180010730 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSmallIconsMode@@YA_NXZ @ 0x180097230 (-IsSmallIconsMode@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes@@@details@wil@@QEAA_NXZ @ 0x1800A4EC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Sin.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801D34E8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7)
{
  char v9; // di
  LONG right; // esi
  int v11; // eax
  int v12; // ecx
  HRGN v13; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v15; // rdx
  HRGN v16; // rax
  HRGN RectRgn; // rax
  _DWORD *v18; // r8
  SearchAppDesktopExperienceView *v19; // rcx
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // r9
  CortanaFlightingHelpers *v23; // rcx
  SearchAppDesktopExperienceView *v24; // rcx
  int v25; // eax
  int v26; // esi
  SearchAppDesktopExperienceView *v27; // rcx
  int v28; // r8d
  int v29; // eax
  int v30; // esi
  SearchAppDesktopExperienceView *v31; // rcx
  int v32; // r8d
  int v33; // eax
  SearchAppDesktopExperienceView *v34; // rcx
  int v35; // eax
  HRGN v36; // rax
  int v37; // eax
  int v39; // [rsp+20h] [rbp-30h]
  int v40; // [rsp+30h] [rbp-20h]
  int v41; // [rsp+30h] [rbp-20h]
  int v42; // [rsp+34h] [rbp-1Ch]
  LONG v43; // [rsp+34h] [rbp-1Ch]
  HRGN v44; // [rsp+38h] [rbp-18h] BYREF
  int v45[4]; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *(_QWORD *)v45 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  right = a2->right;
  v11 = right - a2->left;
  v42 = v11;
  v12 = a2->bottom - a2->top;
  v40 = v12;
  v13 = 0LL;
  v44 = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v44,
      RectRgnIndirect);
    v13 = v44;
    if ( !v44 )
    {
      v15 = 1661LL;
LABEL_59:
      v21 = -2147467259;
      v22 = 2147500037LL;
      goto LABEL_60;
    }
    v11 = v42;
    v12 = v40;
  }
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( !v9 )
      {
        RectRgn = CreateRectRgn(0, 0, v11, v12);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          &v44,
          RectRgn);
        v13 = v44;
        if ( !v44 )
        {
          v15 = 1681LL;
          goto LABEL_59;
        }
      }
      v18 = *(_DWORD **)v45;
      v45[0] = *(_DWORD *)(*(_QWORD *)v45 + 12LL) - a2->top;
      v43 = v18[2];
      v19 = (SearchAppDesktopExperienceView *)(unsigned int)(v18[1] - a2->top);
      v41 = v18[1] - a2->top;
      v20 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              v19,
              v13,
              *v18 - a2->left,
              (int)v19,
              v43 - a2->left,
              v45[0]);
      v21 = v20;
      if ( v20 >= 0 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes>::GetImpl'::`2'::impl) )
        {
          if ( (*((_DWORD *)this + 31) == 1
             || (*((_BYTE *)this + 214) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v23))
             && !*((_DWORD *)this + 31))
            && *((_DWORD *)this + 32) != 6
            || IsSmallIconsMode() && !*((_BYTE *)this + 214) )
          {
            if ( (unsigned int)Mirror_IsThreadRTL() )
              right = a5->left;
            v26 = right - a2->left;
            if ( (unsigned int)Mirror_IsThreadRTL() )
              v28 = 0;
            else
              v28 = a5->right - a2->left;
            v29 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v27, v13, v28, v41, v26, v45[0]);
            v21 = v29;
            if ( v29 >= 0 )
              goto LABEL_61;
            v22 = (unsigned int)v29;
            v15 = 1704LL;
          }
          else
          {
            if ( *((_DWORD *)this + 31) != 10 )
              goto LABEL_61;
            if ( (unsigned int)Mirror_IsThreadRTL() )
              right = v43;
            v25 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v24, v13, 0, v41, right - a2->left, v45[0]);
            v21 = v25;
            if ( v25 >= 0 )
              goto LABEL_61;
            v22 = (unsigned int)v25;
            v15 = 1712LL;
          }
        }
        else if ( (*((_DWORD *)this + 31) == 1
                || (*((_BYTE *)this + 214) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v23))
                && !*((_DWORD *)this + 31))
               && *((_DWORD *)this + 32) != 6 )
        {
          if ( (unsigned int)Mirror_IsThreadRTL() )
            right = a5->left;
          v30 = right - a2->left;
          if ( (unsigned int)Mirror_IsThreadRTL() )
            v32 = 0;
          else
            v32 = a5->right - a2->left;
          v33 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v31, v13, v32, v41, v30, v45[0]);
          v21 = v33;
          if ( v33 >= 0 )
            goto LABEL_61;
          v22 = (unsigned int)v33;
          v15 = 1726LL;
        }
        else
        {
          if ( *((_DWORD *)this + 31) != 10 )
            goto LABEL_61;
          if ( (unsigned int)Mirror_IsThreadRTL() )
            right = v43;
          v35 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v34, v13, 0, v41, right - a2->left, v45[0]);
          v21 = v35;
          if ( v35 >= 0 )
            goto LABEL_61;
          v22 = (unsigned int)v35;
          v15 = 1734LL;
        }
      }
      else
      {
        v22 = (unsigned int)v20;
        v15 = 1689LL;
      }
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v22,
        v39);
      goto LABEL_64;
    }
    v16 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v44,
      v16);
    v13 = v44;
    if ( !v44 )
    {
      v15 = 1674LL;
      goto LABEL_59;
    }
  }
  else if ( a7 )
  {
    v36 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v44,
      v36);
    v13 = v44;
    if ( !v44 )
    {
      v15 = 1746LL;
      goto LABEL_59;
    }
  }
LABEL_61:
  LOBYTE(a3) = 1;
  v37 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 19) + 144LL))(
          *((_QWORD *)this + 19),
          v13,
          a3);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6D6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v37,
      v39);
  v21 = 0;
LABEL_64:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(&v44);
  return v21;
}
