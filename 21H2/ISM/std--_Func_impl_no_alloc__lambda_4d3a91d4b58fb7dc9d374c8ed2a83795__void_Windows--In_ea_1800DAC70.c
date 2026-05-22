/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this @ 0x1800DAC70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rcx

  v4 = (std::_Ref_count_base *)a1[4];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = a1[2];
  if ( v5 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
