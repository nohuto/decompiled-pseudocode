/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C003AC04
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C003AB60 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C003ACE0 (LockThreadByClientId.c)
 *     LockProcessByClientId @ 0x1C003B608 (LockProcessByClientId.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // rax
  PVOID v13; // [rsp+20h] [rbp-10h] BYREF
  PVOID Object; // [rsp+28h] [rbp-8h] BYREF

  Object = 0LL;
  v13 = 0LL;
  v6 = a1;
  v7 = a2;
  GiveForegroundActivateRight(a1);
  if ( (a4 & 0xB) != 0 )
  {
    result = LockProcessByClientId(v6, &Object);
    if ( (int)result >= 0 )
    {
      xxxSetProcessInitState(Object, ((unsigned int)((a4 & 1) == 0) + 1) << 6);
      if ( (a4 & 8) != 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        if ( ProcessWin32Process )
          *(_DWORD *)(ProcessWin32Process + 12) |= 8u;
      }
      ObfDereferenceObject(Object);
      result = LockThreadByClientId(v7, &v13);
      if ( (int)result >= 0 )
      {
        W32GetThreadWin32Thread(v13);
LABEL_6:
        ObfDereferenceObject(v13);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a4 != 4 )
      return 0LL;
    v10 = gpwtiFirst;
    if ( !gpwtiFirst )
      goto LABEL_20;
    do
    {
      if ( *(_DWORD *)(v10 + 8) == (_DWORD)v6 )
        break;
      v10 = *(_QWORD *)v10;
    }
    while ( v10 );
    if ( v10 )
    {
      v11 = *(struct _KEVENT **)(v10 + 32);
      if ( v11 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v10 + 32) = 0LL;
      }
      else if ( v11 )
      {
        KeClearEvent(v11);
      }
    }
    else
    {
LABEL_20:
      v12 = Win32AllocPoolWithQuota(48LL, 1953985365LL);
      v10 = v12;
      if ( !v12 )
        return 3221225495LL;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_DWORD *)(v12 + 8) = v6;
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)v12 = gpwtiFirst;
      gpwtiFirst = v12;
    }
    *(_QWORD *)(v10 + 16) = a3;
    result = LockThreadByClientId(v7, &v13);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v10 + 24) = (unsigned int)PsGetThreadProcessId((PETHREAD)v13);
      goto LABEL_6;
    }
  }
  return result;
}
