/*
 * XREFs of ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CRedirectVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // edi
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) || (*((_DWORD *)this + 94) & 1) == 0 )
    return 0;
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v8) )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 342;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 46);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)this + 94) &= ~1u;
  }
  return 1;
}
