/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::Run @ 0x180079960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::Run(
        _QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rax
  bool v4; // dl
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(a1[3] + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = a1[5];
    v4 = 0;
    v6 = v3;
    if ( (int)v3 > 0 )
      v4 = SHIDWORD(v3) > 0;
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1[4] + 120LL) + 200LL))(
      *(_QWORD *)(a1[4] + 120LL),
      (unsigned __int64)&v6 & -(__int64)v4);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(a1[3] + 212LL);
  ReleaseSRWLockExclusive(v5);
}
