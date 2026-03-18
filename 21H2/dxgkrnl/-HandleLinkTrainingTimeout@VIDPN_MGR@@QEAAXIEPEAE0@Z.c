/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C03A4B10
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03A0060 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01A9544 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        VIDPN_MGR *this,
        unsigned int a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  PERESOURCE *v10; // rdi
  struct _LUID *v11; // rdx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v13; // r11
  int v14; // r8d
  unsigned int v15; // ecx
  struct DXGGLOBAL *Global; // rax
  char v17[4]; // [rsp+20h] [rbp-71h]
  int v18; // [rsp+20h] [rbp-71h]
  unsigned __int64 v19; // [rsp+30h] [rbp-61h] BYREF
  struct _DXGK_CONNECTION_CHANGE v20; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v21[10]; // [rsp+50h] [rbp-41h] BYREF

  v5 = *((_QWORD *)this + 1);
  v8 = a2;
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)this + 1);
  }
  v10 = *(PERESOURCE **)(v5 + 16);
  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 61;
  LOBYTE(v21[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v10) )
    WdLogSingleEntry0(1LL);
  *a4 = 0;
  *a5 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 15), v8);
  if ( TargetById )
  {
    v19 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v11, 0LL, &v19);
    v15 = v14 + 88;
    v18 = v14 & *(_DWORD *)v17;
    if ( a3 )
    {
      DxgkLogCodePointPacketForSession(v15, v19, v8, 268435454, v18, v13);
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v10) )
      {
        *a4 = 1;
      }
      else
      {
        *(_OWORD *)&v20.ConnectionChangeId = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v20);
        *(_BYTE *)(*((_QWORD *)TargetById + 67) + 168LL) = 13;
        *(_QWORD *)(*((_QWORD *)TargetById + 67) + 160LL) = v20.ConnectionChangeId;
        Global = DXGGLOBAL_GetGlobal();
        QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
        WdLogSingleEntry2(7LL, v8, v10);
        *a5 = 1;
      }
    }
    else
    {
      DxgkLogCodePointPacketForSession(v15, v19, v8, 0xFFFFFFF, v18, v13);
      memset(&v20, 0, sizeof(v20));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v20);
      *((_DWORD *)&v20 + 2) = v8 & 0xFFFFFF | *((_DWORD *)&v20 + 2) & 0xFD000000 | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v20, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
  }
}
