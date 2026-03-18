/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C012BE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C0122F80 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 */

__int64 __fastcall NtUserDoSoundDisconnect(CUserPlaySound *a1)
{
  return CUserPlaySound::Disconnect(a1);
}
