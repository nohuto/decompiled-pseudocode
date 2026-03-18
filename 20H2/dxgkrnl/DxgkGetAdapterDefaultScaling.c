/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C0144620
 * Callers:
 *     DxgkGetPathsModality @ 0x1C0131D50 (DxgkGetPathsModality.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0141828 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0141F34 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01439E8 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C014453C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0145060 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01458C0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
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
  if ( v6 && *((_QWORD *)v6 + 337) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v21 + 24) = 7790LL;
      WdLogEvent5_WdAssertion(v21);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v26, *(_QWORD *)(*((_QWORD *)v10 + 337) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 337) + 88LL));
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
          *(_QWORD *)(*((_QWORD *)v10 + 337) + 88LL));
        v17 = *((_QWORD *)v10 + 337);
        if ( *(_BYTE *)(v17 + 249) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v17 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v27);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26[0] + 40), v18);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27, v19);
    }
    DXGADAPTER::ReleaseReference(v10);
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
