/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01311E8
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0130CB8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0146610 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0164B24 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02EE2A0 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02F0D88 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C0131340 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  CCD_TOPOLOGY::ClearModalitySetId((CCD_TOPOLOGY *)a1);
  v14 = *(_QWORD *)(a1 + 64);
  if ( !v14 )
    return 3221225507LL;
  v15 = *(unsigned __int16 *)(v14 + 20);
  if ( (unsigned __int16)v15 >= *(_WORD *)(v14 + 22) )
    return 3221225507LL;
  v16 = 272 * v15 + v14 + 48;
  v17 = 0x8700000000000LL;
  *(_QWORD *)(v16 + 16) = *a2;
  *(_OWORD *)(v16 + 232) = 0LL;
  *(_DWORD *)(v16 + 24) = a3;
  *(_OWORD *)(v16 + 248) = 0LL;
  *(_BYTE *)(v16 + 129) = a5 | (2 * a6);
  *(_QWORD *)(v16 + 264) = 0LL;
  *(_DWORD *)(v16 + 28) = a4;
  *(_QWORD *)v16 = 0x8700000000000LL;
  *(_DWORD *)(v16 + 232) = *(_DWORD *)(a1 + 88);
  if ( a7 != -2 && a8 != -2 )
  {
    v17 = 0x8F00000000000LL;
    *(_DWORD *)(v16 + 88) = a7;
    *(_QWORD *)v16 = 0x8F00000000000LL;
    *(_DWORD *)(v16 + 92) = a8;
  }
  *(_DWORD *)(v16 + 212) = a9;
  if ( a9 )
    *(_QWORD *)v16 = v17 | 0x1000000000LL;
  ++*(_WORD *)(*(_QWORD *)(a1 + 64) + 20LL);
  if ( a10 )
    *a10 = v16;
  return 0LL;
}
