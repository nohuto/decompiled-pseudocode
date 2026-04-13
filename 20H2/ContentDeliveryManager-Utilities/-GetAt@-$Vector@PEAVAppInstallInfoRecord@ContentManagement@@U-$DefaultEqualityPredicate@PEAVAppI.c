/*
 * XREFs of ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18005CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18005E588 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  _DWORD *v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  int v9; // edi
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]
  __m128i v13; // [rsp+40h] [rbp-28h]
  _DWORD *v14; // [rsp+70h] [rbp+8h]

  v4 = a2;
  *a3 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = a1 + 104;
  v7 = (_DWORD *)(a1 + 104);
  v14 = (_DWORD *)(a1 + 104);
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v13 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    if ( v12 )
    {
      v11 = v13.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v13.m128i_i64[0]);
      v7 = v14;
    }
    else
    {
      v11 = v13.m128i_i64[0];
      if ( v13.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13.m128i_i64[0] + 8LL))(v13.m128i_i64[0]);
    }
    v9 = 0;
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v6 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  if ( v9 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
                           &v11,
                           a3);
  return (unsigned int)v9;
}
