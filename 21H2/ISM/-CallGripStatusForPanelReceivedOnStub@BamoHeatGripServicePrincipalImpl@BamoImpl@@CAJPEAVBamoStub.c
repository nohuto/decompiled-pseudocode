/*
 * XREFs of ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x18012A648
 * Callers:
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18012A5A8 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJAEBUHeatGri.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18012A6EC (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServicePrincipalImpl::CallGripStatusForPanelReceivedOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        const struct HeatGripReport *a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      34103LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)v2);
    __debugbreak();
  }
  return 0LL;
}
