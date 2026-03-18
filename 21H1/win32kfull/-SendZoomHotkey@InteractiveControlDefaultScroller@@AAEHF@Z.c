/*
 * XREFs of ?SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z @ 0x1B3BFA
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z.c)
 * Callees:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z @ 0x1B3C82 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z.c)
 */

int __thiscall InteractiveControlDefaultScroller::SendZoomHotkey(InteractiveControlDefaultScroller *this, __int16 a2)
{
  int v3; // edi
  int CurrentKbdTables; // eax
  unsigned __int8 v6; // [esp+0h] [ebp-4Ch]
  int v7; // [esp+4h] [ebp-48h]
  _DWORD v8[7]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v9[7]; // [esp+2Ch] [ebp-20h] BYREF

  v3 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(v6, v7);
  if ( *((_BYTE *)this + 52) != 2 )
  {
    HIWORD(v8[2]) = 0;
    memset(&v8[3], 0, 16);
    v8[0] = 1;
    LOWORD(v8[1]) = ((a2 >> 15) & 2) + 187;
    CurrentKbdTables = GetCurrentKbdTables();
    *(_DWORD *)((char *)&v8[1] + 2) = (unsigned __int16)InternalMapVirtualKeyEx(LOWORD(v8[1]), 0, CurrentKbdTables);
    qmemcpy(v9, v8, sizeof(v9));
    v9[2] = 2;
    xxxSendInput(2u, (int)v8);
    return 0;
  }
  return v3;
}
