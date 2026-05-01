/*
 * XREFs of ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18041D780
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x18041DF50 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::GetViewForWindow(JointResize *this, HWND a2, struct IApplicationView **a3)
{
  __int64 result; // rax

  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17)) >= 0 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 18) + 40LL))(
             *((_QWORD *)this + 18),
             a2,
             a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
