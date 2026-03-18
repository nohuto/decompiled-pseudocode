/*
 * XREFs of NtUserInitializeClientPfnArrays @ 0x1C0125C70
 * Callers:
 *     <none>
 * Callees:
 *     InitializeClientPfnArrays @ 0x1C0125D64 (InitializeClientPfnArrays.c)
 */

__int64 __fastcall NtUserInitializeClientPfnArrays(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v12; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 & 3) != 0 || a2 && (a2 & 3) != 0 || a3 && (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = InitializeClientPfnArrays(a1, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v12;
}
