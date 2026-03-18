/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C01FC8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DEVICEINFO *i; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int *v14; // rax
  struct DEVICEINFO *j; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  CInpPushLock *Lock; // [rsp+48h] [rbp-40h]
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  if ( a3 == 16 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v13 = 0;
      v14 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      if ( *v14 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v16 = 2LL * v13;
          *((_QWORD *)Address + v16) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v16 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v13 >= v6 )
            break;
        }
        v7 = v13;
      }
      else
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL, v11, v12);
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v6;
      v7 = 0;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL, v8, v9);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v18, v17, v19);
  return v7;
}
