/*
 * XREFs of ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E64C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_111a47ea54d40238ee4bf82dd15994f9___ @ 0x1C01E6200 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_111a47ea54d40238ee4bf82dd15994f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af64f2dae60dfc1c39a36c37ff2c2ed9___ @ 0x1C01E6274 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_af64f2dae60dfc1c39a36c37ff2c2ed.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e729cec4809a2969eb9b9e31d395b797___ @ 0x1C01E62E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e729cec4809a2969eb9b9e31d395b79.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f310ad4bd11bf0ddd97c4ae1fe7ecd67___ @ 0x1C01E635C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f310ad4bd11bf0ddd97c4ae1fe7ecd6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f90b95a5070878dcf2454476642f347a___ @ 0x1C01E63E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f90b95a5070878dcf2454476642f347.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_4ad76b37c5f805c67429e5a989919464___ @ 0x1C01E6454 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_4ad76b37c5f805c67429.c)
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  int v3; // eax
  char v4; // di
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  DirectComposition::CApplicationChannel *v8; // rsi
  DirectComposition::CVisualSurfaceMarshaler *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  v10 = this;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f310ad4bd11bf0ddd97c4ae1fe7ecd67___(
            (__int64)this,
            a2,
            (__int64)&v10) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x20u;
    v3 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v3 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f90b95a5070878dcf2454476642f347a___(
            (__int64)this,
            a2,
            (__int64)&v10) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x40u;
    v3 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v3 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e729cec4809a2969eb9b9e31d395b797___(
            (__int64)this,
            a2,
            (__int64)&v10) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x80u;
    v3 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v3 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af64f2dae60dfc1c39a36c37ff2c2ed9___(
            (__int64)this,
            a2,
            (__int64)&v10) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x100u;
    v3 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v3 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_111a47ea54d40238ee4bf82dd15994f9___(
            (__int64)this,
            a2,
            (__int64)&v10) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  if ( !*((_BYTE *)this + 92) )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_4ad76b37c5f805c67429e5a989919464___(
         (__int64)this,
         a2,
         a3) )
  {
    v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
    v8 = (DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
    if ( v7 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(v8, v7);
      *((_QWORD *)this + 7) = 0LL;
    }
    *((_BYTE *)v8 + 240) |= 0x10u;
    return 1;
  }
  return v4;
}
