/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800CB010
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180074D80 (-Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ @ 0x180074D90 (-Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ @ 0x180074DA0 (-Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ @ 0x180074DB0 (-Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x180074DC0 (-Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Release(CPerEndpointVolumeAudioSession *this)
{
  return CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
