/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E1F00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A02E0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___ @ 0x1C01E1C8C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776.c)
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E1EAC (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CShapeVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 98);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 98) &= ~1u;
  }
  if ( !DirectComposition::CShapeVisualMarshaler::EmitShapes(this, a2) )
    return 0;
  return v5;
}
