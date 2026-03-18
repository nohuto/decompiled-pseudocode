/*
 * XREFs of ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0052DA0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7e105be8d1e73d23541893f392b01252___ @ 0x1C0052E64 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7e105be8d1e73d23541893f392b0125.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___ @ 0x1C0052F04 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91d3aff1d54d1313213aa917b9173782___ @ 0x1C0052F8C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_91d3aff1d54d1313213aa917b917378.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___ @ 0x1C01EA3E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb8___ @ 0x1C01EA45C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb.c)
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CLegacyRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91d3aff1d54d1313213aa917b9173782___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7e105be8d1e73d23541893f392b01252___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb8___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  return 1;
}
