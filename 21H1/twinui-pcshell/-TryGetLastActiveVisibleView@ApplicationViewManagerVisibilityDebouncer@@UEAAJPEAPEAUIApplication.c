/*
 * XREFs of ?TryGetLastActiveVisibleView@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18016DF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::TryGetLastActiveVisibleView(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationView **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 18) + 80LL))(
           *((_QWORD *)this + 18),
           a2);
}
