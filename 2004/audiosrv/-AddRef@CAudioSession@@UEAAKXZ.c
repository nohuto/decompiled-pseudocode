/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x18004D590
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180074D60 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180074D70 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x180074D80 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180074D90 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x180074DA0 (-AddRef@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
