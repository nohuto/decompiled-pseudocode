/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@@std@@EEAAXXZ @ 0x180084EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceController>::_Delete_this(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
