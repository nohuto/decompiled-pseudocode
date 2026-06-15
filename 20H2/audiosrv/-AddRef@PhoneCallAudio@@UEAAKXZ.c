/*
 * XREFs of ?AddRef@PhoneCallAudio@@UEAAKXZ @ 0x18004D640
 * Callers:
 *     ?AddRef@PhoneCallAudio@@W7EAAKXZ @ 0x180074940 (-AddRef@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x180074950 (-AddRef@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x180074960 (-AddRef@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(PhoneCallAudio *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
