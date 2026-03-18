/*
 * XREFs of ?xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z @ 0x141BD2
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 */

void __thiscall xxxProcessMinimizeHungThreadEvent(struct tagQ *this)
{
  if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 23) & 0x10) == 0 )
  {
    SetVisible(this, 1u);
    if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 23) & 0x20) == 0 )
      xxxMinMaximizeEx(this, (struct tagWND *)7, 1u, 0, 0, 0);
  }
}
