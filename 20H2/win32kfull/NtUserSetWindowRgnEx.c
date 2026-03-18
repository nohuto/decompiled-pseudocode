/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C0202D70
 * Callers:
 *     <none>
 * Callees:
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetWindowRgn @ 0x1C0105FB0 (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C010608C (MirrorRegion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-18h]

  v23 = 0LL;
  v24 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( !v7 || (v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669, (v8 & 0xFFFFFFFD) == 0) )
  {
    v5 = 0;
    goto LABEL_20;
  }
  *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v23;
  *((_QWORD *)&v23 + 1) = v7;
  HMLockObject(v7);
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v19 = UserValidateCopyRgn(a2);
        v20 = v19;
        if ( !v19
          || (v21 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v21 + 26) & 0x40) != 0)
          && v19 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v19,
                               (unsigned int)-*(_DWORD *)(v21 + 88),
                               (unsigned int)-*(_DWORD *)(v21 + 92))
           || !(unsigned int)MirrorRegion(v9, v20, 0)
           || !(unsigned int)GreOffsetRgn(
                               v20,
                               *(unsigned int *)(*(_QWORD *)(v9 + 40) + 88LL),
                               *(unsigned int *)(*(_QWORD *)(v9 + 40) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v20 = 1LL;
      }
      SelectWindowRgn((struct tagWND *)v9, (HRGN)v20, 0);
      goto LABEL_18;
    }
    v5 = xxxSetWindowRgn((_QWORD *)v9, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5LL, v14, v15);
  }
LABEL_18:
  ThreadUnlock1(v17, v16, v18);
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
