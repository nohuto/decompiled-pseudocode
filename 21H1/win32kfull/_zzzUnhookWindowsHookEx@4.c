/*
 * XREFs of _zzzUnhookWindowsHookEx@4 @ 0x127FE
 * Callers:
 *     _NtUserUnhookWindowsHookEx@4 @ 0x127C8 (_NtUserUnhookWindowsHookEx@4.c)
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _zzzUnhookWindowsHook@8 @ 0x152D39 (_zzzUnhookWindowsHook@8.c)
 * Callees:
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     ?zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z @ 0x1526E3 (-zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z.c)
 */

int __thiscall zzzUnhookWindowsHookEx(int this)
{
  int v1; // esi
  int v2; // edi
  int v4; // edx
  int i; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagTHREADINFO *v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+4h] [ebp-14h]
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this;
  v2 = *(_DWORD *)(this + 8);
  if ( *(char *)(this + 32) < 0 )
    return 0;
  if ( (byte_2510CD[*(_DWORD *)(this + 24)] & 4) != 0 )
  {
    v10[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v10;
    v10[1] = v1;
    HMLockObject(v1);
    zzzJournalAttach(v8, v9);
    v1 = ThreadUnlock1();
  }
  if ( v1 )
    FreeHook(v1);
  if ( (((unsigned int)&loc_3FFFD + 3) & *(_DWORD *)(v2 + 264)) != 0 )
  {
    v4 = -1;
    do
    {
      if ( (byte_2510CD[v4] & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2); i; i = PhkNextValid(i) )
        {
          if ( *(_DWORD *)(i + 8) == v2 )
            return 1;
        }
      }
      ++v4;
    }
    while ( v4 <= 14 );
    *(_DWORD *)(v2 + 264) &= ~0x40000u;
  }
  return 1;
}
