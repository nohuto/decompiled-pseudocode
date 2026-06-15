/*
 * XREFs of ?InsertAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUEventRegistrationToken@@_N@Z @ 0x140024878
 * Callers:
 *     ?Append@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140021EE0 (-Append@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wi.c)
 *     ?InsertAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x1400246B0 (-InsertAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025A38 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140026D28 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     memmove_s @ 0x1400420A4 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140054378 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A6D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // r9d
  int v11; // edx
  unsigned int v12; // eax
  RTL_SRWLOCK *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  XWinRT::SerializingLockPolicy::Write(&v16, a1 + 72, &v17);
  v8 = v17;
  if ( v17 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 40);
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 40);
    if ( a2 <= v9 )
    {
      if ( v9 >= 0x7FFFFFFF )
        v8 = -2147024882;
      if ( v8 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v17, *(unsigned __int8 *)(a1 + 93), a1 + 96);
        v8 = 0;
        v10 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
          goto LABEL_13;
        v11 = 1;
        if ( v10 + 1 <= (v10 >> 1) + v10 )
          v11 = v10 >> 1;
        v8 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
               a1,
               v10 + v11);
        if ( v8 >= 0 )
        {
LABEL_13:
          v12 = *(_DWORD *)(a1 + 40);
          if ( a2 < v12
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
                 8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
                 8LL * (v12 - a2)) )
          {
            v8 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v8 >= 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = a3;
            ++*(_DWORD *)(a1 + 40);
            ++*(_DWORD *)(a1 + 88);
          }
        }
      }
    }
    else
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v16 )
  {
    v13 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v13->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v13);
  }
  if ( v8 >= 0 )
  {
    v15 = a2;
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v17,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           1LL,
                           v15);
  }
  return (unsigned int)v8;
}
