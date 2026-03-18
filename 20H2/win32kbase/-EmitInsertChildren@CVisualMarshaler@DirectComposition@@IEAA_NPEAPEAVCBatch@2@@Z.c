/*
 * XREFs of ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007C158
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007B350 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitInsertChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  int v6; // esi
  __int64 v7; // rbx
  char *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x4000) == 0 )
    return 1;
  v9 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 22);
  if ( !v7 )
  {
LABEL_9:
    *((_DWORD *)this + 4) = v2 & 0xFFFFBFFF;
    return 1;
  }
  while ( (*(_DWORD *)(v7 + 16) & 0x10) != 0 )
  {
LABEL_7:
    v7 = *(_QWORD *)(v7 + 184);
    ++v6;
    if ( !v7 )
    {
      v2 = *((_DWORD *)this + 4);
      goto LABEL_9;
    }
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    v8 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *(_OWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 406;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *(_DWORD *)(v7 + 24);
    *((_DWORD *)v8 + 4) = v6;
    *(_DWORD *)(v7 + 16) |= 0x10u;
    goto LABEL_7;
  }
  return 0;
}
