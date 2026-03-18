/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0110BE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct tagWND *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-38h]
  __int128 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  int v21; // [rsp+78h] [rbp-10h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v4;
  v9 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v16;
      *((_QWORD *)&v16 + 1) = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v18 = *(_OWORD *)a2;
      v19 = *(_OWORD *)(a2 + 16);
      v20 = *(_QWORD *)(a2 + 32);
      v21 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v18 == 44 || *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
        v9 = xxxSetWindowPlacement(v8);
      else
        UserSetLastError(87LL, v10, v11);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v9;
}
