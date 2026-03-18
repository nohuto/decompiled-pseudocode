/*
 * XREFs of ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A774
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E3854 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___ @ 0x1C001FBAC (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___.c)
 */

void __fastcall ADAPTER_DISPLAY::SetVidPnPrimaryTarget(ADAPTER_DISPLAY *this, unsigned int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  struct DXGGLOBAL *Global; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 3968LL * a2;
  v4 = *((_QWORD *)this + 14);
  v5 = *(_DWORD *)(v3 + v4 + 1068);
  *(_DWORD *)(v3 + v4 + 1068) = a3;
  if ( a3 == -1 )
  {
    v6 = *((_QWORD *)this + 2);
    Global = DXGGLOBAL::GetGlobal((__int64)this, v3);
    v9 = *(_QWORD *)(v6 + 316);
    v8[0] = &v9;
    v8[1] = &v10;
    v10 = v5;
    REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___((char *)Global + 304672, v8);
  }
}
