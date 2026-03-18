/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0092D78
 * Callers:
 *     NtUserSetWindowBand @ 0x1C002E2C0 (NtUserSetWindowBand.c)
 *     NtUserSetWindowPos @ 0x1C0092AC0 (NtUserSetWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0093040 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1C008EFA0 (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = ValidateHwndIAM();
    *a2 = (struct tagWND *)v5;
    if ( !v5 || (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
