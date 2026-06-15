/*
 * XREFs of ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140013240
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140013190 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
