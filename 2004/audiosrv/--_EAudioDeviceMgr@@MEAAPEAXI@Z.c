/*
 * XREFs of ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x18013DD2C
 * Callers:
 *     ??_EAudioDeviceMgr@@OBA@EAAPEAXI@Z @ 0x180075AD0 (--_EAudioDeviceMgr@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x18013DC40 (--1AudioDeviceMgr@@MEAA@XZ.c)
 */

AudioDeviceMgr *__fastcall AudioDeviceMgr::`vector deleting destructor'(AudioDeviceMgr *this, char a2)
{
  AudioDeviceMgr::~AudioDeviceMgr(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
