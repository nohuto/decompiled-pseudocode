/*
 * XREFs of ?_ReplaceViewWithBufferInLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIApplicationView@@@Z @ 0x1800BBA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_ReplaceViewWithBufferInLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, __int64))(**((_QWORD **)this + 8) + 248LL))(
           *((_QWORD *)this + 8),
           a2,
           0LL,
           1LL);
}
