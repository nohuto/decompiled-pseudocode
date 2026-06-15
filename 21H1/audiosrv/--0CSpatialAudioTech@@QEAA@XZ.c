/*
 * XREFs of ??0CSpatialAudioTech@@QEAA@XZ @ 0x180039204
 * Callers:
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180061990 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x18007286C (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 * Callees:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180039250 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 */

CSpatialAudioTech *__fastcall CSpatialAudioTech::CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 32, 0, 0x300uLL);
  *((_QWORD *)this + 1) = CSpatialAudioTech::GetAtmosCheck();
  return this;
}
