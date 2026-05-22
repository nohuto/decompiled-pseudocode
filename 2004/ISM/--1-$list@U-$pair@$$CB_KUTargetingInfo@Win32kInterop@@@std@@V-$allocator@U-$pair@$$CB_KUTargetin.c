/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x1800AE44C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned___int64_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo____0____::_1_::dtor$0 @ 0x18004E9C4 (_std--_Hash_std--_Umap_traits_unsigned___int64_Win32kInterop--TargetingInfo_std--_U_ea_18004E9C4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::~list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>(
        void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3 + 4);
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
