/*
 * XREFs of ?Initialize@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x18017E79C
 * Callers:
 *     ??$?0PEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIChainLink@Chaining@Shell@Internal@Windows@@PEAJ@Z @ 0x180177F8C (--$-0PEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@UIChainLink@.c)
 *     ?ReplaceAll@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@25@@Z @ 0x1801807E0 (-ReplaceAll@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1801488E0 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014F72C (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::Initialize(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  volatile signed __int32 *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  volatile signed __int32 *v8; // rdi
  int v9; // esi
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v11; // [rsp+60h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v10) < 0 )
  {
    v6 = (volatile signed __int32 *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    v11 = v6;
    if ( v6 )
    {
      *v6 = 1;
      *((_DWORD *)v6 + 1) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v9 = Windows::Internal::Details::Git::Acquire(v7);
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 *))(*(_QWORD *)qword_1805CCB58
                                                                                            + 24LL))(
               qword_1805CCB58,
               a2,
               &GUID_602076f4_9793_429d_a999_f951052e28e9,
               v8 + 1);
      if ( v9 < 0 )
      {
        XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v8);
      }
      else
      {
        *(_QWORD *)a1 = v8;
        *(_BYTE *)(a1 + 8) = 1;
      }
    }
    else
    {
      v9 = -2147024882;
    }
    v4 = v9;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v4;
}
