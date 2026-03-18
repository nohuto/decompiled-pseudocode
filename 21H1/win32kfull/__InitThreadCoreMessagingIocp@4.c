/*
 * XREFs of __InitThreadCoreMessagingIocp@4 @ 0x99E68
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _InitThreadCoreMessagingIocp(int a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // ecx
  int v5; // ecx
  _DWORD v6[6]; // [esp+Ch] [ebp-18h] BYREF

  v1 = 0;
  if ( _gptiCurrent != *(_DWORD *)(a1 + 8) )
  {
    v5 = 5;
LABEL_9:
    UserSetLastError((struct _NT_TIB *)v5);
    return v1;
  }
  if ( *(_DWORD *)(_gptiCurrent + 836) )
  {
    v5 = 1247;
    goto LABEL_9;
  }
  v6[0] = 24;
  v6[1] = 0;
  v6[3] = 512;
  v6[2] = 0;
  v6[4] = 0;
  v6[5] = 0;
  if ( (int)ZwAllocateReserveObject(_gptiCurrent + 832, v6, 1) < 0 )
  {
    UserSetLastError((struct _NT_TIB *)0xE);
    *(_DWORD *)(_gptiCurrent + 832) = 0;
  }
  else
  {
    v1 = *(_DWORD *)(_gptiCurrent + 820);
    if ( v1 )
      HMAssignmentLock(v3, v2);
  }
  return v1;
}
