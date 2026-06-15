/*
 * XREFs of ?RemoveAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x140026848
 * Callers:
 *     ?RemoveAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x140026670 (-RemoveAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@.c)
 *     ?RemoveAtEnd@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140026690 (-RemoveAtEnd@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Med.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025964 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140026C88 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     memmove_s @ 0x140041F14 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1400541DC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A4D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  XWinRT::SerializingLockPolicy::Write(&v13, a1 + 72, &v12);
  v6 = v12;
  if ( v12 >= 0 )
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
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v12, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v8 = *(_DWORD *)(a1 + 40);
      v6 = 0;
      if ( a2 < v8 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (v8 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (v8 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 44);
        ++*(_DWORD *)(a1 + 88);
        if ( --*(_DWORD *)(a1 + 40) < v9 / 3 )
        {
          v10 = 1;
          if ( v9 - 1 >= v9 - v9 / 3 )
            v10 = v9 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v9 - v10);
        }
      }
    }
  }
  if ( v13 )
  {
    if ( *(_DWORD *)v13 == 1 )
      *(_DWORD *)(v13 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v13 + 8));
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
