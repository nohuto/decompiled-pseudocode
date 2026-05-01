/*
 * XREFs of ?GetMany@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIChainLink@Chaining@Shell@25@PEAI@Z @ 0x18017CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008E3B4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@1@V231@@Z @ 0x180143018 (--$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Inte.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18014317C (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180148A38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18014F224 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014F8DC (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x18017F510 (-Localize@ReferencedGitCookie@-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@det.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5)
{
  __int64 *v5; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // r15d
  char *v11; // r13
  const struct std::nothrow_t *v12; // rdx
  size_t v13; // rax
  char *v14; // rax
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 *v20; // rbx
  __int64 v21; // rcx
  RTL_SRWLOCK *v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  char *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // rbx
  char *v28; // rbx
  __int64 v29; // rsi
  volatile signed __int32 *v30; // rcx
  int v32; // [rsp+20h] [rbp-68h] BYREF
  RTL_SRWLOCK *v33; // [rsp+28h] [rbp-60h] BYREF
  __m128i v34[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+8h]

  v5 = a4;
  v8 = a3;
  v9 = 0;
  v10 = 0;
  v35 = 0;
  v32 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v33, (RTL_SRWLOCK *)(a1 + 104), &v32);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_11;
  v13 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10uLL) )
    v13 = -1LL;
  v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v14;
  v34[0].m128i_i64[0] = (__int64)v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      16LL,
      v8,
      (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>);
  else
    v11 = 0LL;
  if ( v11 )
  {
LABEL_11:
    v15 = v32;
  }
  else
  {
    v15 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 72);
    v35 = v16;
    v17 = a2;
    if ( a2 > v16 )
    {
      v15 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = v35;
      v17 = a2;
    }
    if ( v15 >= 0 && a3 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        do
        {
          v18 = v10 + v17;
          if ( v18 >= v16 )
            break;
          v34[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
          v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
                  (__int64)&v11[16 * v10],
                  v34);
          if ( v15 < 0 )
            break;
          ++v10;
          v16 = v35;
          v17 = a2;
        }
        while ( v10 < a3 );
      }
      else
      {
        v19 = v17;
        v20 = a4;
        do
        {
          if ( v19 >= v16 )
            break;
          v34[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v19);
          v15 = 0;
          v21 = v34[0].m128i_i64[0];
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v34[0], 8)) )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::ReferencedGitCookie::Localize(
                    v34[0].m128i_i64[0],
                    v20);
          }
          else
          {
            *v20 = v34[0].m128i_i64[0];
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          }
          if ( v15 < 0 )
            break;
          ++v9;
          ++v19;
          ++v20;
          v16 = v35;
        }
        while ( v9 < a3 );
        v5 = a4;
      }
    }
  }
  if ( v33 )
  {
    v22 = v33 + 1;
    if ( LODWORD(v33->Ptr) == 1 )
      --LODWORD(v22->Ptr);
    else
      ReleaseSRWLockShared(v22);
  }
  if ( v15 < 0 )
  {
LABEL_48:
    if ( v9 )
    {
      v27 = v9;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v5++);
        --v27;
      }
      while ( v27 );
    }
    if ( v9 < v10 )
    {
      v28 = &v11[16 * v9];
      v29 = v10 - v9;
      do
      {
        v30 = *(volatile signed __int32 **)v28;
        if ( v28[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v30);
        }
        else if ( v30 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v28[8] = 0;
        *(_QWORD *)v28 = 0LL;
        v28 += 16;
        --v29;
      }
      while ( v29 );
    }
  }
  else
  {
    if ( v10 )
    {
      v23 = 0;
      v24 = a3;
      if ( a3 )
      {
        v25 = v11;
        v26 = v5;
        v12 = (const struct std::nothrow_t *)v35;
        while ( v23 + a2 < (unsigned int)v12 )
        {
          *v26 = 0LL;
          v15 = 0;
          if ( v25[8] )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::ReferencedGitCookie::Localize(
                    *(_QWORD *)v25,
                    v26);
            if ( v15 >= 0 )
            {
              XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(*(volatile signed __int32 **)v25);
              v25[8] = 0;
              *(_QWORD *)v25 = 0LL;
            }
            v12 = (const struct std::nothrow_t *)v35;
            v24 = a3;
          }
          else
          {
            *v26 = *(_QWORD *)v25;
            *(_QWORD *)v25 = 0LL;
          }
          if ( v15 < 0 )
            goto LABEL_48;
          ++v9;
          ++v23;
          ++v26;
          v25 += 16;
          if ( v23 >= v24 )
            break;
        }
      }
    }
    *a5 = v9;
  }
  operator delete(v11, v12);
  return (unsigned int)v15;
}
