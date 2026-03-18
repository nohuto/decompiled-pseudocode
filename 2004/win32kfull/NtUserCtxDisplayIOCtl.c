/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01F83F0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C0226C44 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rax
  void *v15; // rbx
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v14 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v15 = (void *)v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v14, &v17, (__int64)Win32FreePool);
    memmove(v15, (const void *)a2, v3);
    v13 = CtxDisplayIOCtl(a1, v15, (unsigned int)v3);
    if ( v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v17);
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10, v12, v11);
  return v13;
}
