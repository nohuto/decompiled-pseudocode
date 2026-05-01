/*
 * XREFs of ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802CFAD4
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1802CF0E0 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D0768 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802D21C0 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
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
