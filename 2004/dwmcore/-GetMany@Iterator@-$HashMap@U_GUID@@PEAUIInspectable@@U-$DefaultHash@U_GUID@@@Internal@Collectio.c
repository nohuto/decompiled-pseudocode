/*
 * XREFs of ?GetMany@Iterator@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@PEAI@Z @ 0x1802436D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180242B9C (-EnsureVersionMatches@Iterator@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Inter.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1802448E0 (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTrai.c)
 *     ?Make@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x180244CCC (-Make@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18024556C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r15
  unsigned int v7; // r14d
  __int64 v8; // rdi
  unsigned int v9; // r12d
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rbx
  RTL_SRWLOCK *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v22; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h]
  unsigned int *v25; // [rsp+98h] [rbp+58h]

  v25 = a4;
  v24 = a2;
  v4 = a2;
  v23 = 0;
  v5 = a3;
  *a4 = 0;
  v7 = 0;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read(&v22, *(_QWORD *)(a1 + 64) + 160LL, &v23);
  if ( v23 >= 0 )
    v23 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = v23;
  if ( v23 >= 0 )
  {
    while ( v9 < v4 )
    {
      if ( v10 >= 0 )
      {
        if ( !v8 )
          break;
        v20 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v20);
        v23 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
                v8,
                v8 + 16,
                &v20);
        v10 = v23;
        if ( v23 >= 0 )
        {
          v11 = v20;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v21 = 0LL;
          v5[v9] = v11;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
          v12 = *(_QWORD *)(a1 + 64);
          v13 = *(_QWORD *)(v8 + 32);
          if ( !v13 )
          {
            v14 = (unsigned int)(*(_DWORD *)(v8 + 40) % *(_DWORD *)(v12 + 96) + 1);
            do
            {
              if ( (unsigned int)v14 >= *(_DWORD *)(v12 + 96) )
                break;
              v15 = *(_QWORD *)(v12 + 80);
              if ( *(_QWORD *)(v15 + 8 * v14) )
                v13 = *(_QWORD *)(v15 + 8 * v14);
              v14 = (unsigned int)(v14 + 1);
            }
            while ( !v13 );
          }
          v8 = v13;
          ++v7;
          if ( !v13 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v20);
            break;
          }
          v4 = v24;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v20);
      }
      ++v9;
      if ( v10 < 0 )
        break;
    }
    if ( v10 < 0 )
    {
      if ( v7 )
      {
        v17 = v7;
        do
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5++ = 0LL;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v16 = v25;
      *(_QWORD *)(a1 + 72) = v8;
      *v16 = v7;
    }
  }
  if ( v22 )
  {
    v18 = v22 + 1;
    if ( LODWORD(v22->Ptr) == 1 )
      --LODWORD(v18->Ptr);
    else
      ReleaseSRWLockShared(v18);
  }
  return (unsigned int)v10;
}
