/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z @ 0x1B3C82
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z @ 0x1B3BFA (-SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z.c)
 * Callees:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  unsigned __int8 v4; // al
  unsigned int v5; // esi
  int v6; // eax
  bool v7; // zf
  unsigned int v8; // ebx
  unsigned __int16 *v9; // edi
  int v10; // eax
  unsigned __int16 v11; // ax
  int CurrentKbdTables; // eax
  _WORD v13[46]; // [esp+Ch] [ebp-60h] BYREF

  memset(v13, 0, 0x54u);
  v4 = a1 & 1;
  if ( (a1 & 1) != 0 )
    v13[2] = 17;
  v5 = v4;
  if ( (a1 & 2) != 0 )
  {
    v5 = v4 + 1;
    v13[14 * v4 + 2] = 18;
  }
  if ( (a1 & 4) != 0 )
  {
    v6 = 14 * v5++;
    v13[v6 + 2] = 16;
  }
  if ( v5 )
  {
    v7 = a2 == 0;
    v8 = v5;
    v9 = &v13[2];
    if ( v7 )
    {
      do
      {
        *((_DWORD *)v9 - 1) = 1;
        CurrentKbdTables = GetCurrentKbdTables();
        v9[1] = InternalMapVirtualKeyEx(*v9, 0, CurrentKbdTables);
        v9 += 14;
        *((_DWORD *)v9 - 6) = 2;
        --v8;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        *((_DWORD *)v9 - 1) = 1;
        v10 = GetCurrentKbdTables();
        v11 = InternalMapVirtualKeyEx(*v9, 0, v10);
        *((_DWORD *)v9 + 1) = 0;
        v9 += 14;
        *(v9 - 13) = v11;
        --v8;
      }
      while ( v8 );
    }
    xxxSendInput(v5, (int)v13);
  }
}
