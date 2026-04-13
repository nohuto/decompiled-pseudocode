/*
 * XREFs of ?IndexOf@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18005AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAA@XZ @ 0x18005C434 (--0-$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@.c)
 *     ?IndexOfInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@IPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18005CA7C (-IndexOfInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicat.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005D714 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB560 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  _BYTE *v7; // rdi
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // r14
  int v11; // esi
  __int32 v12; // ecx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  char *i; // r13
  unsigned int v17; // r12d
  char v18; // al
  _BYTE *v19; // rbx
  __m128i v21; // [rsp+40h] [rbp-58h]
  _DWORD *v22; // [rsp+A0h] [rbp+8h]
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v4 = (__int64)a4;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (_DWORD *)(a1 + 104);
  v22 = (_DWORD *)(a1 + 104);
  v10 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    a2 = v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v13 = *(unsigned int *)(a1 + 72);
    v14 = 16 * v13;
    if ( !is_mul_ok(v13, 0x10uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v15;
    if ( v15 )
    {
      for ( i = v15; v13; --v13 )
      {
        XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(i);
        i += 16;
      }
      v5 = (__int64)a3;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 72) )
      {
        v11 = 0;
        do
        {
          v21 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v17);
          v18 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
          v7[16 * v17 + 8] = v18;
          if ( v18 )
          {
            *(_QWORD *)&v7[16 * v17] = v21.m128i_i64[0];
            _InterlockedIncrement((volatile signed __int32 *)v21.m128i_i64[0]);
          }
          else
          {
            v12 = v21.m128i_i32[0];
            *(_QWORD *)&v7[16 * v17] = v21.m128i_i64[0];
            if ( v21.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21.m128i_i64[0] + 8LL))(v21.m128i_i64[0]);
          }
          v8 = (unsigned int)(v8 + 1);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(a1 + 72) );
        v9 = v22;
      }
    }
    else
    {
      v11 = -2147024882;
    }
    v4 = (__int64)a4;
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
            -1,
            *(_QWORD *)(a1 + 88),
            *(_DWORD *)(a1 + 72),
            a2,
            v5,
            v4);
  }
  if ( v9 )
  {
    if ( *v9 == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_35;
    v11 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
            v12,
            (_DWORD)v7,
            v8,
            v23,
            v5,
            v4);
  }
  if ( (_DWORD)v8 )
  {
    v19 = v7;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v19);
      v19 += 16;
      --v8;
    }
    while ( v8 );
  }
LABEL_35:
  operator delete[](v7);
  return (unsigned int)v11;
}
