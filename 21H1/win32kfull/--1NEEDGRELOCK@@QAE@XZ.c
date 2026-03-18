/*
 * XREFs of ??1NEEDGRELOCK@@QAE@XZ @ 0x1CC63F
 * Callers:
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __thiscall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}
