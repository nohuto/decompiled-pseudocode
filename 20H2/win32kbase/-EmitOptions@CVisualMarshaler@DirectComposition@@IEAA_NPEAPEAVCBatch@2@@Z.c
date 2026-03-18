/*
 * XREFs of ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BA84
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007B350 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 423;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    v4[12] = (*((_BYTE *)this + 288) & 0x10) != 0;
    v4[13] = (*((_BYTE *)this + 288) & 8) != 0;
    v4[14] = (*((_BYTE *)this + 288) & 0x40) != 0;
    v4[15] = (*((_BYTE *)this + 289) & 2) != 0;
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return 0;
}
