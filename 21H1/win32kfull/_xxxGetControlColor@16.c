/*
 * XREFs of _xxxGetControlColor@16 @ 0xBFABC
 * Callers:
 *     _xxxPaintRect@20 @ 0x7215C (_xxxPaintRect@20.c)
 *     _xxxGetControlBrush@12 @ 0xBFA3E (_xxxGetControlBrush@12.c)
 *     _NtUserGetControlColor@16 @ 0x162799 (_NtUserGetControlColor@16.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __fastcall xxxGetControlColor(_DWORD *a1, int *a2, unsigned int a3, int a4)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v11; // eax

  if ( PsGetCurrentProcessWin32Process() == *(_DWORD *)(a1[2] + 232) )
  {
    v6 = 0;
    v7 = 0;
    if ( a2 )
      v7 = *a2;
    v8 = xxxSendMessage(a1, a3, v7);
    v9 = v8;
    if ( !v8 || !GreValidateServerHandle(v8, 16) )
    {
      if ( a2 )
        v6 = *a2;
      return xxxDefWindowProc((int)a1, a4, a3, v6);
    }
    return v9;
  }
  else
  {
    if ( a2 )
      v11 = *a2;
    else
      v11 = 0;
    return xxxDefWindowProc((int)a1, a4, a3, v11);
  }
}
