/*
 * XREFs of ??0InteractiveControlSettings@@QAE@XZ @ 0xD657A
 * Callers:
 *     ??0InteractiveControlManager@@AAE@XZ @ 0xD6520 (--0InteractiveControlManager@@AAE@XZ.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QAEJXZ @ 0xD7548 (-ReadSettings@InteractiveControlSettings@@QAEJXZ.c)
 */

InteractiveControlSettings *__thiscall InteractiveControlSettings::InteractiveControlSettings(
        InteractiveControlSettings *this)
{
  unsigned int i; // esi
  int v3; // ecx
  int v4; // eax

  for ( i = 0; i < 87; i += 3 )
  {
    *((_DWORD *)this + 2 * dword_24D304[i]) = dword_24D308[i];
    v3 = dword_24D304[i];
    v4 = dword_24D308[i];
    *((_DWORD *)this + 2 * v3 + 1) = v4;
  }
  InteractiveControlSettings::ReadSettings(this);
  return this;
}
