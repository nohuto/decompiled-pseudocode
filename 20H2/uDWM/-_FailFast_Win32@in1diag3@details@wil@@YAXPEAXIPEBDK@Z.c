/*
 * XREFs of ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180080990
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004B204 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180080094 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180080624 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32(
    (__int64)this,
    a2,
    (__int64)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
    (__int64)a4,
    v4,
    retaddr,
    3,
    (int)a4);
}
