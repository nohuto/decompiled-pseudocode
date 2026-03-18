/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z @ 0x170B43
 * Callers:
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     ?IsDraggingForegroundModernApp@@YGHPAUtagWND@@@Z @ 0x171804 (-IsDraggingForegroundModernApp@@YGHPAUtagWND@@@Z.c)
 *     ?IsProcessPriorityByClassBackground@PriorityBoost@@YG_NPBUtagPROCESSINFO@@@Z @ 0x18532F (-IsProcessPriorityByClassBackground@PriorityBoost@@YG_NPBUtagPROCESSINFO@@@Z.c)
 *     _SetForegroundPriority@8 @ 0x18543F (_SetForegroundPriority@8.c)
 */

void __thiscall AdjustProcessPriorityForDrag(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  struct tagWND *v4; // [esp+0h] [ebp-Ch]
  PriorityBoost *v5; // [esp+0h] [ebp-Ch]
  PriorityBoost *v6; // [esp+0h] [ebp-Ch]
  const struct tagPROCESSINFO *v7; // [esp+4h] [ebp-8h]
  const struct tagPROCESSINFO *v8; // [esp+4h] [ebp-8h]

  v2 = this[46];
  v3 = *(_DWORD *)(this[2] + 8);
  if ( (v2 & 0x100000) != 0 )
  {
    if ( !IsDraggingForegroundModernApp(v4) )
    {
      if ( v3 != _gptiForeground )
        return;
      SetForegroundPriority(v3, 0);
      goto LABEL_8;
    }
    if ( PriorityBoost::IsProcessPriorityByClassBackground(v5, v7)
      && !PriorityBoost::IsProcessPriorityByClassBackground(v6, v8) )
    {
      SetForegroundPriority(v3, 1);
LABEL_8:
      this[46] |= 0x40000000u;
    }
  }
  else if ( (v2 & 0x40000000) != 0 )
  {
    if ( IsDraggingForegroundModernApp(v4) )
    {
      if ( v3 != _gptiForeground )
        SetForegroundPriority(v3, 0);
    }
    else if ( v3 == _gptiForeground )
    {
      SetForegroundPriority(v3, 1);
    }
  }
}
