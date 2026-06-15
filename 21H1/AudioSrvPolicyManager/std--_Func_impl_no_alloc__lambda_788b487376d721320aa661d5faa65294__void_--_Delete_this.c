/*
 * XREFs of std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Delete_this @ 0x180013560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[3];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
