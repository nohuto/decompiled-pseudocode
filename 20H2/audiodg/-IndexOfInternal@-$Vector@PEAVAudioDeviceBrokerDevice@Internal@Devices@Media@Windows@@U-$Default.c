/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@IPEAU62785@PEAIPEAE@Z @ 0x140024164
 * Callers:
 *     ?IndexOf@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAIPEAE@Z @ 0x140023ED0 (-IndexOf@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEquality.c)
 * Callees:
 *     ??$?RUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@0PEA_N@Z @ 0x14001EE40 (--$-RUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEA.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::InterfaceEquals::operator()<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
              v6,
              a4,
              *a2,
              &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
