/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180140A3C
 * Callers:
 *     ??$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADER@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18013FA00 (--$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADE.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1801A0624 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801C0E98 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801EC250 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180216A20 (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18024B0DC (--$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18026848C (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18033075C (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803AFCA4 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180466E38 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180467524 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801412D0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
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
