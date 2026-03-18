/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0111F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int128 v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp-18h]
  int v19; // [rsp+78h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  v7 = 0;
  if ( v4 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v16 = *(_OWORD *)a2;
      v17 = *(_OWORD *)(a2 + 16);
      v18 = *(_QWORD *)(a2 + 32);
      v19 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v16 == 44 || *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
        v7 = xxxSetWindowPlacement(v6);
      else
        UserSetLastError(87LL, v8, v9);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
