/*
 * XREFs of ??_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x14004BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x14004B12C (--1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::~AudioDeviceModuleNotificationEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
