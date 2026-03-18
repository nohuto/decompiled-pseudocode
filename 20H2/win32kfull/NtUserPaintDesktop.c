/*
 * XREFs of NtUserPaintDesktop @ 0x1C01FFAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C0122BC4 (xxxInternalPaintDesktop.c)
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
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
    v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v11;
    v11[2] = 0LL;
    v11[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    v3 = xxxInternalPaintDesktop(v5, a1, 1);
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent, v2);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v3;
}
