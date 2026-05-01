/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___ @ 0x1800A804C
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1804171B0 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800799AC (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _lambda_bebd0e8b231a0deebea19a688ef01941_::operator() @ 0x1800A8488 (_lambda_bebd0e8b231a0deebea19a688ef01941_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18041B1B0 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IUnknown **); // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v6(a2, &v12) < 0 )
  {
    updated = lambda_bebd0e8b231a0deebea19a688ef01941_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 537LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[20]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 538LL;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2) )
  {
    updated = lambda_bebd0e8b231a0deebea19a688ef01941_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 524LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[20]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 525LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree((CVirtualDesktopManager *)this, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 526LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)this[13] + 96LL))(
                this[13],
                a2,
                v12);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 531LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[20]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 532LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v8;
}
