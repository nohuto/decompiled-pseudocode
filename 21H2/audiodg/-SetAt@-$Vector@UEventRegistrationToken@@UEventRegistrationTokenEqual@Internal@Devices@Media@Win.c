/*
 * XREFs of ?SetAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x1400274D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025A38 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     memmove_s @ 0x1400420A4 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140054378 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A6D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rbp
  int v6; // edi
  RTL_SRWLOCK *v7; // rcx
  int Destination; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h] BYREF

  Destination = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write(&v10, a1 + 72, &Destination);
  v6 = Destination;
  if ( Destination >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&Destination, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v6 = 0;
      if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v4), 8uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) = a3;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v10 )
  {
    v7 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
