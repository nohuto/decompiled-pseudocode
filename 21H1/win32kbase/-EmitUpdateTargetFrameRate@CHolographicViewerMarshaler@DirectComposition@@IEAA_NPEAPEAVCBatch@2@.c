/*
 * XREFs of ?EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EFBF0
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EFB30 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateTargetFrameRate(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 14) & 0x20) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 20;
    v3[1] = 187;
    v3[2] = *((_DWORD *)this + 6);
    v3[3] = *((_DWORD *)this + 23);
    v3[4] = *((_DWORD *)this + 24);
    *((_DWORD *)this + 14) &= ~0x20u;
    return 1;
  }
  return 0;
}
