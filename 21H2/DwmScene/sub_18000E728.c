/*
 * XREFs of sub_18000E728 @ 0x18000E728
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000CA30 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000D088 @ 0x18000D088 (sub_18000D088.c)
 *     sub_18000E678 @ 0x18000E678 (sub_18000E678.c)
 */

char __fastcall sub_18000E728(__int64 a1)
{
  char *v2; // rax

  LODWORD(v2) = GetCurrentThreadId();
  if ( dword_18021F5C8 != (_DWORD)v2 )
  {
    if ( _InterlockedIncrement(&dword_18021F5CC) < 4 )
    {
      dword_18021F5C8 = (int)v2;
      v2 = sub_18000D088(0);
      if ( v2 )
        LOBYTE(v2) = sub_18000E678((__int64)v2, a1);
      dword_18021F5C8 = 0;
    }
    _InterlockedDecrement(&dword_18021F5CC);
  }
  return (char)v2;
}
