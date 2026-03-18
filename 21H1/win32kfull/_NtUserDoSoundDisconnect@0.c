/*
 * XREFs of _NtUserDoSoundDisconnect@0 @ 0xD4DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall NtUserDoSoundDisconnect(CUserPlaySound *this)
{
  return CUserPlaySound::Disconnect(this);
}
