/*
 * XREFs of _NtUserInitializeClientPfnArrays@16 @ 0xE9BD6
 * Callers:
 *     <none>
 * Callees:
 *     _InitializeClientPfnArrays@16 @ 0xE9C86 (_InitializeClientPfnArrays@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserInitializeClientPfnArrays(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+14h] [ebp-1Ch]

  EnterCrit(0, 1);
  if ( a1 && (a1 & 3) != 0 || a2 && (a2 & 3) != 0 || a3 && (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = InitializeClientPfnArrays(a3, a4);
  UserSessionSwitchLeaveCrit();
  return v5;
}
