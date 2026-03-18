/*
 * XREFs of _NtUserShowCaret@4 @ 0xBA6EC
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 */

int __stdcall NtUserShowCaret(int a1)
{
  int v1; // esi
  void *v2; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = (void *)ValidateHwnd(a1);
    if ( !v2 )
      goto LABEL_5;
  }
  else
  {
    v2 = 0;
  }
  if ( UT_CaretSet(v2) )
  {
    zzzInternalShowCaret();
    v1 = 1;
  }
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v1;
}
