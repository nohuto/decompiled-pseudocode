/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01F77D0
 * Callers:
 *     <none>
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x1C002BDA8 (IsImmersiveBandOrShellManaged.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208D18 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v5)
      && (unsigned int)IsTopLevelWindow(v5)
      && !(unsigned int)IsWindowBeingDestroyed(v5)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL))
       || *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) )
    {
      v4 = xxxDisableImmersiveOwner(v5);
    }
    else
    {
      UserSetLastError(5LL, v6, v7);
    }
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
