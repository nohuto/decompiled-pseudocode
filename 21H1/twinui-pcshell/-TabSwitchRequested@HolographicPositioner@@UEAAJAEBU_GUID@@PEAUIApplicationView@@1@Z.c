/*
 * XREFs of ?TabSwitchRequested@HolographicPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z @ 0x1801842C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::TabSwitchRequested(
        HolographicPositioner *this,
        const struct _GUID *a2,
        struct IApplicationView *a3,
        struct IApplicationView *a4)
{
  (*(void (__fastcall **)(struct IApplicationView *, const struct _GUID *, struct IApplicationView *))(*(_QWORD *)a4 + 56LL))(
    a4,
    a2,
    a3);
  return 0LL;
}
