/*
 * XREFs of ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C02AF2FC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFA38 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C02AF70C (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C02AF928 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 */

char __fastcall Win81::DetermineViewDistance(
        Win81 *this,
        void *const a2,
        const struct tagSIZE *a3,
        int a4,
        const struct tagSIZE *a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // edi
  unsigned int v10; // eax
  int v12; // [rsp+28h] [rbp-10h]

  v8 = (unsigned int)a3;
  if ( (_DWORD)a3 )
  {
    v10 = Win81::OemSpecifiedViewDist(this, a2);
    *a7 = v10;
    if ( v10 )
      return 1;
  }
  *a7 = Win81::HeuristicallyDetermineViewingDistance(
          (Win81 *)a2,
          (const struct tagSIZE *)v8,
          a4,
          (const struct tagSIZE *)(unsigned int)a5,
          a6,
          v12);
  return 0;
}
