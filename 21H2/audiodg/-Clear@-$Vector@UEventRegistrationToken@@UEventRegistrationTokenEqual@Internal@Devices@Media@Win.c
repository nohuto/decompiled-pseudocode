/*
 * XREFs of ?Clear@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1400222F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025A38 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?_EraseAll@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAUEventRegistrationToken@@PEAI@Z @ 0x1400281A4 (-_EraseAll@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media.c)
 *     ?_Free@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@CAXPEAUEventRegistrationToken@@I@Z @ 0x140028234 (-_Free@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Win.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140054378 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A6D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::Clear(
        __int64 a1)
{
  __int64 v2; // rbx
  bool v3; // bp
  int v4; // edi
  int v5; // ebx
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v3 = 0;
  XWinRT::SerializingLockPolicy::Write(&v11, a1 + 72, &v9);
  v4 = v9;
  if ( v9 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v9, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v5 = *(_DWORD *)(a1 + 40);
    v4 = 0;
    Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::_EraseAll(
      a1,
      &v10,
      &v9);
    v6 = v5 == 0;
    v2 = v10;
    v3 = !v6;
  }
  if ( v11 )
  {
    v7 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::_Free(v2);
  if ( v4 >= 0 && v3 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v9,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           0LL,
                           0LL);
  return (unsigned int)v4;
}
