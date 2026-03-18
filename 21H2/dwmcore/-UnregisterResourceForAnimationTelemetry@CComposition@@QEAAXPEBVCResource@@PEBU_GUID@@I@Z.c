/*
 * XREFs of ?UnregisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z @ 0x180043000
 * Callers:
 *     ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4 (-UnregisterForTelemetry@CBaseExpression@@IEAAXXZ.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800CDDDC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComposition::UnregisterResourceForAnimationTelemetry(
        CComposition *this,
        unsigned __int64 a2,
        const struct _GUID *a3,
        unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, const struct _GUID *))(**((_QWORD **)this + 82) + 80LL))(
    *((_QWORD *)this + 82),
    a4,
    a2 | 0xDD00000000000000uLL,
    a3);
}
