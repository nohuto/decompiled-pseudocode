/*
 * XREFs of ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180411F70
 * Callers:
 *     ?ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z @ 0x18041212C (-ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180412E60 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180413060 (-VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180413118 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     StringCopyWorkerW_0 @ 0x180412ABC (StringCopyWorkerW_0.c)
 */

__int64 __fastcall VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        wchar_t *a3)
{
  size_t v5; // rdx
  HRESULT v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  OLECHAR *v10; // rdx
  size_t v11; // [rsp+20h] [rbp-38h]
  size_t pcchNewDestLength; // [rsp+30h] [rbp-28h] BYREF
  GUID rguid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)a2 + 32LL))(a2, &rguid);
  if ( v6 < 0 )
  {
    v7 = 214LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  pcchNewDestLength = 0LL;
  v6 = StringCopyWorkerW_0(a3, v5, &pcchNewDestLength, L"Desktops\\", v11);
  v9 = 49 - pcchNewDestLength;
  v10 = &a3[pcchNewDestLength];
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024774 )
  {
    v9 = pcchNewDestLength;
    v10 = (OLECHAR *)pcchNewDestLength;
  }
  if ( v6 < 0 )
  {
    v7 = 218LL;
    goto LABEL_3;
  }
  if ( !StringFromGUID2(&rguid, v10, v9) )
  {
    v6 = -2147418113;
    v7 = 219LL;
    goto LABEL_3;
  }
  return 0LL;
}
