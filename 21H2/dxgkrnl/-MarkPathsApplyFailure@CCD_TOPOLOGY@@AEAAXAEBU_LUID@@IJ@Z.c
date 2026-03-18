/*
 * XREFs of ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03A98E0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C0738 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::MarkPathsApplyFailure(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3, int a4)
{
  __int64 v4; // r10
  unsigned __int16 v5; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx

  v4 = *((_QWORD *)this + 8);
  v5 = 0;
  if ( *(_WORD *)(v4 + 20) )
  {
    do
    {
      v8 = v4;
      v9 = 296LL * v5;
      if ( *(_DWORD *)(v9 + v4 + 72) == a2->LowPart
        && *(_DWORD *)(v9 + v4 + 76) == a2->HighPart
        && (a3 == -1 || *(_DWORD *)(v9 + v4 + 80) == a3) )
      {
        *(_DWORD *)(v9 + v4 + 248) = a4;
        v8 = *((_QWORD *)this + 8);
      }
      ++v5;
      v4 = v8;
    }
    while ( v5 < *(_WORD *)(v8 + 20) );
  }
}
