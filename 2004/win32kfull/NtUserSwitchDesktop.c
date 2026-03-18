/*
 * XREFs of NtUserSwitchDesktop @ 0x1C004A560
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0053808 (xxxSwitchDesktopWithFade.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, unsigned int a3)
{
  BOOL v3; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  Object = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 768LL) + 24LL) & 0x40;
  else
    v8 = 0;
  if ( v8 )
    goto LABEL_15;
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 64LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5LL);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, &v18, UserDereferenceObject);
  v12 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v12 = Object;
  }
  ObfDereferenceObject(v12);
  v14 = *((_QWORD *)Object + 5);
  if ( a2 )
    v15 = xxxSwitchDesktopWithFade(v14, (_DWORD)Object, v13, a2, a3);
  else
    v15 = xxxSwitchDesktop(v14, Object, 0LL, a3);
  v16 = v15;
  PopAndFreeW32ThreadLock(&v18);
  v3 = v16 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v3;
}
