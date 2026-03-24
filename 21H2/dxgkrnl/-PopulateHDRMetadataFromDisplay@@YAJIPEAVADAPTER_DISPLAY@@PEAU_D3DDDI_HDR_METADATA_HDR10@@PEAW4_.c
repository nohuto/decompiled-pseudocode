/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C00DC900
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106FE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___ @ 0x1C001D7B4 (DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___.c)
 *     _DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0027D04 (_DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     MonitorGetMonitorHandle @ 0x1C0129A20 (MonitorGetMonitorHandle.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C02F3938 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetIsAdvancedColorMetadataOverridden @ 0x1C02F3C6C (MonitorGetIsAdvancedColorMetadataOverridden.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        unsigned int a1,
        struct ADAPTER_DISPLAY *this,
        struct _D3DDDI_HDR_METADATA_HDR10 *a3,
        enum _D3DDDI_HDR_METADATA_TYPE *a4)
{
  __int64 v4; // rbx
  struct ADAPTER_DISPLAY *v7; // r8
  int MonitorHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rbx
  int IsAdvancedColorMetadataOverridden; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int AdvancedColorMetadataOverride; // eax
  __int64 v20; // rbx
  _BYTE v21[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v24[32]; // [rsp+50h] [rbp-20h] BYREF
  struct ADAPTER_DISPLAY *v25; // [rsp+98h] [rbp+28h] BYREF

  v25 = this;
  v4 = a1;
  if ( this && a3 && a4 && *((_DWORD *)this + 20) > a1 && ADAPTER_DISPLAY::IsVidPnSourceActive(this, a1) )
  {
    v7 = v25;
    v22 = 0LL;
    LOBYTE(v7) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      *((_QWORD *)v25 + 2),
                      *(unsigned int *)(3968 * v4 + *((_QWORD *)v25 + 14) + 1068),
                      v7,
                      PopulateHDRMetadataFromDisplay,
                      &v22);
    v12 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v12;
    }
    *(_QWORD *)&v23 = &v25;
    *((_QWORD *)&v23 + 1) = &v22;
    DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e_((__int64)v24, &v23);
    v21[0] = 0;
    IsAdvancedColorMetadataOverridden = MonitorGetIsAdvancedColorMetadataOverridden(v22, v21);
    v12 = IsAdvancedColorMetadataOverridden;
    if ( IsAdvancedColorMetadataOverridden < 0 )
      goto LABEL_12;
    if ( !v21[0] )
    {
      LODWORD(v12) = -1073741822;
      goto LABEL_15;
    }
    AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v22, a3);
    v12 = AdvancedColorMetadataOverride;
    if ( AdvancedColorMetadataOverride >= 0 )
    {
      *a4 = D3DDDI_HDR_METADATA_TYPE_HDR10;
      LODWORD(v12) = 0;
    }
    else
    {
LABEL_12:
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v12;
      *(_QWORD *)(v20 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v20);
    }
LABEL_15:
    DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v24);
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
