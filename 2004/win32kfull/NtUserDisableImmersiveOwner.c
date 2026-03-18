/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01F8640
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C0121EE4 (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C0209BA0 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v7)
      && (unsigned int)IsTopLevelWindow(v7)
      && !(unsigned int)IsWindowBeingDestroyed(v7)
      && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL))
       || *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL)) )
    {
      v6 = xxxDisableImmersiveOwner(v7);
    }
    else
    {
      UserSetLastError(5LL, v8, v9);
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
