/*
 * XREFs of ?LoadIconW@SwitchItem@@UEAAJAEBUtagSIZE@@0IPEAUIIconLoaderInternal@@@Z @ 0x18037D6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItem::LoadIconW(
        unsigned __int64 this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        int a4,
        struct IIconLoaderInternal *a5)
{
  return (*(__int64 (__fastcall **)(struct IIconLoaderInternal *, _QWORD, const struct tagSIZE *, const struct tagSIZE *, int, unsigned __int64))(*(_QWORD *)a5 + 24LL))(
           a5,
           *(_QWORD *)(this + 24),
           a2,
           a3,
           a4,
           this & -(__int64)(this != 72));
}
