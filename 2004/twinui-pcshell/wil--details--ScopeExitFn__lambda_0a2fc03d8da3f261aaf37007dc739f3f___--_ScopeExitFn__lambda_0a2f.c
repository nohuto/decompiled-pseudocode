/*
 * XREFs of wil::details::ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___::_ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___ @ 0x1804150E0
 * Callers:
 *     _TabletModeCoverWindow::InitializeInstance_::_1_::dtor$0 @ 0x1804160D1 (_TabletModeCoverWindow--InitializeInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___::_ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___(
        _BYTE *a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v2, (RTL_SRWLOCK *)(*(_QWORD *)a1 + 112LL));
    *(_BYTE *)(*(_QWORD *)a1 + 200LL) = 0;
    ShowWindow(*(HWND *)(*(_QWORD *)a1 + 104LL), 0);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v2);
  }
}
