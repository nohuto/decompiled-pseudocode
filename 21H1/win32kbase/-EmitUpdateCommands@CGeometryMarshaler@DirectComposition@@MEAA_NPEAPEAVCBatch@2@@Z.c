/*
 * XREFs of ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BDE70
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BDF10 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD810 (-EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEllipseGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EAB60 (-EmitUpdateCommands@CEllipseGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLineGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EAD70 (-EmitUpdateCommands@CLineGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EAEA0 (-EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7C40 (-EmitUpdateCommands@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC93C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_64908135f1c49a3973e646aa3bcc2672___ @ 0x1C00C02E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_64908135f1c49a3973e646aa3bcc267.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_06ba42d09620fef85c2a15f679544b4c___ @ 0x1C01EA890 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_06ba42d09620fef85c2a15f679544b4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09b4ae0d16a1760f70555ce71a600cac___ @ 0x1C01EA904 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_09b4ae0d16a1760f70555ce71a600ca.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a5365cf2dea5d0e237b7ba311a8cf2___ @ 0x1C01EA978 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_55a5365cf2dea5d0e237b7ba311a8cf.c)
 */

char __fastcall DirectComposition::CGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_64908135f1c49a3973e646aa3bcc2672___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09b4ae0d16a1760f70555ce71a600cac___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_06ba42d09620fef85c2a15f679544b4c___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a5365cf2dea5d0e237b7ba311a8cf2___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    return 1;
  }
  return v4;
}
