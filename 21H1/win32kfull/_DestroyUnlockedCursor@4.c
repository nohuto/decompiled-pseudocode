/*
 * XREFs of _DestroyUnlockedCursor@4 @ 0x7B53C
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

char __stdcall DestroyUnlockedCursor(_DWORD *a1)
{
  return _DestroyCursor(a1, 2);
}
