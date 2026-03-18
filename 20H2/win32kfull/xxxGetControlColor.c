/*
 * XREFs of xxxGetControlColor @ 0x1C014651C
 * Callers:
 *     xxxPaintRect @ 0x1C0037958 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C0146454 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C01F8F80 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(
        struct tagWND *a1,
        struct _LARGE_STRING **a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rbx
  struct _LARGE_STRING *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1, a2, a3) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
  {
    v9 = 0LL;
    if ( a2 )
      v9 = *a2;
    v10 = xxxSendMessage((unsigned __int64)a1, a4, a3, v9);
    v11 = v10;
    if ( !v10 || !(unsigned int)GreValidateServerHandle(v10, 16LL) )
    {
      if ( a2 )
        v8 = (unsigned __int64)*a2;
      return xxxDefWindowProc(a1, a4, a3, v8);
    }
    return v11;
  }
  else
  {
    if ( a2 )
      v8 = (unsigned __int64)*a2;
    return xxxDefWindowProc(a1, a4, a3, v8);
  }
}
