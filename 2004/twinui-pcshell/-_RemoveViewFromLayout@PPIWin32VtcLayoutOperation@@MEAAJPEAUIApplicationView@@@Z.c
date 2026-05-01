/*
 * XREFs of ?_RemoveViewFromLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIApplicationView@@@Z @ 0x1800BA280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_RemoveViewFromLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 8) + 280LL))(
           *((_QWORD *)this + 8),
           a2);
}
