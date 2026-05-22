/*
 * XREFs of ??0UIAHitTestServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAVDWMInputRouter@@@Z @ 0x180030104
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800274D4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003021C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

UIAHitTestServer *__fastcall UIAHitTestServer::UIAHitTestServer(
        UIAHitTestServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        struct DWMInputRouter *a3)
{
  *(_QWORD *)this = &BamoUIAHitTestPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoUIAHitTestPrincipal::`vftable'{for `IUIAHitTestPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((UIAHitTestServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoUIAHitTestPrincipalImpl::`vftable';
  *(_QWORD *)this = &UIAHitTestServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoUIAHitTestPrincipal::`vftable'{for `IUIAHitTestPrincipal'};
  *((_QWORD *)this + 7) = a3;
  return this;
}
