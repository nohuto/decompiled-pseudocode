/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140047CE4
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140008720 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140009F20 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140016110 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140047568 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x140047AD0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  wil::details::ReportFailure_HrMsg();
}
