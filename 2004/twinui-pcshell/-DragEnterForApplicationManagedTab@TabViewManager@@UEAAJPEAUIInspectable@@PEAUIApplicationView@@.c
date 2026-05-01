/*
 * XREFs of ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18026E870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::DragEnterForApplicationManagedTab(
        TabViewManager *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, struct IApplicationView *))(**((_QWORD **)this + 155)
                                                                                             + 40LL))(
           *((_QWORD *)this + 155),
           a2,
           a3);
}
