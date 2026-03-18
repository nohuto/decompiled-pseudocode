/*
 * XREFs of ?ForceForegroundChangeOnMinimize@@YGHPAUtagWND@@0@Z @ 0xAD5E8
 * Callers:
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 */

BOOL __fastcall ForceForegroundChangeOnMinimize(int a1, int a2)
{
  int v2; // esi
  BOOL result; // eax
  int v5; // edx
  int v6; // ecx

  v2 = *(_DWORD *)(a1 + 8);
  result = 0;
  if ( (*(_DWORD *)(v2 + 688) & 0x40000) != 0 && *(_DWORD *)(v2 + 796) == a1 )
  {
    v5 = *(_DWORD *)(v2 + 236);
    if ( v5 == _gpqForeground && *(_DWORD *)(v5 + 64) == a1 )
    {
      v6 = *(_DWORD *)(v2 + 800);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 8) == _gptiForeground
          && *(_DWORD *)(*(_DWORD *)(a2 + 8) + 236) != _gpqForeground
          && !CanForceForeground(*(_DWORD **)(v2 + 232)) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
