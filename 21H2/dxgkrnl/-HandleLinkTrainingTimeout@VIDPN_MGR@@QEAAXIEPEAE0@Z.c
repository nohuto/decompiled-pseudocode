/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E48C8
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E5FC0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007E24 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019DF8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E2438 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0112254 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C0135DE0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B54 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        VIDPN_MGR *this,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  __int64 v16; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v18; // rax
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r11d
  unsigned __int64 v29; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-79h] BYREF
  struct _DXGK_CONNECTION_CHANGE v31; // [rsp+40h] [rbp-71h] BYREF
  __int128 v32; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v33[10]; // [rsp+70h] [rbp-41h] BYREF

  v5 = *((_QWORD *)this + 1);
  v8 = (unsigned int)a2;
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v5 = *((_QWORD *)this + 1);
  }
  v11 = *(_QWORD *)(v5 + 16);
  memset(v33, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v33[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 61;
  LOBYTE(v33[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  *a4 = 0;
  *a5 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), (unsigned int)v8);
  if ( TargetById )
  {
    if ( a3 )
    {
      v29 = 0LL;
      DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v29);
      DxgkLogCodePointPacketForSession(0x58u, v29, v8, 268435454, v19, *(_QWORD *)(v11 + 316));
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v11) )
      {
        *a4 = 1;
      }
      else
      {
        v32 = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v32);
        *(_BYTE *)(*((_QWORD *)TargetById + 67) + 168LL) = 13;
        v20 = *((_QWORD *)TargetById + 67);
        *(_QWORD *)(v20 + 160) = v32;
        Global = DXGGLOBAL::GetGlobal(v20, v21);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v23, v24);
        v27 = WdLogNewEntry5_WdDmmEvent(v26, v25);
        *(_QWORD *)(v27 + 24) = v8;
        *(_QWORD *)(v27 + 32) = v11;
        WdLogEvent5_WdDmmEvent(v27);
        *a5 = 1;
      }
    }
    else
    {
      v30 = 0LL;
      DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v30);
      DxgkLogCodePointPacketForSession(0x58u, v30, v8, 0xFFFFFFF, v28, *(_QWORD *)(v11 + 316));
      memset(&v31, 0, sizeof(v31));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v31);
      *((_DWORD *)&v31 + 2) = v8 & 0xFFFFFF | *((_DWORD *)&v31 + 2) & 0xFD000000 | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v31, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33, 0);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v8;
    WdLogEvent5_WdError(v18);
  }
}
