/*
 * XREFs of NtUserGetDCEx @ 0x1C010A160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // r8
  __int64 DCEx; // rdi
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v15 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v10 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                     + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x20000000) != 0 )
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 768LL)
                      + 24LL) & 1;
    else
      v13 = 0;
    if ( !v13 )
      goto LABEL_17;
    v14 = v10 ? *v10 : 0LL;
    if ( ValidateHwnd(v14) )
      goto LABEL_17;
    v15 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v15, v6, v7);
    goto LABEL_23;
  }
  v10 = (_QWORD *)ValidateHwnd(a1);
  if ( !v10 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v10, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v9, v8, v11);
  return DCEx;
}
