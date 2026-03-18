/*
 * XREFs of _zzzUnhookWindowsHook@8 @ 0x152D39
 * Callers:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall zzzUnhookWindowsHook(int a1, int a2)
{
  int i; // eax
  int v3; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *v5; // esi
  int v6; // ecx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v6 = 1426;
  }
  else
  {
    for ( i = PhkFirstValid(_gptiCurrent, a1); ; i = PhkNextValid((int)v5) )
    {
      v5 = (_DWORD *)i;
      if ( !i )
      {
        v6 = 1431;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(i + 36) == -1 )
      {
        v3 = *(_DWORD *)(i + 28);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        v3 = v5[7] + *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 232) + 4 * v5[9] + 228);
      }
      if ( v3 == a2 )
        break;
    }
    if ( v5[2] == _gptiCurrent )
      return zzzUnhookWindowsHookEx((int)v5);
    v6 = 5;
  }
LABEL_14:
  UserSetLastError((struct _NT_TIB *)v6);
  return 0;
}
