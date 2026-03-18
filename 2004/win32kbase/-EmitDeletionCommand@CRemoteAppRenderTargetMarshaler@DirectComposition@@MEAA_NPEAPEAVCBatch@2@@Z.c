/*
 * XREFs of ?EmitDeletionCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E85E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A12A0 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v4; // di
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( (v2 & 0x100) == 0 )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
  {
    v6 = (char *)v8;
    *(_DWORD *)v8 = 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 344;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x100u;
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  }
  return v4;
}
