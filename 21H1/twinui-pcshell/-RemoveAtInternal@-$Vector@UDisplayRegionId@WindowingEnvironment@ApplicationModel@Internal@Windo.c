/*
 * XREFs of ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18015C460
 * Callers:
 *     ?RemoveAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18015C440 (-RemoveAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 *     ?RemoveAtEnd@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18015C450 (-RemoveAtEnd@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180130434 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180136078 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x18015531C (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180156050 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18015C2C8 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18015CEF0 (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x18015FFD4 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rsi
  int v7; // ebx
  unsigned int v8; // eax
  int *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  RTL_SRWLOCK *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-18h]
  _BYTE v20[16]; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+A8h] [rbp+48h]

  v21 = 0;
  v18 = -2147483627;
  v6 = 0LL;
  v19 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v17, (RTL_SRWLOCK *)(a1 + 120), &v21);
  v7 = v21;
  if ( v21 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 88);
    if ( a3 )
      a2 = v8 - 1;
    if ( a2 >= v8 )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v21 = -2147483637;
    }
    if ( v7 >= 0 )
    {
      v9 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                    (__int64)v20,
                    *(_DWORD *)(a1 + 168),
                    (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v18, v9);
      v21 = XWinRT::detail::ReentrancyGuard<1>::hr(&v18);
      v7 = v21;
      if ( v21 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 104);
        v11 = *(_DWORD *)(a1 + 88);
        v22 = *(_DWORD *)(v10 + 4LL * a2);
        if ( a2 < v11 - 1
          && memmove_s(
               (void *const)(v10 + 4LL * a2),
               4LL * (v11 - a2 - 1),
               (const void *const)(v10 + 4LL * (a2 + 1)),
               4LL * (v11 - a2 - 1)) )
        {
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v21 = -2147418113;
        }
        if ( v7 >= 0 )
        {
          v12 = *(_DWORD *)(a1 + 92);
          ++*(_DWORD *)(a1 + 136);
          if ( --*(_DWORD *)(a1 + 88) < v12 / 3 )
          {
            v13 = 1;
            if ( v12 - 1 >= v12 - v12 / 3 )
              v13 = v12 / 3;
            v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                   a1,
                   v12 - v13);
            v21 = v7;
          }
        }
      }
      v6 = v19;
    }
  }
  if ( v17 )
  {
    v14 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      LODWORD(v14->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v14);
    v17 = 0LL;
  }
  if ( v7 >= 0 )
  {
    v16 = a2;
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v18,
           (RTL_SRWLOCK *)(a1 + 144),
           (a1 + 16) & -(__int64)(a1 != 0),
           2u,
           v16);
    v21 = v7;
  }
  if ( v6 )
    *v6 = 0;
  return (unsigned int)v7;
}
