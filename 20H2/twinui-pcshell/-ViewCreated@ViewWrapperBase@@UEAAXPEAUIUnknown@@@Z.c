/*
 * XREFs of ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802D21C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x1802CE074 (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802CE0EC (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802CFAD4 (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x1802D4134 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 */

void __fastcall ViewWrapperBase::ViewCreated(ViewWrapperBase *this, struct IUnknown *a2)
{
  _QWORD *v2; // rdi
  ViewWrapperBase *v4; // rbx
  __int64 v5; // rcx
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 23, (__int64)a2);
  if ( *((_DWORD *)this + 85) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
      *v2);
  v4 = (ViewWrapperBase *)((char *)this - 8);
  ViewWrapperBase::CommitImportanceVector(v4);
  ViewWrapperBase::CommitActivationTimeoutPolicy(v4);
  ViewWrapperBase::s_ComputeAggregatedViewData(v5, v6, (char *)v4 + 220, (char *)v4 + 264);
  ViewWrapperBase::PushDesiredBoundsToView(v4, (const struct APPLICATION_VIEW_DATA *)v6);
  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v4 + 184LL))(v4);
}
