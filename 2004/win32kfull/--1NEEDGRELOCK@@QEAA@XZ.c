/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026DFB0
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C02B78FC (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}
