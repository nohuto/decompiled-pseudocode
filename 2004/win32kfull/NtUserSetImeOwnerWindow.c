/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C0032FE0
 * Callers:
 *     <none>
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C0031D44 (zzzImeSetFutureOwner.c)
 *     ImeCheckTopmost @ 0x1C0033118 (ImeCheckTopmost.c)
 *     zzzImeSetOwnerWindow @ 0x1C00333D4 (zzzImeSetOwnerWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_10;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF;
    if ( (_DWORD)v6 == 681 )
    {
      if ( !a2 )
      {
        v5 = 0LL;
        goto LABEL_6;
      }
      v5 = ValidateHwnd(a2);
      if ( v5 )
      {
LABEL_6:
        ++gdwDeferWinEvent;
        if ( v5 )
          goto LABEL_7;
        v11 = *(_QWORD *)(v9 + 16);
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 424) + 120LL);
        if ( !v12 )
          goto LABEL_17;
        if ( v12 == *(_QWORD *)(v9 + 120) )
          goto LABEL_9;
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
        if ( *(_WORD *)v13 != *(_WORD *)(gpsi + 898LL)
          && (*(_BYTE *)(v13 + 10) & 1) == 0
          && v11 == *(_QWORD *)(v12 + 16) )
        {
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v9);
        }
        else
        {
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v9, *(struct tagWND **)(v9 + 120));
        }
        ImeCheckTopmost(v9);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v8 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
