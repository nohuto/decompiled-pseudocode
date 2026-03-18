/*
 * XREFs of _NtUserHideCaret@4 @ 0xBA8F6
 * Callers:
 *     <none>
 * Callees:
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 */

int __stdcall NtUserHideCaret(int a1)
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
    zzzInternalHideCaret();
    v1 = 1;
  }
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v1;
}
