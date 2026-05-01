/*
 * XREFs of ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x180197BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_RefreshEnterpriseId@CApplicationViewBase@@IEAAJ_N@Z @ 0x1801980BC (-_RefreshEnterpriseId@CApplicationViewBase@@IEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::ResetEnterpriseIdOnProcessIdMatch(RTL_SRWLOCK *this, int a2)
{
  unsigned int v4; // edi
  int refreshed; // eax
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+18h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, this + 3);
  v4 = 0;
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, int *))this[-3].Ptr + 65))(this - 3, &v9) < 0 || v9 == a2 )
  {
    refreshed = CApplicationViewBase::_RefreshEnterpriseId((CApplicationViewBase *)&this[-3], 1);
    v6 = refreshed;
    if ( refreshed < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)refreshed);
    v4 = v6;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  return v4;
}
