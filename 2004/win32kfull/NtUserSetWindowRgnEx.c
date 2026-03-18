/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C0203BE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowRgn @ 0x1C005BAD0 (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C005BBAC (MirrorRegion.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int128 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-18h]

  v25 = 0LL;
  v26 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v11 = v7;
  if ( !v7 || (v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669, (v9 & 0xFFFFFFFD) == 0) )
  {
    v5 = 0;
    goto LABEL_20;
  }
  *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v25;
  *((_QWORD *)&v25 + 1) = v7;
  HMLockObject(v7);
  CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v21 = UserValidateCopyRgn(a2);
        v22 = v21;
        if ( !v21
          || (v23 = *(_QWORD *)(v11 + 40), (*(_BYTE *)(v23 + 26) & 0x40) != 0)
          && v21 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v21,
                               (unsigned int)-*(_DWORD *)(v23 + 88),
                               (unsigned int)-*(_DWORD *)(v23 + 92))
           || !(unsigned int)MirrorRegion(v11, v22, 0)
           || !(unsigned int)GreOffsetRgn(
                               v22,
                               *(unsigned int *)(*(_QWORD *)(v11 + 40) + 88LL),
                               *(unsigned int *)(*(_QWORD *)(v11 + 40) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v22 = 1LL;
      }
      SelectWindowRgn((struct tagWND *)v11, (HRGN)v22, 0);
      goto LABEL_18;
    }
    v5 = xxxSetWindowRgn(v11, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5LL, v16, v17);
  }
LABEL_18:
  ThreadUnlock1(v19, v18, v20);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v5;
}
