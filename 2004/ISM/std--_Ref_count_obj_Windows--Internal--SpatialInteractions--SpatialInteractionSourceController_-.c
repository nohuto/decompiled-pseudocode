/*
 * XREFs of std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice___&_unsigned_long_&_unsigned_long_&__lambda_538a60f2dfb0de3d5e0ccb23ebc37905___ @ 0x1800CC5AC
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D0840 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180169694 (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice_____unsigned_long___unsigned_long____lambda_538a60f2dfb0de3d5e0ccb23ebc37905___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-10h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceController>::`vftable';
  v7 = off_1801B0A38;
  v8 = *a5;
  v9 = &v7;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)(a1 + 16),
    (__int64)&v7);
  return a1;
}
