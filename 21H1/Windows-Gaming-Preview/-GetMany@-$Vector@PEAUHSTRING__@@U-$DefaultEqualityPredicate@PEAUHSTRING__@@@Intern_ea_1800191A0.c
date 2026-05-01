/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800191A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  HSTRING *v8; // r14
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  RTL_SRWLOCK *v11; // r12
  HRESULT v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rbx
  void *v20; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v5 = 0LL;
  v6 = a3;
  v23 = 0;
  v7 = 0LL;
  v8 = a4;
  v9 = a1;
  if ( a3 )
  {
    memset_0(a4, 0, 8LL * a3);
    v9 = a1;
  }
  v10 = (_DWORD *)(v9 + 72);
  v20 = 0LL;
  v11 = (RTL_SRWLOCK *)(v9 + 80);
  *a5 = 0;
  if ( *(_DWORD *)(v9 + 72) == 1 )
  {
    if ( SLODWORD(v11->Ptr) >= 0 )
      ++LODWORD(v11->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v9 + 80));
    v9 = a1;
  }
  v12 = 0;
  if ( *(_DWORD *)(v9 + 48) )
  {
    v20 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v20 )
    {
      v12 = -2147024882;
LABEL_13:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
    v9 = a1;
  }
  v13 = *(_DWORD *)(v9 + 40);
  v14 = a2;
  v23 = v13;
  if ( a2 > v13 )
  {
    v12 = -2147483637;
    goto LABEL_13;
  }
  if ( (_DWORD)v6 )
  {
    if ( *(_DWORD *)(v9 + 48) )
    {
      do
      {
        v15 = v7 + v14;
        if ( v15 >= v13 )
          break;
        v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(v9 + 56) + 8LL * v15), &v8[v7]);
        if ( v12 < 0 )
          break;
        v9 = a1;
        v7 = (unsigned int)(v7 + 1);
        v13 = v23;
        v14 = a2;
      }
      while ( (unsigned int)v7 < (unsigned int)v6 );
    }
    else
    {
      do
      {
        v16 = v5 + v14;
        if ( v16 >= v13 )
          break;
        v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(v9 + 56) + 8LL * v16), &v8[v5]);
        if ( v12 < 0 )
          break;
        v9 = a1;
        v5 = (unsigned int)(v5 + 1);
        v13 = v23;
        v14 = a2;
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
  }
LABEL_23:
  if ( v10 )
  {
    if ( *v10 == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      v18 = (unsigned int)v5;
      do
      {
        WindowsDeleteString(*v8);
        *v8++ = 0LL;
        --v18;
      }
      while ( v18 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v17 = 0;
      if ( (_DWORD)v6 )
      {
        v9 = v23;
        do
        {
          if ( v17 + a2 >= v23 )
            break;
          v12 = 0;
          LODWORD(v5) = v5 + 1;
          ++v17;
        }
        while ( v17 < (unsigned int)v6 );
      }
    }
    *a5 = v5;
  }
  operator delete(v20, (const struct std::nothrow_t *)v9);
  return (unsigned int)v12;
}
