/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YGJKKKK@Z @ 0x1A838
 * Callers:
 *     _NtUserNotifyProcessCreate@16 @ 0x1A7DE (_NtUserNotifyProcessCreate@16.c)
 * Callees:
 *     _LockThreadByClientId@8 @ 0x1A8D2 (_LockThreadByClientId@8.c)
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __userpurge xxxUserNotifyProcessCreate@<eax>(
        void *a1@<edx>,
        void *a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int result; // eax
  int ThreadWin32Thread; // eax
  int v9; // ecx
  int ProcessWin32Process; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  PVOID Object; // [esp+Ch] [ebp-8h] BYREF
  PVOID v16; // [esp+10h] [ebp-4h] BYREF

  Object = 0;
  v16 = 0;
  GiveForegroundActivateRight(a2);
  if ( (a4 & 0xB) == 0 )
  {
    if ( a4 == 4 )
    {
      v11 = (_DWORD *)_gpwtiFirst;
      if ( !_gpwtiFirst )
        goto LABEL_24;
      do
      {
        if ( (void *)v11[1] == a2 )
          break;
        v11 = (_DWORD *)*v11;
      }
      while ( v11 );
      if ( v11 )
      {
        v12 = v11[4];
        if ( v12 == -1 )
        {
          v11[4] = 0;
        }
        else if ( v12 )
        {
          KeClearEvent((PRKEVENT)v11[4]);
        }
      }
      else
      {
LABEL_24:
        v13 = (_DWORD *)Win32AllocPoolWithQuota(24, 1953985365);
        v11 = v13;
        if ( !v13 )
          return -1073741801;
        v13[4] = 0;
        v13[1] = a2;
        v13[5] = 0;
        *v13 = _gpwtiFirst;
        _gpwtiFirst = v13;
      }
      v11[2] = a3;
      result = LockThreadByClientId(a1, (PETHREAD *)&v16);
      if ( result < 0 )
        return result;
      v11[3] = PsGetThreadProcessId((PETHREAD)v16);
      ObfDereferenceObject(v16);
    }
    return 0;
  }
  result = LockProcessByClientId(a2, (PEPROCESS *)&Object);
  if ( result >= 0 )
  {
    xxxSetProcessInitState(Object, (((a4 & 1) == 0) + 1) << 6);
    if ( (a4 & 8) != 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        *(_DWORD *)(ProcessWin32Process + 8) |= 8u;
    }
    ObfDereferenceObject(Object);
    result = LockThreadByClientId(a1, (PETHREAD *)&v16);
    if ( result >= 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(v16);
      if ( ThreadWin32Thread )
      {
        v9 = *(_DWORD *)(ThreadWin32Thread + 264);
        if ( (v9 & 2) != 0 )
        {
          *(_DWORD *)(ThreadWin32Thread + 264) = v9 | 0x20;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(2, 13, &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids, ThreadWin32Thread);
        }
      }
      ObfDereferenceObject(v16);
      return 0;
    }
  }
  return result;
}
