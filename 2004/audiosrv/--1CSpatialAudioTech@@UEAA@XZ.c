/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x1801273B0
 * Callers:
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x1800729A0 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x180127440 (--_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x180127530 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 */

void __fastcall CSpatialAudioTech::~CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    CSpatialAudioTech::FreeAtmosCheck();
    *((_QWORD *)this + 1) = 0LL;
  }
}
