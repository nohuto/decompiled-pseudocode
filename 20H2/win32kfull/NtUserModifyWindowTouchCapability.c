/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1C01FF940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _SetTouchWindowFlags @ 0x1C01DC5E4 (_SetTouchWindowFlags.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // edx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v11 = 1004LL;
LABEL_4:
      UserSetLastError(v11, v7, v9);
      goto LABEL_11;
    }
    if ( gptiCurrent != *(_QWORD *)(v6 + 16) )
    {
      v11 = 5LL;
      goto LABEL_4;
    }
    if ( a3 )
      v12 = a2 | 0x10000;
    else
      v12 = 0;
    v10 = SetTouchWindowFlags(v6, v12);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
