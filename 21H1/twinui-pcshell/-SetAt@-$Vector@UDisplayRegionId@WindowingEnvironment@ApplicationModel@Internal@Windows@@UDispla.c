/*
 * XREFs of ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x18015D640
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180130434 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180136078 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x18015531C (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180156050 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18015C2C8 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x18015FFD4 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v3; // r15
  _DWORD *v6; // r14
  int v7; // edi
  int *v8; // rax
  RTL_SRWLOCK *v9; // rcx
  int v11; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-18h]
  _BYTE v15[16]; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  int Destination; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  v13 = -2147483627;
  v6 = 0LL;
  v16 = 0;
  v14 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v12, (RTL_SRWLOCK *)(a1 + 120), &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 88) )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = -2147483637;
    }
    if ( v7 >= 0 )
    {
      v8 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                    (__int64)v15,
                    *(_DWORD *)(a1 + 168),
                    (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v13, v8);
      v16 = XWinRT::detail::ReentrancyGuard<1>::hr(&v13);
      v7 = v16;
      if ( v16 >= 0 )
      {
        if ( memmove_s(&Destination, 4uLL, (const void *const)(*(_QWORD *)(a1 + 104) + 4 * v3), 4uLL) )
        {
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v16 = -2147418113;
        }
        if ( v7 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v3) = a3;
          ++*(_DWORD *)(a1 + 136);
        }
      }
      v6 = v14;
    }
  }
  if ( v12 )
  {
    v9 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
    v12 = 0LL;
  }
  if ( v7 >= 0 )
  {
    v11 = v3;
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v13,
           (RTL_SRWLOCK *)(a1 + 144),
           (a1 + 16) & -(__int64)(a1 != 0),
           3u,
           v11);
    v16 = v7;
  }
  if ( v6 )
    *v6 = 0;
  return (unsigned int)v7;
}
