/*
 * XREFs of ?GetViewForApplication@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180191290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewForApplication(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplication *, struct IApplicationView **))(**((_QWORD **)this + 18) + 56LL))(
           *((_QWORD *)this + 18),
           a2,
           a3);
}
