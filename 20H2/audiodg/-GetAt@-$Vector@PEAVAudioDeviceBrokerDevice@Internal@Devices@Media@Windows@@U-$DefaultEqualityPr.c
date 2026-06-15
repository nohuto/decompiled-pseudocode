/*
 * XREFs of ?GetAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x140022A30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAU23456@@Z @ 0x14001F0DC (--$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@.c)
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F220 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400596B4 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v10, a1 + 72, &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
    }
  }
  if ( v10 )
  {
    v7 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
