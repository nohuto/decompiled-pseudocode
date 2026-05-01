/*
 * XREFs of ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x18043A1A0
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z @ 0x1800FED70 (-GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x18043A230 (-GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetCount(CVirtualDesktopManager *this, unsigned int *a2)
{
  int CountInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), &SRWLock);
  CountInternal = CVirtualDesktopManager::GetCountInternal(this, a2);
  v5 = CountInternal;
  if ( CountInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CountInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
