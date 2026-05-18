/*
 * XREFs of sub_18000E648 @ 0x18000E648
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000C950 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000CFA8 @ 0x18000CFA8 (sub_18000CFA8.c)
 *     sub_18000E598 @ 0x18000E598 (sub_18000E598.c)
 */

char __fastcall sub_18000E648(__int64 a1)
{
  char *v2; // rax

  LODWORD(v2) = GetCurrentThreadId();
  if ( dword_180218498 != (_DWORD)v2 )
  {
    if ( _InterlockedIncrement(&dword_18021849C) < 4 )
    {
      dword_180218498 = (int)v2;
      v2 = sub_18000CFA8(0);
      if ( v2 )
        LOBYTE(v2) = sub_18000E598((__int64)v2, a1);
      dword_180218498 = 0;
    }
    _InterlockedDecrement(&dword_18021849C);
  }
  return (char)v2;
}
