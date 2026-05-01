/*
 * XREFs of ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D03C4
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1802CF9D0 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D1058 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802D2AB0 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredBoundsToView(ViewWrapperBase *this, const struct APPLICATION_VIEW_DATA *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, const struct APPLICATION_VIEW_DATA *))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL)
                                                                                       + 64LL))(
    *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
    *((_QWORD *)this + 24),
    (char *)this + 200,
    a2);
}
