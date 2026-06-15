/*
 * XREFs of ?IndexOf@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAIPEAE@Z @ 0x140023ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001EA20 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAU23456@@Z @ 0x14001F0DC (--$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@.c)
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F220 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ?IndexOfInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@IPEAU62785@PEAIPEAE@Z @ 0x140024164 (-IndexOfInternal@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$Default.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400596B4 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 *v8; // r14
  __int64 v9; // rdi
  RTL_SRWLOCK *v10; // rcx
  int v11; // ebx
  size_t v12; // rax
  __int64 i; // rbp
  __int64 *v14; // rsi
  int v16; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v17, a1 + 72, &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v12 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v12 = -1LL;
      v8 = (__int64 *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          v11 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
                  &v8[i],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i));
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_21;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::IndexOfInternal(
            (_DWORD)v10,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( (_DWORD)v9 )
  {
    v14 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(v14++);
      --v9;
    }
    while ( v9 );
  }
LABEL_21:
  operator delete(v8);
  return (unsigned int)v11;
}
