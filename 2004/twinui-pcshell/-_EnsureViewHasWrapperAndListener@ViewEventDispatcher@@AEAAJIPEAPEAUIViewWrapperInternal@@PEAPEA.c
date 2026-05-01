/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1802AB52C
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802AB818 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1801552D4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029E474 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1802A44CC (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802ABA7C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1802AD8D4 (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1802ADCF8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x1802BDB80 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
        ViewManagerBridge **this,
        unsigned int a2,
        struct IViewWrapperInternal **a3,
        struct IUnknown **a4,
        char *a5)
{
  char v9; // r14
  int AppUserModelIdForView; // eax
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  int MatchingViewEventRegistration; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  struct IUnknown *v17; // r15
  _QWORD *v18; // rsi
  struct IViewWrapperInternal *v19; // rbx
  void *v20; // r8
  __int64 v21; // rdx
  struct MsgString **v22; // rdx
  struct IViewWrapperInternal *v23; // rax
  struct MsgString *v25; // [rsp+30h] [rbp-30h] BYREF
  ViewManagerBridge **v26; // [rsp+38h] [rbp-28h] BYREF
  const unsigned __int16 *Data; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v28[2]; // [rsp+48h] [rbp-18h] BYREF
  char v29; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v31; // [rsp+A8h] [rbp+48h] BYREF
  struct IViewWrapperInternal *v32; // [rsp+B0h] [rbp+50h] BYREF
  struct IUnknown *v33; // [rsp+B8h] [rbp+58h] BYREF

  v31 = a2;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = 0;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v32) < 0 )
  {
    v9 = 1;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                              (ViewEventDispatcher *)this,
                              a2,
                              &v33);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2269LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)AppUserModelIdForView);
      goto LABEL_22;
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[62], v33, &v25);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2272LL;
      goto LABEL_6;
    }
    v28[1] = (struct IUnknown *)&v25;
    v29 = 1;
    v26 = this;
    Data = MsgStringGetData(v25);
    v28[0] = v33;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
            &v32,
            &v31,
            v28,
            &Data,
            L"Windows.Internal.ShellExperience.TopLevelApplication",
            (struct ViewEventDispatcher **)&v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8ED,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
      MsgRelease(v25);
      goto LABEL_22;
    }
    MsgRelease(v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  }
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v32, &v33);
  v11 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration >= 0 )
  {
    v17 = v33;
    if ( !v9 )
      goto LABEL_21;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 704LL))(
      v32,
      (unsigned __int64)&v33[1] & -(__int64)(v33 != 0LL),
      0LL);
    v18 = this + 44;
    v19 = v32;
    v25 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v11 = 0;
    v21 = v18[1];
    if ( v21 != v18[3]
      || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)v18,
                  v21 + 1,
                  v20),
          v11 >= 0) )
    {
      v22 = (struct MsgString **)(*v18 + 8 * v18[1]++);
      if ( v22 )
      {
        *v22 = 0LL;
        if ( v22 != &v25 )
        {
          *v22 = v19;
          v25 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    if ( v11 >= 0 )
    {
LABEL_21:
      v23 = v32;
      v32 = 0LL;
      *a3 = v23;
      v33 = 0LL;
      *a4 = v17;
      *a5 = v9;
      v11 = 0;
      goto LABEL_22;
    }
    v15 = (unsigned int)v11;
    v16 = 2297LL;
  }
  else
  {
    v15 = (unsigned int)MatchingViewEventRegistration;
    v16 = 2289LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v15);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  return (unsigned int)v11;
}
