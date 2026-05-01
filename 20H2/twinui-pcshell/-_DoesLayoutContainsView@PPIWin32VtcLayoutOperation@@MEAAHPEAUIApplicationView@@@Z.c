/*
 * XREFs of ?_DoesLayoutContainsView@PPIWin32VtcLayoutOperation@@MEAAHPEAUIApplicationView@@@Z @ 0x1800BA740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_DoesLayoutContainsView(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 8) + 184LL))(
           *((_QWORD *)this + 8),
           a2);
}
