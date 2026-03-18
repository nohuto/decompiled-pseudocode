/*
 * XREFs of ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00419F0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d56___ @ 0x1C0041A78 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_394ec4563cb9f209d8bec2a755d1dbfa___ @ 0x1C0041B18 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_394ec4563cb9f209d8bec2a755d1dbf.c)
 *     ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0041B9C (-EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CEffectBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d56___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_394ec4563cb9f209d8bec2a755d1dbfa___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( DirectComposition::CEffectBrushMarshaler::EmitSetInputs(this, a2) )
    return 1;
  return v3;
}
