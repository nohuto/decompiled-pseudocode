/*
 * XREFs of ??$?0PEAUIInspectable@@@?$AutoValue@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIInspectable@@PEAJ@Z @ 0x180030A6C
 * Callers:
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z @ 0x18002D6D0 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@Colle.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180011D8C (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // r14
  int v6; // esi
  __int64 v7; // rcx
  _DWORD *v8; // rax
  Windows::Internal::Details::Git *v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  if ( !*a2 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_21;
  }
  v13 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v13) >= 0 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_2;
  }
  v8 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    *v8 = 1;
    v8[1] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v6 = Windows::Internal::Details::Git::Acquire(v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18005AE20 + 24LL))(
             qword_18005AE20,
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             v10 + 1);
    if ( v6 < 0 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        if ( v10[1] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
        operator delete(v10, (const struct std::nothrow_t *)8);
      }
    }
    else
    {
      *(_QWORD *)a1 = v10;
      *(_BYTE *)(a1 + 8) = 1;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_21:
  *a3 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
