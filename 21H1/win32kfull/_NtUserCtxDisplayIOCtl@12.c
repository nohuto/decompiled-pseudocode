/*
 * XREFs of _NtUserCtxDisplayIOCtl@12 @ 0x1609A0
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _CtxDisplayIOCtl@12 @ 0x1879E1 (_CtxDisplayIOCtl@12.c)
 */

int __stdcall NtUserCtxDisplayIOCtl(int a1, volatile void *Address, SIZE_T Length)
{
  int v3; // edi
  void *v4; // esi
  _DWORD v6[3]; // [esp+10h] [ebp-2Ch] BYREF
  void *v7; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v7 = 0;
  memset(v6, 0, sizeof(v6));
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForRead(Address, Length, 1u);
    v4 = (void *)Win32AllocPoolWithQuota(Length, 1950643029);
    v7 = v4;
    if ( !v4 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock((int)v4, v6, (int)Win32FreePool);
    memcpy(v4, (const void *)Address, Length);
    ms_exc.registration.TryLevel = -2;
    v3 = CtxDisplayIOCtl(Length);
    PopAndFreeAlwaysW32ThreadLock((int)v6);
  }
  else
  {
    v3 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
