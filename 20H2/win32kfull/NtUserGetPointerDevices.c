/*
 * XREFs of NtUserGetPointerDevices @ 0x1C0109F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01EEED0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  struct DEVICEINFO *i; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int *v13; // rax
  unsigned int v14; // eax
  int v15; // r15d
  struct DEVICEINFO *j; // rsi
  CInpPushLock *Lock; // [rsp+48h] [rbp-50h]
  _BYTE v18[72]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  if ( a1 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 60)) )
          ++v5;
      }
    }
    if ( a2 )
    {
      v13 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v13 = (unsigned int *)MmUserProbeAddress;
      v14 = *v13;
      if ( v14 < v5 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
        UserSetLastError(122LL, v8, v10);
      }
      else if ( v14 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v15 = v5 - 1;
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j && v15 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 60)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v15--], *((_QWORD *)j + 60));
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299LL, v8, v10);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
