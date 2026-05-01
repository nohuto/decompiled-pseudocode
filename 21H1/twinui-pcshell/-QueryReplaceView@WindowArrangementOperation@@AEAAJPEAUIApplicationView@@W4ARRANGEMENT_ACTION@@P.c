/*
 * XREFs of ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803E693C
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803E6768 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18037B468 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18045B0BC (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

__int64 __fastcall WindowArrangementOperation::QueryReplaceView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v4; // rbx
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+40h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64, bool, GUID *, __int64 *))(*(_QWORD *)v4 + 96LL))(
                              v4,
                              a3 != 3,
                              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                              v16);
  v10 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags >= 0 )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v19);
    v10 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 228LL;
      goto LABEL_5;
    }
    v18 = 0LL;
    v12 = v16[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v13 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v12 + 48LL))(
            v12,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v18);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              v18,
              a2,
              v19);
      v10 = v13;
      if ( v13 >= 0 )
      {
        CAppLayoutOperation::_AddAnimationData(a1 + 24, v18, 1LL);
        *a4 |= 4u;
        v10 = 0;
        goto LABEL_12;
      }
      v14 = 232LL;
    }
    else
    {
      v14 = 231LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)v13);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_13;
  }
  v11 = 224LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)ViewLayoutBehaviorFlags);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  return v10;
}
