/*
 * XREFs of ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140045068
 * Callers:
 *     ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x140044F0C (--0-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x140044FB0 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140012964 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(
        CSystemAudioDeviceOffloadGraph *this)
{
  CSystemAudioDeviceOffloadGraph *result; // rax

  *((_DWORD *)this + 98) = 0;
  *((_OWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 440) = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *((_QWORD *)this + 56) = 0LL;
  result = this;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
