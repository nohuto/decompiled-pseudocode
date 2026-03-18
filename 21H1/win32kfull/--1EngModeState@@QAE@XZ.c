/*
 * XREFs of ??1EngModeState@@QAE@XZ @ 0xF623E
 * Callers:
 *     _W32kCddClipRegion@12 @ 0x1D4779 (_W32kCddClipRegion@12.c)
 * Callees:
 *     <none>
 */

void __thiscall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_DWORD *)this )
    *(_DWORD *)(*(_DWORD *)this + 180) &= ~0x20u;
}
