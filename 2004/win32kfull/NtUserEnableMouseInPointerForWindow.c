/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x1C0115FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInPointerForWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    *((_QWORD *)&v18 + 1) = v4;
    HMLockObject(v4);
    if ( (a2 != 0) == a2 && (a2 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 820) & 0x30) != 0x10) )
    {
      if ( *(_QWORD *)(v9 + 16) == gptiCurrent )
      {
        v13 = *(_DWORD *)(v9 + 324);
        if ( a2 == ((v13 >> 4) & 1) || (v13 & 0x20) == 0 )
        {
          if ( a2 )
            v14 = v13 | 0x10;
          else
            v14 = v13 & 0xFFFFFFEF;
          v15 = v14 | 0x20;
          v8 = 1LL;
          *(_DWORD *)(v9 + 324) = v15;
          *(_DWORD *)(gptiCurrent + 1224LL) |= 0x4000000u;
          goto LABEL_10;
        }
      }
      v17 = 5LL;
    }
    else
    {
      v17 = 87LL;
    }
    UserSetLastError(v17, v10, v12);
LABEL_10:
    ThreadUnlock1(v15, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
