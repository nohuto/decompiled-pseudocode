/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009FFC0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_746779f2823cbf70767820d403bde673___ @ 0x1C0050300 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_746779f2823cbf70767820d403bde67.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bda5f553d085dd05d20a452bf9b03c80___ @ 0x1C009F658 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bda5f553d085dd05d20a452bf9b03c8.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A02E0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 96);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bda5f553d085dd05d20a452bf9b03c80___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 96) &= ~1u;
    v4 = *((_DWORD *)this + 96);
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_746779f2823cbf70767820d403bde673___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 96) &= ~2u;
      return v5;
    }
    return 0;
  }
  return v5;
}
