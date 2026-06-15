/*
 * XREFs of ?ReplaceAll@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x140026BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025A38 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140054378 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A6D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  int v6; // ecx
  _QWORD *v7; // rsi
  unsigned int v8; // r14d
  unsigned int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // r15
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( a2 )
  {
    v7 = malloc(8LL * a2);
    if ( v7 )
    {
      v8 = a2;
      v6 = 0;
    }
    else
    {
      v3 = -2147024882;
      v18 = -2147024882;
      v6 = -2147024882;
    }
  }
  if ( v6 >= 0 )
  {
    v10 = 0;
    if ( v8 )
    {
      v11 = v8;
      v18 = 0;
      v12 = a3 - (_QWORD)v7;
      v13 = v7;
      v10 = v8;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + v12);
        ++v13;
        --v11;
      }
      while ( v11 );
    }
    XWinRT::SerializingLockPolicy::Write(&v17, a1 + 72, &v18);
    v3 = v18;
    if ( v18 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v14 = *(_QWORD **)(a1 + 56);
      v3 = 0;
      *(_DWORD *)(a1 + 48) = 0;
      ++*(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 56) = v7;
      v7 = v14;
      *(_DWORD *)(a1 + 40) = v10;
      *(_DWORD *)(a1 + 44) = v8;
    }
    if ( v17 )
    {
      v15 = v17 + 1;
      if ( LODWORD(v17->Ptr) == 1 )
        LODWORD(v15->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v15);
    }
  }
  if ( v7 )
    free(v7);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
