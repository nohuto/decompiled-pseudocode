/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x180126720
 * Callers:
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x180071EE0 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x1801267B0 (--_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1801268A0 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
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
