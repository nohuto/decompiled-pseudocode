/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18040EB18
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x18040F174 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18008459C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_::operator()_IVirtualDesktop___ @ 0x18040EA20 (_lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_--operator()_IVirtualDesktop___.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,IVirtualDesktop *>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 *v5; // rdi
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char *v16; // [rsp+60h] [rbp+20h] BYREF
  char **v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v2 = *a1;
  LODWORD(v16) = 0;
  v17 = &v16;
  v5 = lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_::operator()_IVirtualDesktop___((int **)&v17, &v12, v2);
  v6 = lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_::operator()_IVirtualDesktop___((int **)&v17, &v18, a1[1]);
  v13 = 0LL;
  v7 = v6;
  if ( &v13 != v5 )
  {
    v8 = *v5;
    *v5 = 0LL;
    v13 = v8;
  }
  v14[0] = 0LL;
  if ( v14 != v6 )
  {
    v9 = *v6;
    *v7 = 0LL;
    v14[0] = v9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v10 = (unsigned int)v16;
  if ( (int)v16 >= 0 )
  {
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2 + 1, v14);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, &v13);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v10;
}
