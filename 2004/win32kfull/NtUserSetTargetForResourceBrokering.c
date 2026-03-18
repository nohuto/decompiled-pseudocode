/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C0007ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z @ 0x1C0007FEC (-_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
    goto LABEL_14;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 820LL) & 0x30) == 0x10 )
  {
    if ( !a2 )
      goto LABEL_12;
    v8 = PtiFromThreadId(a2);
    v5 = v8;
    if ( v8 )
    {
      if ( v8 == gptiCurrent )
      {
        v5 = 0LL;
      }
      else
      {
        v9 = *(_QWORD *)(v8 + 416);
        if ( (*(_DWORD *)(v9 + 820) & 0x30) != 0x10
          || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v9)
          && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v5 + 416)) )
        {
          goto LABEL_3;
        }
      }
LABEL_12:
      _SetTargetForCursorApiBrokering(gptiCurrent, (struct tagTHREADINFO *)v5);
      v4 = 1LL;
      goto LABEL_5;
    }
LABEL_14:
    v6 = 87LL;
    goto LABEL_4;
  }
LABEL_3:
  v6 = 5LL;
LABEL_4:
  UserSetLastError(v6);
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v4;
}
