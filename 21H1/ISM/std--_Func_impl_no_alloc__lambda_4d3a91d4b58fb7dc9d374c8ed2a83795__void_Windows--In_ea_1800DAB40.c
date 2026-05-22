/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy @ 0x1800DAB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  *a2 = off_1801AC470;
  a2[1] = a1[1];
  a2[2] = a1[2];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 2);
  a2[3] = 0LL;
  a2[4] = 0LL;
  v4 = a1[4];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  a2[3] = a1[3];
  a2[4] = a1[4];
  return a2;
}
