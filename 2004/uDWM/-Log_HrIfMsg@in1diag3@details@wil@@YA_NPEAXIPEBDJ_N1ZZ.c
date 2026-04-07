/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18008C2B0
 * Callers:
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008BE18 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008D088 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        char a5,
        bool a6,
        const char *a7,
        ...)
{
  if ( a5 )
    wil::details::ReportFailure_HrMsg(this, a2);
  return a5;
}
