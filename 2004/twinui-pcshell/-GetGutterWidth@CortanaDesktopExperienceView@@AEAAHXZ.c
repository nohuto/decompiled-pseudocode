/*
 * XREFs of ?GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ @ 0x18020C428
 * Callers:
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x18020A278 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020FC08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetGutterWidth(CortanaDesktopExperienceView *this)
{
  if ( (unsigned int)(*((_DWORD *)this + 35) - 3) <= 1 || *((_DWORD *)this + 62) == 2 )
    return 0LL;
  else
    return *((_BYTE *)this + 253) != 0 ? 56 : 48;
}
