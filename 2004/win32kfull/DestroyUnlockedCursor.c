/*
 * XREFs of DestroyUnlockedCursor @ 0x1C0122420
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

char __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return _DestroyCursor(a1, 2u);
}
