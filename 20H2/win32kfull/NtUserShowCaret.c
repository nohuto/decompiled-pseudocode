/*
 * XREFs of NtUserShowCaret @ 0x1C00D5F40
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00D603C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00D6840 (zzzInternalShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  __int64 v2; // rbx
  struct tagWND *v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (unsigned int)UT_CaretSet(v3) )
  {
    zzzInternalShowCaret();
    v2 = 1LL;
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
