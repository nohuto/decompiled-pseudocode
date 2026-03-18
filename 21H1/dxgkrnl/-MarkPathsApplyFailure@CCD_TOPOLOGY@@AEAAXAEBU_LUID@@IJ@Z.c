/*
 * XREFs of ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02E669C
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE364 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0131CF0 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0132F80 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
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
      v9 = 272LL * v5;
      if ( *(_DWORD *)(v9 + v4 + 64) == a2->LowPart
        && *(_DWORD *)(v9 + v4 + 68) == a2->HighPart
        && (a3 == -1 || *(_DWORD *)(v9 + v4 + 72) == a3) )
      {
        *(_DWORD *)(v9 + v4 + 240) = a4;
        v8 = *((_QWORD *)this + 8);
      }
      ++v5;
      v4 = v8;
    }
    while ( v5 < *(_WORD *)(v8 + 20) );
  }
}
