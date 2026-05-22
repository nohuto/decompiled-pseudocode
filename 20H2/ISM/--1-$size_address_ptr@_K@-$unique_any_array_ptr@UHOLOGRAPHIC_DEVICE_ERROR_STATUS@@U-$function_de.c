/*
 * XREFs of ??1?$size_address_ptr@_K@?$unique_any_array_ptr@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x180169AAC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor$1 @ 0x18016FD69 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Update_ea_18016FD69.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::size_address_ptr<unsigned __int64>::~size_address_ptr<unsigned __int64>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = result;
  }
  return result;
}
