/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C0144848
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0141F34 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C0144774 (EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01458C0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  __int64 v4; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v5; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 2696);
  if ( !*(_BYTE *)(v4 + 249) )
  {
    v5 = *a2;
    if ( *(int *)(*(_QWORD *)(v4 + 16) + 2596LL) < 1105 )
    {
      if ( (unsigned int)(v5 - 4) > 1 )
        return;
    }
    else if ( v5 != D3DKMDT_VPPS_NOTSPECIFIED )
    {
      return;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v9, *(_QWORD *)(v4 + 88));
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 2696) + 88LL));
    v7 = v9;
    *a2 = AdapterDefaultScaling;
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 40), v8);
  }
}
