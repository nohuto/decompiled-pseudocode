/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F5C34
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C01F76D0 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C015B0F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C015B130 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01EF6C0 (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  CInpLockGuard *v23[7]; // [rsp+38h] [rbp-50h] BYREF
  char v24; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v23, TouchProcessorLock, v7);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  v10 = gptiCurrent;
  v11 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x2000) == 0 )
  {
    v12 = 5LL;
LABEL_16:
    UserSetLastError(v12, v10, v9);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v15 = PsGetCurrentProcessWow64Process(v14),
        ProbeForRead(a3, 4 * v5, v15 != 0 ? 1 : 4),
        v16 = (_DWORD)v5 << 7,
        (unsigned __int64)(v5 << 7) > 0xFFFFFFFF) )
  {
    v12 = 87LL;
    goto LABEL_16;
  }
  if ( v16 >= 0x2710000 || (v17 = Win32AllocPoolZInit(v16, 1885631317LL), (v18 = v17) == 0) )
  {
    v12 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v17) )
    v11 = DelegateCapturePointers((unsigned int)v5, v18, v20);
  else
    UserSetLastError(87LL, v19, v20);
  Win32FreePool(v18);
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v23);
  UserSessionSwitchLeaveCrit(v21);
  return v11;
}
