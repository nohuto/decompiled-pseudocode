/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C0051C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return g_pDwmApiPort != 0LL;
}
