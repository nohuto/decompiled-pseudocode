/*
 * XREFs of _ShouldHaveShadow@4 @ 0xA9746
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

int __thiscall ShouldHaveShadow(_DWORD *this)
{
  int v2; // esi
  int v4; // eax
  int v5; // eax

  v2 = 0;
  if ( _IsTopLevelWindow(this)
    && !_gbDisableAlpha
    && !gcOverlays
    && ((unsigned int)_gpdwCPUserPreferencesMask & 0x80040000) == 0x80040000
    && (*(_BYTE *)(*(_DWORD *)(this[19] + 4) + 10) & 2) != 0 )
  {
    v4 = this[2];
    if ( *(_DWORD *)(v4 + 340) <= 0x9900u )
      v5 = *(_DWORD *)(v4 + 352);
    else
      v5 = 0;
    if ( (v5 & 0x400000) == 0
      && ((*(_WORD *)(this[5] + 30) & 0x3FFF) != 0x29C
       || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000200) == 0x80000200
       || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002) )
    {
      return 1;
    }
  }
  return v2;
}
