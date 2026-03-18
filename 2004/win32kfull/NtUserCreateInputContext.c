/*
 * XREFs of NtUserCreateInputContext @ 0x1C0153430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00FF9C0 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 *InputContext; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1);
      if ( InputContext )
        v3 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL, gpsi, v2);
    }
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v3;
}
