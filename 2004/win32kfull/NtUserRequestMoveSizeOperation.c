/*
 * XREFs of NtUserRequestMoveSizeOperation @ 0x1C0201B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0242834 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRequestMoveSizeOperation(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v11 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 40);
    v8 = (*(_WORD *)(v9 + 42) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v19;
      *((_QWORD *)&v19 + 1) = v7;
      HMLockObject(v7);
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
        v14 = 5LL;
      }
      else
      {
        if ( a2 <= 8 )
        {
          v6 = (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v11, a2, a3);
LABEL_9:
          ThreadUnlock1(v16, v15, v17);
          goto LABEL_10;
        }
        v14 = 87LL;
      }
      UserSetLastError(v14, v12, v13);
      goto LABEL_9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v6;
}
