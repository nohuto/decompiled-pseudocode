/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C026E694
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C02B78FC (GreCreateHalftonePalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall SEMOBJ::~SEMOBJ(SEMOBJ *this)
{
  SEMOBJ::vUnlock(this);
}
