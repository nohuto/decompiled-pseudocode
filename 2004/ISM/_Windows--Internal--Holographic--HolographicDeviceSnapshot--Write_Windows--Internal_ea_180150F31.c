/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$0 @ 0x180150F31
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B4578 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x13D,
    (__int64)"onecoreuap\\analog\\Input\\Common\\inc\\HolographicDeviceSnapshot.h",
    a4);
  return 0LL;
}
