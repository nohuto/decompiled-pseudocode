/*
 * XREFs of ??1EXLATEOBJ@@QAE@XZ @ 0x1CC63A
 * Callers:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __thiscall EXLATEOBJ::~EXLATEOBJ(EXLATEOBJ *this)
{
  EXLATEOBJ::vAltUnlock(this);
}
