/*
 * XREFs of ?UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180195040
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180011D78 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x180195180 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::UpdateEngagementFlags(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // ecx
  int ProcessId; // ebx
  unsigned int v10; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, (RTL_SRWLOCK *)(a1 + 48));
  v6 = *(_DWORD *)(a1 + 268);
  v7 = a3 & a2 | v6 & ~a2;
  if ( v6 == v7 )
    goto LABEL_4;
  *(_DWORD *)(a1 + 268) = v7;
  v10 = 0;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)a1, &v10);
  if ( ProcessId >= 0 )
  {
    v14 = 0;
    v13 = v10;
    v12 = *(int *)(a1 + 268);
    SetCITInfo(5LL, &v12);
LABEL_4:
    ProcessId = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  return (unsigned int)ProcessId;
}
