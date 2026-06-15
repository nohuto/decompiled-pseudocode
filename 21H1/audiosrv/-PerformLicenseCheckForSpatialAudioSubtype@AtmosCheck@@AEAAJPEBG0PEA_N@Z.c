/*
 * XREFs of ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137588
 * Callers:
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180137C2C (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006066C (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x18006069C (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___::_lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___ @ 0x1800735B8 (wil--details--lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___--_lambda_call__lambda_d661.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1801357D8 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1801370B4 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x1801376C0 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180138480 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int v8; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // esi
  int updated; // eax
  AtmosCheck *v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v20; // [rsp+60h] [rbp+8h] BYREF

  *a4 = 0;
  v8 = AtmosCheck::BeginAppSvcCall(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1523LL,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v8);
  v17 = this;
  v18 = 1;
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v20);
  v9 = v20;
  if ( !v20 )
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 1531LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v20);
  v13 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a3);
  v14 = v13;
  if ( v13 == -1 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 1537LL;
    goto LABEL_10;
  }
  AtmosCheck::PerformLicenseCheckHelper(this, a2, v13, v9, a4);
  if ( *a4 )
  {
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, v14, v9);
    v10 = updated;
    if ( updated < 0 )
    {
      v11 = (unsigned int)updated;
      v12 = 1546LL;
      goto LABEL_10;
    }
  }
  v10 = 0;
LABEL_12:
  if ( v9 )
    operator delete(v9);
  wil::details::lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___::_lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___((__int64)&v17);
  return v10;
}
