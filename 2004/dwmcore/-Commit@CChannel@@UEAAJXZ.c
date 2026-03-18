/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x180028080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  return CChannel::SynchronizedCommit(this, 0LL);
}
