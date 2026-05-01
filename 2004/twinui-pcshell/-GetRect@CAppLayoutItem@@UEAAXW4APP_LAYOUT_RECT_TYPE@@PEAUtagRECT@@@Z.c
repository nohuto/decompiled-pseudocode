/*
 * XREFs of ?GetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180484BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::GetRect(RTL_SRWLOCK *a1, unsigned int a2, struct tagRECT *a3)
{
  SetRectEmpty(a3);
  AcquireSRWLockShared(a1 + 3);
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, struct tagRECT *))a1[-1].Ptr + 5))(a1 - 1, a2, a3);
  if ( a1 != (RTL_SRWLOCK *)-24LL )
    ReleaseSRWLockShared(a1 + 3);
}
