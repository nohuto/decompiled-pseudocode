/*
 * XREFs of ?CancelPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x1C001B3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CContentResourceState::CancelPendingUpdates(CContentResourceState *this)
{
  *((_BYTE *)this + 56) &= ~2u;
  *((_BYTE *)this + 32) &= 0xF3u;
}
