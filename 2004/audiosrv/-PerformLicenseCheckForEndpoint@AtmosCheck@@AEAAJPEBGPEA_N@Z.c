/*
 * XREFs of ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180137090
 * Callers:
 *     _lambda_87f555b56693a8b4c492a05e321e535a_::operator() @ 0x180073A74 (_lambda_87f555b56693a8b4c492a05e321e535a_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180136F8C (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006076C (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x18006079C (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___::_lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___ @ 0x180073658 (wil--details--lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___--_lambda_call__lambda_3b6b.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180135488 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180137370 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x180138050 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForEndpoint(AtmosCheck *this, const unsigned __int16 *a2, bool *a3)
{
  int v6; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v7; // rbx
  unsigned int v8; // edi
  int updated; // eax
  AtmosCheck *v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v14; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = AtmosCheck::BeginAppSvcCall(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1482LL,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
  v11 = this;
  v12 = 1;
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v14);
  v7 = v14;
  if ( v14 )
  {
    AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v14);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 0, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 1, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 2, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 3, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 4, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 5, v7, a3);
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, &v14);
    v8 = updated;
    if ( updated >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E0,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)updated);
    v7 = v14;
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D2,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v7 )
    operator delete(v7);
  wil::details::lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___::_lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___((__int64)&v11);
  return v8;
}
