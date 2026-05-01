/*
 * XREFs of ?GetMany@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x18000C840
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V123@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@2@PEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D928 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Ga.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000ED08 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r13
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  char *v11; // r12
  _DWORD *v12; // rbx
  RTL_SRWLOCK *v13; // rcx
  int v14; // ebp
  unsigned __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // edi
  char *v18; // rbx
  unsigned int v19; // r13d
  char v20; // al
  unsigned int v21; // edi
  unsigned int v22; // r14d
  __int64 i; // rbx
  __int64 v24; // rbx
  char *v25; // rbx
  __int64 v26; // rdi
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-70h]
  _DWORD *v29; // [rsp+40h] [rbp-68h]
  __m128i v30; // [rsp+50h] [rbp-58h]
  __m128i v31; // [rsp+50h] [rbp-58h]
  unsigned int v34; // [rsp+C0h] [rbp+18h]

  v5 = a4;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v34 = 0;
  v10 = a3;
  if ( a3 )
  {
    memset_0(a4, 0, 8LL * a3);
    v7 = a1;
  }
  *a5 = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(v7 + 104);
  v29 = (_DWORD *)(v7 + 104);
  v13 = (RTL_SRWLOCK *)(v7 + 112);
  SRWLock = (PSRWLOCK)(v7 + 112);
  if ( *(_DWORD *)(v7 + 104) == 1 )
  {
    if ( SLODWORD(v13->Ptr) >= 0 )
      ++LODWORD(v13->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v13);
    v7 = a1;
  }
  v14 = 0;
  if ( *(_DWORD *)(v7 + 80) )
  {
    v15 = 16 * v10;
    if ( !is_mul_ok(v10, 0x10uLL) )
      v15 = -1LL;
    v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v16;
    if ( v16 )
    {
      if ( a3 )
      {
        do
        {
          *(_QWORD *)v16 = 0LL;
          v16[8] = 0;
          v16 += 16;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v14 = -2147024882;
LABEL_20:
      RoOriginateError((unsigned int)v14, 0LL);
      goto LABEL_43;
    }
    v7 = a1;
  }
  v34 = *(_DWORD *)(v7 + 72);
  if ( a2 > v34 )
  {
    v14 = -2147483637;
    goto LABEL_20;
  }
  if ( !*(_DWORD *)(v7 + 80) )
  {
    if ( !a3 )
      goto LABEL_43;
    v21 = a2;
    v22 = *(_DWORD *)(v7 + 72);
    while ( 1 )
    {
      if ( v21 >= v22 )
      {
LABEL_42:
        v9 = 0;
        v5 = a4;
        goto LABEL_43;
      }
      v31 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v21);
      v14 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 8)) )
      {
        *v5 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18005AE20 + 40LL))(
                qword_18005AE20,
                *(unsigned int *)(v31.m128i_i64[0] + 4),
                &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                v5);
      }
      else
      {
        *v5 = v31.m128i_i64[0];
        if ( !v31.m128i_i64[0] )
          goto LABEL_40;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31.m128i_i64[0] + 8LL))(v31.m128i_i64[0]);
      }
      v7 = a1;
LABEL_40:
      if ( v14 >= 0 )
      {
        ++v8;
        ++v21;
        ++v5;
        if ( v8 < a3 )
          continue;
      }
      goto LABEL_42;
    }
  }
  if ( a3 )
  {
    v17 = a2;
    v18 = v11;
    v19 = *(_DWORD *)(v7 + 72);
    do
    {
      if ( v17 >= v19 )
        break;
      v30 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v17);
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
      v18[8] = v20;
      if ( v20 )
      {
        *(_QWORD *)v18 = v30.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v30.m128i_i64[0]);
      }
      else
      {
        *(_QWORD *)v18 = v30.m128i_i64[0];
        if ( v30.m128i_i64[0] )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30.m128i_i64[0] + 8LL))(v30.m128i_i64[0]);
          v7 = a1;
        }
      }
      ++v9;
      ++v17;
      v18 += 16;
    }
    while ( v9 < a3 );
    v12 = v29;
    v5 = a4;
  }
  v14 = 0;
LABEL_43:
  if ( v12 )
  {
    if ( *v12 == 1 )
      --LODWORD(SRWLock->Ptr);
    else
      ReleaseSRWLockShared(SRWLock);
  }
  if ( v14 < 0 )
  {
LABEL_54:
    if ( v8 )
    {
      v24 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v24;
      }
      while ( v24 );
    }
    if ( v8 < v9 )
    {
      v25 = &v11[16 * v8];
      v26 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v25);
        v25 += 16;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i + a2 >= v34 )
          break;
        v14 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *,XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::ResolveDemand(
                &v11[16 * (unsigned int)i],
                &v5[i]);
        if ( v14 < 0 )
          goto LABEL_54;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete(v11, (const struct std::nothrow_t *)v7);
  return (unsigned int)v14;
}
