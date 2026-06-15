/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140044A1C
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14004494C (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140012964 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  *((_DWORD *)this + 92) = 0;
  *(_OWORD *)((char *)this + 376) = 0LL;
  *(_OWORD *)((char *)this + 392) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_BYTE *)this + 416) = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  return this;
}
