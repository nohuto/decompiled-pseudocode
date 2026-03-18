/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YGJPAUtagWND@@IIJK@Z @ 0xA48D6
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

size_t __stdcall xxxWrapSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        struct tagWND *a3,
        size_t a4,
        unsigned int a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  size_t v7; // edi
  int v9; // [esp+4h] [ebp-Ch] BYREF
  struct tagWND *v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v9 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v9;
      v10 = a1;
      HMLockObject(a1);
    }
    v7 = xxxSendNotifyMessage((int)a1, a2, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1 )
      ThreadUnlock1();
    return v7;
  }
}
