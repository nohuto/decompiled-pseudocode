/*
 * XREFs of ValidateGestureCaller @ 0x1C0228528
 * Callers:
 *     NtUserInjectGesture @ 0x1C01FE540 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 448);
  if ( v4 == grpdeskRitInput && v4 == *(_QWORD *)(a2 + 24) )
  {
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(a1 + 416) + 880LL, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 880LL) )
      return 1LL;
    UserSetLastError(5LL, v6, v7);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 416), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, v4, a3);
  }
  return 0LL;
}
