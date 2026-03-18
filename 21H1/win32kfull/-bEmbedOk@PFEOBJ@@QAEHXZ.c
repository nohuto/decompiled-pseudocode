/*
 * XREFs of ?bEmbedOk@PFEOBJ@@QAEHXZ @ 0x22937D
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

BOOL __thiscall PFEOBJ::bEmbedOk(int **this)
{
  struct tagPvtData *v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  v3 = **this;
  v1 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v3);
  return v1 && (*((_BYTE *)v1 + 8) & 0xC) != 0;
}
