/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180117E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801104B0 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1801178BC (-RaiseEvent@-$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801192B0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  HSTRING *v3; // rsi
  unsigned int v4; // r14d
  int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // eax
  HSTRING *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  HSTRING *v13; // r14
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  HRESULT v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = (HSTRING *)malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0LL;
  if ( v4 )
  {
    while ( 1 )
    {
      v16 = WindowsDuplicateString(*a3, &v3[v9]);
      v8 = v16;
      if ( v16 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++a3;
      if ( (unsigned int)v9 >= v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    XWinRT::SerializingLockPolicy::Write(&v15, a1 + 72, &v16);
    v8 = v16;
    if ( v16 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
      v10 = *(_DWORD *)(a1 + 40);
      v8 = 0;
      *(_DWORD *)(a1 + 48) = 0;
      ++*(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 40) = v9;
      v9 = v10;
      v11 = *(HSTRING **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v3;
      v3 = v11;
      *(_DWORD *)(a1 + 44) = v4;
    }
    if ( v15 )
    {
      v12 = v15 + 1;
      if ( LODWORD(v15->Ptr) == 1 )
        LODWORD(v12->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v12);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v13 = v3;
      do
      {
        WindowsDeleteString(*v13);
        *v13++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
