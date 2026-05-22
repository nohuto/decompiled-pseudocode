/*
 * XREFs of std::_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move @ 0x1800DAC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_1801AC4D0;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  return a2;
}
