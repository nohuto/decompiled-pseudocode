/*
 * XREFs of ??1?$unique_any_array_ptr@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x180169F78
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor$0 @ 0x18017020D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--UpdateNodeErrorStat.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
