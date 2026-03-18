/*
 * XREFs of ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C00894F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C0089508 (-FlushAndRundown@FxInterrupt@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::Dispose(FxInterrupt *this)
{
  FxInterrupt::FlushAndRundown(this);
  return 1;
}
