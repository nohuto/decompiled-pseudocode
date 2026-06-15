/*
 * XREFs of ??0CSpatialAudioTech@@QEAA@XZ @ 0x180038AE4
 * Callers:
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800612F8 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180071EAC (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 * Callees:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180038B30 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 */

CSpatialAudioTech *__fastcall CSpatialAudioTech::CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 32, 0, 0x300uLL);
  *((_QWORD *)this + 1) = CSpatialAudioTech::GetAtmosCheck();
  return this;
}
