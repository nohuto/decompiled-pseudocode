/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001C4F4
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001A660 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18001CDA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x180083E04 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801B00F8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
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
  LONG right; // r14d
  int v11; // r13d
  int v12; // eax
  HRGN v13; // rbx
  HRGN v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  HRGN v18; // rax
  int v19; // r13d
  int v20; // eax
  int v21; // eax
  CortanaFlightingHelpers *v22; // rcx
  LANGID ThreadUILanguage; // ax
  int v24; // r14d
  LANGID v25; // ax
  SearchAppDesktopExperienceView *v26; // rcx
  int v27; // r8d
  int v28; // eax
  HRGN RectRgnIndirect; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  HRGN RectRgn; // rax
  int v33; // [rsp+20h] [rbp-68h]
  HGDIOBJ ho; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+38h] [rbp-50h]
  struct tagRECT *v36; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v36 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  right = a2->right;
  v11 = right - a2->left;
  v12 = a2->bottom - a2->top;
  v35 = v12;
  v13 = 0LL;
  ho = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgnIndirect);
    v13 = (HRGN)ho;
    if ( !ho )
    {
      v31 = 1447LL;
      goto LABEL_41;
    }
    v12 = v35;
  }
  if ( !a6 )
  {
    if ( !a7 )
      goto LABEL_9;
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgn);
    v13 = (HRGN)ho;
    if ( ho )
      goto LABEL_9;
    v31 = 1497LL;
    goto LABEL_41;
  }
  if ( !a7 )
  {
    if ( v9
      || (v18 = CreateRectRgn(0, 0, v11, v12),
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
            &ho,
            v18),
          (v13 = (HRGN)ho) != 0LL) )
    {
      v19 = v36->bottom - a2->top;
      v20 = v36->right - a2->left;
      v35 = v36->top - a2->top;
      v21 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)(unsigned int)v35,
              v13,
              v36->left - a2->left,
              v35,
              v20,
              v19);
      v16 = v21;
      if ( v21 < 0 )
      {
        v30 = (unsigned int)v21;
        v31 = 1475LL;
      }
      else
      {
        if ( *((_DWORD *)this + 31) != 1
          && (!*((_BYTE *)this + 213) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(v22) || *((_DWORD *)this + 31))
          || *((_DWORD *)this + 32) == 6 )
        {
          goto LABEL_9;
        }
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v24 = right - a2->left;
        v25 = GetThreadUILanguage();
        v27 = (unsigned int)IsBiDiLocale(v25) ? 0 : a5->right - a2->left;
        v28 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v26, v13, v27, v35, v24, v19);
        v16 = v28;
        if ( v28 >= 0 )
          goto LABEL_9;
        v30 = (unsigned int)v28;
        v31 = 1486LL;
      }
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v30,
        v33);
      goto LABEL_12;
    }
    v31 = 1467LL;
LABEL_41:
    v16 = -2147467259;
    v30 = 2147500037LL;
    goto LABEL_42;
  }
  v14 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    &ho,
    v14);
  v13 = (HRGN)ho;
  if ( !ho )
  {
    v31 = 1460LL;
    goto LABEL_41;
  }
LABEL_9:
  LOBYTE(a3) = 1;
  v15 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 19) + 144LL))(
          *((_QWORD *)this + 19),
          v13,
          a3);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5DD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v15,
      v33);
  v16 = 0;
LABEL_12:
  if ( v13 )
    DeleteObject(v13);
  return v16;
}
