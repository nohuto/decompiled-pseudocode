/*
 * XREFs of _xxxCancelMouseMoveTracking@16 @ 0x15E12
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 * Callees:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2 (_safe_cast_fnid_to_PTOOLTIPWND@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 */

int __fastcall xxxCancelMouseMoveTracking(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v7; // edi
  int result; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]
  _DWORD v16[3]; // [esp+Ch] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  _DWORD *v19; // [esp+28h] [ebp+8h]
  int v20; // [esp+2Ch] [ebp+Ch]

  v4 = a2;
  v17 = a1;
  v18 = a2;
  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 && (_WORD)a3 == 69 )
  {
    xxxHotTrackMenu(0, v14, v15);
    v4 = v18;
  }
  v7 = v17;
  if ( (v17 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 12);
    v10 = 0;
    if ( v9 )
      v10 = *(_DWORD **)(v9 + 56);
    v11 = (_DWORD *)safe_cast_fnid_to_PTOOLTIPWND(v10);
    v19 = v11;
    if ( v11 )
    {
      v20 = *v11;
      if ( *v11 )
      {
        v16[2] = 0;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v16[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v16;
        v16[1] = v20;
        HMLockObject(v20);
        xxxResetTooltip(v19);
        ThreadUnlock1();
      }
    }
  }
  result = a4 & v7;
  if ( (a4 & v7 & 0x80u) != 0 )
    result = _PostMessage(v18, 675 - (a3 != 1), 0, 0);
  if ( (v17 & 0x40) != 0 && (a4 & 0x40) != 0 )
    return FindTimer(2, 1, 0);
  return result;
}
