/*
 * XREFs of ?GetMany@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAI@Z @ 0x180342890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008DF14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18014305C (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18014F074 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x180340D8C (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 *v5; // r14
  size_t v6; // rbp
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // r13d
  const struct std::nothrow_t *v11; // rdx
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // rcx
  unsigned int v17; // ecx
  RTL_SRWLOCK *v19; // [rsp+20h] [rbp-48h] BYREF
  void *v20; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v22 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v20 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v19, (RTL_SRWLOCK *)(a1 + 72), &v22);
  if ( !*(_DWORD *)(a1 + 48) || (v20 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v22;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    v13 = a2;
    if ( a2 > v10 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v13 = a2;
    }
    if ( v12 >= 0 && (_DWORD)v6 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          v14 = v9 + v13;
          if ( v14 >= v10 )
            break;
          v12 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                  &v5[v9],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v14));
          if ( v12 < 0 )
            break;
          ++v9;
          v13 = a2;
        }
        while ( v9 < (unsigned int)v6 );
      }
      else
      {
        do
        {
          v15 = (unsigned int)v8 + v13;
          if ( (unsigned int)v15 >= v10 )
            break;
          v12 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                  &v5[v8],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v15));
          if ( v12 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          v13 = a2;
        }
        while ( (unsigned int)v8 < (unsigned int)v6 );
      }
    }
  }
  if ( v19 )
  {
    v16 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      --LODWORD(v16->Ptr);
    else
      ReleaseSRWLockShared(v16);
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v5++);
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( v9 )
    {
      v17 = 0;
      if ( (_DWORD)v6 )
      {
        v11 = (const struct std::nothrow_t *)a2;
        do
        {
          if ( v17 + a2 >= v10 )
            break;
          v12 = 0;
          LODWORD(v8) = v8 + 1;
          ++v17;
        }
        while ( v17 < (unsigned int)v6 );
      }
    }
    *a5 = v8;
  }
  operator delete(v20, v11);
  return (unsigned int)v12;
}
