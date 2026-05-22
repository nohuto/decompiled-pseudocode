/*
 * XREFs of ?_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z @ 0x1800CA5FC
 * Callers:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9030 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800DAE8C (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18007F82C (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::ReportFailure_HrMsg((__int64)this, a2);
}
