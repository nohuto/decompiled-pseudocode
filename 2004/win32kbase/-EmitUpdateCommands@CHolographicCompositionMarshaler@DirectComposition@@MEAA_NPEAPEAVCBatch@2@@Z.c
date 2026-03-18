/*
 * XREFs of ?EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCreate@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9D08 (-EmitCreate@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetQualityLevel@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9D88 (-EmitSetQualityLevel@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 277;
    v5[2] = *((_DWORD *)this + 6);
    v5[3] = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicCompositionMarshaler::EmitCreate(this, a2)
    && DirectComposition::CHolographicCompositionMarshaler::EmitSetQualityLevel(this, a2) )
  {
    return 1;
  }
  return v2;
}
