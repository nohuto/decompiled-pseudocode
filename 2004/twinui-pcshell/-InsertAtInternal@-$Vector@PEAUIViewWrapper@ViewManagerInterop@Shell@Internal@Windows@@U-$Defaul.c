/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIViewWrapper@ViewManagerInterop@Shell@25@_N@Z @ 0x18014D7D0
 * Callers:
 *     ?Append@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x180148BF0 (-Append@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqualityP.c)
 *     ?InsertAt@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x18014D7C0 (-InsertAt@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqualit.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18004DE08 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18004DE24 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAJ@Z @ 0x1801427B4 (--$-0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014F8DC (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?ResizeStorage@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801503A0 (-ResizeStorage@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEq.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180154A24 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x18015A608 (memmove_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  void *v9; // rsi
  RTL_SRWLOCK *v10; // rcx
  unsigned int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax
  char v15[4]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch] BYREF
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-18h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = a3;
  v16 = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>(
    (__int64)v18,
    &v19,
    &v16);
  v7 = v16;
  if ( v16 < 0 )
  {
    v9 = v18[0];
    goto LABEL_28;
  }
  XWinRT::SerializingLockPolicy::Write(&v17, a1 + 104, &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 72);
    if ( a2 <= v8 )
    {
      if ( v8 >= 0x7FFFFFFF )
        v7 = -2147024882;
      if ( v7 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
        v7 = 0;
        v11 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) + 1 <= v11 )
          goto LABEL_18;
        v12 = 1;
        if ( v11 + 1 <= (v11 >> 1) + v11 )
          v12 = v11 >> 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ResizeStorage(
               a1,
               v11 + v12);
        if ( v7 >= 0 )
        {
LABEL_18:
          v13 = *(_DWORD *)(a1 + 72);
          if ( a2 < v13
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
                 16LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * a2),
                 16LL * (v13 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = *(_OWORD *)v18;
            v9 = 0LL;
            LOBYTE(v18[1]) = 0;
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(a1 + 120);
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL * a2 + 8) )
              ++*(_DWORD *)(a1 + 80);
            goto LABEL_8;
          }
        }
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  v9 = v18[0];
LABEL_8:
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      LODWORD(v10->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v10);
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
LABEL_28:
  if ( LOBYTE(v18[1]) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v9);
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v7;
}
