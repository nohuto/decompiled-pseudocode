/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C026D074
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall SEMOBJ::~SEMOBJ(SEMOBJ *this)
{
  SEMOBJ::vUnlock(this);
}
