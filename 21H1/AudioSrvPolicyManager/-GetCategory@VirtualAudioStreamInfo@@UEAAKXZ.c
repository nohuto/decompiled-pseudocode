/*
 * XREFs of ?GetCategory@VirtualAudioStreamInfo@@UEAAKXZ @ 0x18000F180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualAudioStreamInfo::GetCategory(VirtualAudioStreamInfo *this)
{
  return *((unsigned int *)this + 6);
}
