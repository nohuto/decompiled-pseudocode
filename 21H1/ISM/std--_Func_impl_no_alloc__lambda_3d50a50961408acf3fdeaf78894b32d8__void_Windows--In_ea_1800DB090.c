/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move @ 0x1800DB090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_1801AC500;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  a2[2] = v2[1];
  return a2;
}
