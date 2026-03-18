/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01FECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x3FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v13;
      *((_QWORD *)&v13 + 1) = v2;
      HMLockObject(v2);
      v8 = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 25LL);
      ThreadUnlock1(v10, v9, v11);
      v6 = v8 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
