/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C01D6044
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C01D5F70 (EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01D3BBC (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, int *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  int AdapterDefaultScaling; // eax
  struct _KTHREAD **v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 2792);
  if ( !*(_BYTE *)(v4 + 289) )
  {
    v5 = *a2;
    if ( *(int *)(*(_QWORD *)(v4 + 16) + 2692LL) < 1105 )
    {
      if ( (unsigned int)(v5 - 4) > 1 )
        return;
    }
    else if ( v5 != 255 )
    {
      return;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v8, *(_QWORD *)(v4 + 104));
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 2792) + 104LL));
    v7 = (struct _KTHREAD **)(v8 + 40);
    *a2 = AdapterDefaultScaling;
    DXGFASTMUTEX::Release(v7);
  }
}
