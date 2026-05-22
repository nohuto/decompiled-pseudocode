/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::catch$37 @ 0x1800D1AEB
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094F4C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::catch_37(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x434,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractions"
                                    "ourcedevicecollection.cpp",
                           a4);
  return 0LL;
}
