/*
 * XREFs of ??1NEEDDDILOCK@@QAE@XZ @ 0x1DA6CE
 * Callers:
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall NEEDDDILOCK::~NEEDDDILOCK(NEEDDDILOCK *this)
{
  if ( *(_DWORD *)this )
  {
    GreUnlockDisplayDevice(*(_DWORD *)(*(_DWORD *)this + 28));
    *(_DWORD *)this = 0;
  }
}
