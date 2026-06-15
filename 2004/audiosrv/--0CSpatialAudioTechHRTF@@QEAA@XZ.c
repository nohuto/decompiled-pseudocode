/*
 * XREFs of ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x18007296C
 * Callers:
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005F388 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060C14 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060CD0 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060DBC (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060E78 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800391F4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioTechHRTF *__fastcall CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(CSpatialAudioTechHRTF *this)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioTechHRTF::`vftable';
  return this;
}
