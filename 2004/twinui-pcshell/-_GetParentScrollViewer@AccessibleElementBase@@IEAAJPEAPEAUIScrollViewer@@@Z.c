/*
 * XREFs of ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1803B51BC
 * Callers:
 *     ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1803B4C40 (-ScrollIntoView@AccessibleElementBase@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180084D3C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803A6590 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B4F78 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::_GetParentScrollViewer(
        AccessibleElementBase *this,
        struct IScrollViewer **a2)
{
  int Element; // ebx
  __int64 *v5; // rax
  struct IScrollViewer *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v9; // [rsp+48h] [rbp+28h] BYREF
  struct IScrollViewer *v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v9);
  if ( Element >= 0 )
  {
    v10 = 0LL;
    while ( v9 && (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(&v9, (__int64 *)&v10) < 0 )
    {
      v5 = (__int64 *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v11);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v9, v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      Element = 0;
      *a2 = v6;
    }
    else
    {
      Element = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x80070490LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)Element;
}
