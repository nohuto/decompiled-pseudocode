/*
 * XREFs of ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18024439C
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18023F550 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18023F7D0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1802451E4 (-_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18000B47C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1800AA8C8 (--$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18023BB18 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18023EC5C (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802437FC (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802440A0 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180245690 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180245E60 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_HandleControlGainedForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char *ViewHostItem; // rax
  HolographicPositioner *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IApplicationView *v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v18 = a2;
  if ( HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6LL) && *((_QWORD *)this + 31) )
  {
    wil::com_query_failfast<IWin32ApplicationView,IApplicationView * &>((__int64)v16, &v18);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)this + 31) + 24LL))(
           *((_QWORD *)this + 31),
           v16[0],
           a3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6AF,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
  }
  HolographicPositioner::_FindViewHostItem((__int64)this, &v19);
  if ( v19 )
    goto LABEL_14;
  v7 = HolographicPositioner::_RaiseViewAdded(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1720LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  v7 = HolographicPositioner::_TransitionViewToHolographic(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1723LL;
    goto LABEL_23;
  }
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, v16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v19, ViewHostItem);
  v11 = (HolographicPositioner *)v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v19 )
  {
LABEL_14:
    v16[0] = 0LL;
    v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
            &v19,
            v16);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 1732LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      goto LABEL_25;
    }
    if ( a3 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16[0] + 56LL))(
              v16[0],
              a3);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 1737LL;
        goto LABEL_19;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  }
  v7 = HolographicPositioner::_EnableSystemVisuals(
         v11,
         (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2,
         0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1742LL;
    goto LABEL_23;
  }
  v8 = 0;
LABEL_25:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
  }
  return v8;
}
