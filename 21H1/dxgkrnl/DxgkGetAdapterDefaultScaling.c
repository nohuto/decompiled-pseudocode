/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C01360C0
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00E81C0 (DxgkGetPathsModality.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0135F0C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0138178 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0138884 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013B2C4 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01540C0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0153F1C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned __int64 v26[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v27[144]; // [rsp+30h] [rbp-B8h] BYREF

  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, v26);
  v10 = v6;
  if ( v6 && *((_QWORD *)v6 + 334) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v21 + 24) = 7714LL;
      WdLogEvent5_WdAssertion(v21);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v26, *(_QWORD *)(*((_QWORD *)v10 + 334) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 334) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26[0] + 40), v22);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v10, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
      if ( v13 < 0 )
      {
        v23 = v13;
        if ( v13 == -1073741130 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
          v24[3] = v23;
          v24[4] = v10;
          v24[5] = *((int *)v10 + 80);
          v24[6] = *((unsigned int *)v10 + 79);
          WdLogEvent5_WdWarning(v24);
        }
        else
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
          v25[3] = v23;
          v25[4] = v10;
          v25[5] = *((int *)v10 + 80);
          v25[6] = *((unsigned int *)v10 + 79);
          WdLogEvent5_WdError(v25);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)v26,
          *(_QWORD *)(*((_QWORD *)v10 + 334) + 88LL));
        v17 = *((_QWORD *)v10 + 334);
        if ( *(_BYTE *)(v17 + 249) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v17 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v27);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26[0] + 40), v18);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27, v19);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v20 + 24) = a1->HighPart;
    *(_QWORD *)(v20 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v20);
  }
  *a2 = AdapterDefaultScaling;
}
