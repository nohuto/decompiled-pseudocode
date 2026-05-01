/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180389190
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180389D54 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180389DF4 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 */

__int64 __fastcall CMultitaskingViewManager::ViewDismissed(CMultitaskingViewManager *this, struct IUnknown *a2)
{
  CMultitaskingViewManager *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebp
  int MTVHost; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = (CMultitaskingViewManager *)((char *)this - 16);
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  ((void (__fastcall *)(struct IUnknown *, unsigned int *))a2->lpVtbl[1].QueryInterface)(a2, &v10);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  MTVHost = CMultitaskingViewManager::_FindMTVHost(v2, v10, 0LL, &v11, &v12);
  v7 = MTVHost;
  if ( MTVHost >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(v11, a2) )
      CMultitaskingViewManager::_DestroyMTVHost(v2, v12);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
