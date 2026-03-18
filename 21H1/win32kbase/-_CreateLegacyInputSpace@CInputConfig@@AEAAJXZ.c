/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0
 * Callers:
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A6F78 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00AAAD8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C001EDD4 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C002248C (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C004ADA4 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C005155C (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C00A48BC (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C00A492C (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C00A4A54 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C00A4BD8 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00B43F0 (DrvGetWDDMAdapterInfo.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rbx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  BOOL v10; // ecx
  __int16 v11; // ax
  __int64 v12; // rcx
  int v13; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v15; // rsi
  CInputConfig *v16; // rcx
  struct CInputSpaceRegion *v17; // rcx
  __int128 *v19; // r8
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  struct CInputSpaceRegion *v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h]
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v36; // [rsp+60h] [rbp-A0h]
  __int16 v37; // [rsp+64h] [rbp-9Ch]
  __int16 v38; // [rsp+66h] [rbp-9Ah]
  _BYTE v39[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v40[672]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+310h] [rbp+210h] BYREF
  int v42; // [rsp+318h] [rbp+218h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  v32 = 0LL;
  v33 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v41, (const struct INPUT_SPACE *)&v32, 1);
  v42 = 0;
  v41 = 0xFFFFFFFE00000000uLL;
  v34 = 0LL;
  v4 = RIMGetQDCActivePathsData(&v34);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v3 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v3 & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v35);
        v8 = *(_QWORD *)(i + 40);
        v9 = *(_OWORD *)(v8 + 28);
        v10 = i == *(_QWORD *)(gpDispInfo + 96);
        v37 = *(_WORD *)(v8 + 64);
        v11 = *(_WORD *)(i + 224);
        v36 = v10;
        v12 = *(_QWORD *)(i + 240);
        v35 = v9;
        v38 = v11;
        DrvGetWDDMAdapterInfo(v12, 1LL, v39, v40);
        v13 = CInputSpace::AddRegion((CInputSpace *)&v41, (const struct CInputSpaceRegion *)&v35, 0LL);
        if ( v13 < 0 )
          goto LABEL_17;
      }
    }
  }
  if ( v4 )
  {
    for ( j = 0; j < *(_DWORD *)v4; ++j )
    {
      v15 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v4 + 8) + 200LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v15, v3, v5, v6);
      v32 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v16,
             v15,
             (const struct CInputSpace *)&v41,
             (const struct tagQDC_DATA *)v4,
             &v32) )
      {
        v17 = v32;
        if ( *((_BYTE *)v32 + 488) )
        {
          v19 = &v35;
          v20 = 5LL;
          do
          {
            v21 = *(_OWORD *)v17;
            v22 = *((_OWORD *)v17 + 1);
            v17 = (struct CInputSpaceRegion *)((char *)v17 + 128);
            *v19 = v21;
            v23 = *((_OWORD *)v17 - 6);
            v19[1] = v22;
            v24 = *((_OWORD *)v17 - 5);
            v19[2] = v23;
            v25 = *((_OWORD *)v17 - 4);
            v19[3] = v24;
            v26 = *((_OWORD *)v17 - 3);
            v19[4] = v25;
            v27 = *((_OWORD *)v17 - 2);
            v19[5] = v26;
            v28 = *((_OWORD *)v17 - 1);
            v19[6] = v27;
            v19 += 8;
            *(v19 - 1) = v28;
            --v20;
          }
          while ( v20 );
          v29 = *((_QWORD *)v17 + 6);
          v30 = *((_OWORD *)v17 + 1);
          *v19 = *(_OWORD *)v17;
          v31 = *((_OWORD *)v17 + 2);
          v19[1] = v30;
          v19[2] = v31;
          *((_QWORD *)v19 + 6) = v29;
          CInputSpace::AddRegion((CInputSpace *)&v41, (const struct CInputSpaceRegion *)&v35, &v32);
          v17 = v32;
        }
        if ( v17 )
          CInputSpaceRegion::MapToDisplayPath(v17, v15);
      }
    }
  }
  v13 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v41);
LABEL_17:
  RIMFreeQDCActivePathsData(v4);
  if ( v13 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v41);
  return 0LL;
}
