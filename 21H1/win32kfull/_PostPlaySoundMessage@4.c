/*
 * XREFs of _PostPlaySoundMessage@4 @ 0xAC482
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall PostPlaySoundMessage(unsigned int a1)
{
  return CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, a1);
}
