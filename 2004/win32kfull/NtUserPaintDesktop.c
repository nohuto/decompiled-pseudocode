/*
 * XREFs of NtUserPaintDesktop @ 0x1C0200910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C00BEFFC (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
    v13[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v13;
    v13[2] = 0LL;
    v13[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    v3 = xxxInternalPaintDesktop(v5, a1, 1);
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent, v2);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v3;
}
