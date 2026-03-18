/*
 * XREFs of DestroyUnlockedCursor @ 0x1C0123770
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

char __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return _DestroyCursor(a1, 2LL, a3, a4);
}
