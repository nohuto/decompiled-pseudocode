/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A178
 * Callers:
 *     NtUserSetWindowBand @ 0x1C003CAD0 (NtUserSetWindowBand.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0064B10 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0069EC0 (NtUserSetWindowPos.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1C00629D0 (ValidateHwndIAM.c)
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
    if ( !v5 || (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
