/*
 * XREFs of ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x1400436C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013158 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceSharedBase *__fastcall CSystemAudioDeviceSharedBase::`scalar deleting destructor'(
        CSystemAudioDeviceSharedBase *this,
        char a2)
{
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
