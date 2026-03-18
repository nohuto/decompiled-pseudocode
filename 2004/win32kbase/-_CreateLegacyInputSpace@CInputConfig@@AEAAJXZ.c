/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000C504 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C000C684 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C000BEF4 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000C07C (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000C3D8 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C000C4A8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C000C8B0 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C000C920 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000CA18 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000CA48 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C000CE30 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C000CF30 (RIMGetQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00A7820 (DrvGetWDDMAdapterInfo.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rbx
  __int64 v11; // rdx
  __int128 v12; // xmm0
  BOOL v13; // ecx
  __int16 v14; // ax
  __int64 v15; // rcx
  int v16; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v18; // rsi
  CInputConfig *v19; // rcx
  struct CInputSpaceRegion *v20; // rcx
  __int128 *v22; // r8
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  struct CInputSpaceRegion *v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+38h] [rbp-C8h]
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v39; // [rsp+60h] [rbp-A0h]
  __int16 v40; // [rsp+64h] [rbp-9Ch]
  __int16 v41; // [rsp+66h] [rbp-9Ah]
  _BYTE v42[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[672]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+310h] [rbp+210h] BYREF
  int v45; // [rsp+318h] [rbp+218h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v35 = 0LL;
  v36 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v44, (const struct INPUT_SPACE *)&v35, 1);
  v45 = 0;
  v44 = 0xFFFFFFFE00000000uLL;
  v37 = 0LL;
  v7 = RIMGetQDCActivePathsData(&v37);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v6 & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v38);
        v11 = *(_QWORD *)(i + 40);
        v12 = *(_OWORD *)(v11 + 28);
        v13 = i == *(_QWORD *)(gpDispInfo + 96);
        v40 = *(_WORD *)(v11 + 64);
        v14 = *(_WORD *)(i + 224);
        v39 = v13;
        v15 = *(_QWORD *)(i + 240);
        v38 = v12;
        v41 = v14;
        DrvGetWDDMAdapterInfo(v15, 1LL, v42, v43);
        v16 = CInputSpace::AddRegion((CInputSpace *)&v44, (const struct CInputSpaceRegion *)&v38, 0LL);
        if ( v16 < 0 )
          goto LABEL_17;
      }
    }
  }
  if ( v7 )
  {
    for ( j = 0; j < *(_DWORD *)v7; ++j )
    {
      v18 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v7 + 8) + 200LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v18, v6, v8, v9);
      v35 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v19,
             v18,
             (const struct CInputSpace *)&v44,
             (const struct tagQDC_DATA *)v7,
             &v35) )
      {
        v20 = v35;
        if ( *((_BYTE *)v35 + 488) )
        {
          v22 = &v38;
          v23 = 5LL;
          do
          {
            v24 = *(_OWORD *)v20;
            v25 = *((_OWORD *)v20 + 1);
            v20 = (struct CInputSpaceRegion *)((char *)v20 + 128);
            *v22 = v24;
            v26 = *((_OWORD *)v20 - 6);
            v22[1] = v25;
            v27 = *((_OWORD *)v20 - 5);
            v22[2] = v26;
            v28 = *((_OWORD *)v20 - 4);
            v22[3] = v27;
            v29 = *((_OWORD *)v20 - 3);
            v22[4] = v28;
            v30 = *((_OWORD *)v20 - 2);
            v22[5] = v29;
            v31 = *((_OWORD *)v20 - 1);
            v22[6] = v30;
            v22 += 8;
            *(v22 - 1) = v31;
            --v23;
          }
          while ( v23 );
          v32 = *((_QWORD *)v20 + 6);
          v33 = *((_OWORD *)v20 + 1);
          *v22 = *(_OWORD *)v20;
          v34 = *((_OWORD *)v20 + 2);
          v22[1] = v33;
          v22[2] = v34;
          *((_QWORD *)v22 + 6) = v32;
          CInputSpace::AddRegion((CInputSpace *)&v44, (const struct CInputSpaceRegion *)&v38, &v35);
          v20 = v35;
        }
        if ( v20 )
          CInputSpaceRegion::MapToDisplayPath(v20, v18);
      }
    }
  }
  v16 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v44);
LABEL_17:
  RIMFreeQDCActivePathsData(v7);
  if ( v16 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v44);
  return 0LL;
}
