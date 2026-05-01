/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@456@@Z @ 0x1800326B8
 * Callers:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800322A8 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUHSTRING.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // edi
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rbx
  int v7; // ebp
  unsigned int v8; // r12d
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rsi
  unsigned int i; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v16 = 0LL;
  v5 = (volatile signed __int32 *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v16 = v6;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 56LL))(a2, &v17);
    v8 = 0;
    if ( v7 >= 0 )
    {
      do
      {
        if ( !v17 || v8 >= 0x10 )
          break;
        v15 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v15);
        v9 = v15;
        if ( v7 >= 0 )
        {
          if ( *((_DWORD *)v6 + 3) == 16 )
          {
            v7 = -2147024882;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            *(_QWORD *)&v6[2 * (*((_DWORD *)v6 + 3))++ + 4] = v9;
            v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 64LL))(a2, &v17);
            v9 = v15;
          }
        }
        if ( v9 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v8;
      }
      while ( v7 >= 0 );
      if ( v7 >= 0 && *(volatile signed __int32 **)(a1 + 72) != v6 )
      {
        _InterlockedIncrement(v6 + 2);
        v10 = *(volatile signed __int32 **)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v6;
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v10 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
            for ( i = 0; i < *((_DWORD *)v10 + 3); ++i )
            {
              v12 = *(_QWORD *)&v10[2 * i + 4];
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
            operator delete((void *)v10, (const struct std::nothrow_t *)0x90);
          }
        }
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v6 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
    if ( *((_DWORD *)v6 + 3) )
    {
      do
      {
        v13 = *(_QWORD *)&v6[2 * v4 + 4];
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        ++v4;
      }
      while ( v4 < *((_DWORD *)v6 + 3) );
    }
    operator delete((void *)v6, (const struct std::nothrow_t *)0x90);
  }
  return (unsigned int)v7;
}
