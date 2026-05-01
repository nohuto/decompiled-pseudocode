/*
 * XREFs of ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1802AAF10
 * Callers:
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1802A2E50 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1802A41E0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x1802A1860 (_lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_--operator().c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A5F98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4Re.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_ChangePopupUIShowingCount(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  const char *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  int v9[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h] BYREF
  unsigned int *v11[3]; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+50h] [rbp-58h] BYREF
  __int128 v13; // [rsp+58h] [rbp-50h]
  __int64 (__fastcall ***v14)(); // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = a3;
  v10 = 1LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetImpl'::`2'::impl,
    1u,
    a3);
  v11[0] = (unsigned int *)&v16;
  v11[1] = (unsigned int *)&v10;
  v11[2] = a1;
  *(_QWORD *)v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9);
  v6 = lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator()(v11, v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x453,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  try
  {
    *(_QWORD *)v9 = a1;
    *(_QWORD *)&v9[2] = v11;
    v12 = off_1804B1A40;
    v13 = *(_OWORD *)v9;
    v14 = &v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 712LL))(a2);
    if ( v14 )
    {
      v8 = &v12;
      LOBYTE(v8) = v14 != &v12;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v14)[4])(v14, v8);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x464,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v7);
  }
  return 0LL;
}
