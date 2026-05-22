/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a3c511ee10f5c6a3dc2136b1e24654b7__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this @ 0x1800DA990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a3c511ee10f5c6a3dc2136b1e24654b7__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
