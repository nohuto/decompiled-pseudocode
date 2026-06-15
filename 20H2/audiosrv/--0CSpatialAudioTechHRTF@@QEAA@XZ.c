/*
 * XREFs of ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180071EAC
 * Callers:
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005EF44 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060D3C (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060DF8 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060EE4 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060FA0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180038AE4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioTechHRTF *__fastcall CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(CSpatialAudioTechHRTF *this)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioTechHRTF::`vftable';
  return this;
}
