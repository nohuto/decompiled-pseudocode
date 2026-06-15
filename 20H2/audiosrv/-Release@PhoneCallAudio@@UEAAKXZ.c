/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180067BD0
 * Callers:
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x1800749A0 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x1800749B0 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBI@EAAKXZ @ 0x1800749C0 (-Release@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  return CUnknown::Release((PhoneCallAudio *)((char *)this + 24));
}
