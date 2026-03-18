/*
 * XREFs of ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2
 * Callers:
 *     _NtUserDelegateCapturePointers@12 @ 0x160A8D (_NtUserDelegateCapturePointers@12.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ??0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z @ 0xF0ED2 (--0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QAE@XZ @ 0xF0EF5 (--1CInpLockGuardExclusive@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _ValidateDelegatePointerList@16 @ 0x15A1BB (_ValidateDelegatePointerList@16.c)
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 */

int __userpurge DelegateCapturePointersMitOn@<eax>(
        volatile void *a1@<edx>,
        unsigned int a2@<ecx>,
        volatile void *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v7; // ebx
  void *v8; // ecx
  struct CInpLockGuard *TouchProcessorLock; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // edi
  void *v14; // [esp-4h] [ebp-60h]
  ULONG *v15; // [esp+0h] [ebp-5Ch]
  CInpLockGuard *v16[6]; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v17[8]; // [esp+28h] [ebp-34h] BYREF
  unsigned int v18; // [esp+38h] [ebp-24h]
  volatile void *Address; // [esp+3Ch] [ebp-20h]
  unsigned int v20; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  Address = a1;
  v18 = a2;
  v7 = 0;
  v20 = 0;
  EnterCrit(0, 1);
  v14 = v8;
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(_gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v16, TouchProcessorLock, v14);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x2000) != 0 )
  {
    if ( !a2 || !a1 || !a3 || a1 == a3 )
      goto LABEL_17;
    ms_exc.registration.TryLevel = 0;
    if ( a2 > 0x3FFFFFFF )
      ExRaiseAccessViolation();
    ProbeForRead(Address, 4 * a2, 1u);
    ProbeForRead(a3, 4 * a2, 1u);
    ms_exc.registration.TryLevel = -2;
    v10 = v18;
    if ( ULongLongToULong(120LL * v18, v15) >= 0 )
    {
      if ( v20 < 0x2710000 && (v11 = Win32AllocPoolZInit(v20, 1885631317), (v12 = v11) != 0) )
      {
        if ( ValidateDelegatePointerList(v10, (int)Address, (int)a3, v11) )
          v7 = _DelegateCapturePointers(v12, v10, v10);
        else
          UserSetLastError((struct _NT_TIB *)0x57);
        Win32FreePool(v12);
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)8);
      }
    }
    else
    {
LABEL_17:
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v16);
  UserSessionSwitchLeaveCrit();
  return v7;
}
