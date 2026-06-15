/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x140026740
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x140026700 (-RemoveAt@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualit.c)
 *     ?RemoveAtEnd@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140026720 (-RemoveAtEnd@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqua.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F1E0 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025A38 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140026D28 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     memmove_s @ 0x1400420A4 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140054378 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A6D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // esi
  unsigned int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  XWinRT::SerializingLockPolicy::Write(v13, a1 + 72, &v14);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( a3 )
      a2 = v7 - 1;
    if ( a2 >= v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v14, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v6 = 0;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(&v15);
      v15 = v8;
      v9 = *(_DWORD *)(a1 + 40);
      if ( a2 < v9 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (v9 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (v9 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 88);
        --*(_DWORD *)(a1 + 40);
        v10 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) < v10 / 3 )
        {
          v11 = 1;
          if ( v10 - 1 >= v10 - v10 / 3 )
            v11 = v10 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v10 - v11);
        }
      }
    }
  }
  if ( v13[0] )
  {
    if ( *(_DWORD *)v13[0] == 1 )
      *(_DWORD *)(v13[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v13[0] + 8LL));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(&v15);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
