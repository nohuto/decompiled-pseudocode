/*
 * XREFs of ?EmitUpdateCommands@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F2210
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A1BA0 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1eac7a4744b1282dcc9541e6ca5a3ea4___ @ 0x1C01F2108 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1eac7a4744b1282dcc9541e6ca5a3ea.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_64f727a620b884fc2ef46531f65be5cf___ @ 0x1C01F218C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_64f727a620b884fc2ef46531f65be5c.c)
 */

char __fastcall DirectComposition::CProxyGeometryClipMarshaler::EmitUpdateCommands(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProxyGeometryClipMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_64f727a620b884fc2ef46531f65be5cf___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1eac7a4744b1282dcc9541e6ca5a3ea4___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
