/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::catch$69 @ 0x1800D8A59
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800954AC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::catch_69(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 200),
                           (void *)0x1AD,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteracti"
                                    "onobjectdevice.cpp",
                           a4);
  return 0LL;
}
