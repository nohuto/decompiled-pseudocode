/*
 * XREFs of ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E2954
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E2DC0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E3060 (-EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_102dfb2d34a03fd5ee7126208604c48c___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___ @ 0x1C01E25EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_102dfb2d34a03fd5ee7126208604c48.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_63884a1f358d3dfeb4b627432b7f66dc___ @ 0x1C01E2710 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_63884a1f358d3dfeb4b627432b7f66d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_69376022da3f369b4dbaa0651d8b984f___ @ 0x1C01E2794 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_69376022da3f369b4dbaa0651d8b984.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f12aa49554ca87a6ca48499eb9edd40___ @ 0x1C01E2808 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6f12aa49554ca87a6ca48499eb9edd4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c0e43ab59b3e766de02193d11da2a3d6___ @ 0x1C01E287C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c0e43ab59b3e766de02193d11da2a3d.c)
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  __int64 v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CGradientBrushMarshaler *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_63884a1f358d3dfeb4b627432b7f66dc___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_69376022da3f369b4dbaa0651d8b984f___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f12aa49554ca87a6ca48499eb9edd40___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c0e43ab59b3e766de02193d11da2a3d6___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_102dfb2d34a03fd5ee7126208604c48c___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___(
         (__int64)this,
         a2,
         (unsigned int *)this + 27,
         *((_DWORD *)this + 26),
         v7,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
