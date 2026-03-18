/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00BC350
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C00BC518 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  __int64 v16; // rax
  unsigned int InformationThread; // esi
  _BYTE *v19; // [rsp+20h] [rbp-A8h]
  __int128 v20; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  v20 = 0LL;
  v21 = 0LL;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v16 = Win32AllocPoolWithQuota((unsigned int)v4, 1230271317LL);
        v15 = (_BYTE *)v16;
        v19 = (_BYTE *)v16;
        if ( !v16 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v16, &v20, (__int64)Win32FreePool);
      }
      else
      {
        v15 = Src;
        v19 = Src;
      }
      memmove(v15, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v15 = 0LL;
      v19 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v15, (unsigned int)v4, v19, v20, *((_QWORD *)&v20 + 1), v21);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v15, v4);
    }
    if ( v15 != Src && v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v20);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v12, v13);
  return InformationThread;
}
