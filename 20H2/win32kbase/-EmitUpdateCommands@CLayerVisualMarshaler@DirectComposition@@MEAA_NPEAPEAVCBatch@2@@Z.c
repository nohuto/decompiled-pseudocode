/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078890
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14e___ @ 0x1C00047D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe1433135___ @ 0x1C00053B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe143313.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007B350 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___ @ 0x1C007E1AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___ @ 0x1C01DFD50 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf8.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CLayerVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 97);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14e___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 97) &= ~1u;
    v4 = *((_DWORD *)this + 97);
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe1433135___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 97) &= ~2u;
    v4 = *((_DWORD *)this + 97);
  }
  v7 = this;
  if ( (v4 & 4) == 0 )
    goto LABEL_7;
  if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___(
                           this,
                           a2,
                           &v7) )
    return 0;
  *((_DWORD *)this + 97) &= ~4u;
  v4 = *((_DWORD *)this + 97);
LABEL_7:
  v7 = this;
  if ( (v4 & 8) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 97) &= ~8u;
      return v5;
    }
    return 0;
  }
  return v5;
}
