/*
 * XREFs of ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x180197DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180197C44 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CApplicationViewBase::SetCanTab(RTL_SRWLOCK *this, int a2)
{
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v4; // r8
  int CanTab; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, this + 6);
  CanTab = CApplicationViewBase::SetCanTab((CApplicationViewBase *)this, a2, v4);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  if ( CanTab >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)CanTab);
  return (unsigned int)CanTab;
}
