/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803E8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E7CF8 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E87D4 (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18044D8F8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18045CAB0 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r12
  CAppLayoutOperation *v7; // r15
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  const struct _GUID *v15; // r8
  int AdjacentItem; // eax
  int v17; // ebx
  int v18; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v19; // rdx
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // ebx
  int ViewFullScreen; // eax
  void *v26; // [rsp+30h] [rbp-59h] BYREF
  struct IAppLayoutItem *v27; // [rsp+38h] [rbp-51h] BYREF
  int v28; // [rsp+40h] [rbp-49h]
  __int64 v29; // [rsp+48h] [rbp-41h] BYREF
  int v30; // [rsp+50h] [rbp-39h]
  __int128 v31; // [rsp+58h] [rbp-31h] BYREF
  __int128 v32; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v33[10]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = (TabletModePositionerOperation *)((char *)this - 176);
  v30 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v7 = (TabletModePositionerOperation *)((char *)this - 152);
  v28 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v8 = v28;
  v9 = CAppLayoutOperation::_VerifyAndPrepareLayout(v7, 0LL, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_22;
  }
  v27 = 0LL;
  v11 = *((_QWORD *)this - 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  v12 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v11 + 152LL))(
          v11,
          a2,
          &v27,
          0LL);
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v29 = 0LL;
      v14 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v27, &v29);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v14);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        goto LABEL_21;
      }
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v3, v27, v15, &v26);
      v10 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x113,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), v33);
      v17 = v33[0];
      v18 = v33[2];
      v20 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v33, v19);
      v21 = v18 - v17;
      v22 = (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD))(*(_QWORD *)v26 + 72LL))(
              v26,
              v33,
              (unsigned int)(v21 - v20));
      v23 = v30;
      if ( v20 + v30 + v22 > v21 )
      {
        ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen((char *)this - 152, a2, 5LL);
        v10 = ViewFullScreen;
        if ( ViewFullScreen < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12C,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
            (const char *)(unsigned int)ViewFullScreen);
          v8 = v28;
          goto LABEL_18;
        }
      }
      else
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v27 + 56LL))(v27, 0LL, &v31);
        DWORD2(v31) = v23 + v31;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v29 + 104LL))(v29, 0LL, &v31);
        v32 = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v26 + 104LL))(v26, 0LL, &v32);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      v8 = v28;
    }
    *((_DWORD *)this - 18) = 1;
    v12 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 0LL);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v10 = 0;
      goto LABEL_21;
    }
    v13 = 305LL;
    goto LABEL_15;
  }
  v13 = 264LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v12);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
LABEL_22:
  if ( v8 >= 0 )
    LeaveCriticalSection(v6);
  return v10;
}
