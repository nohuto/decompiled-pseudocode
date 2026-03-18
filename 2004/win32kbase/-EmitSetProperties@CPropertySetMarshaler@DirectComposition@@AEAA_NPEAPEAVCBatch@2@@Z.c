/*
 * XREFs of ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A01C8
 * Callers:
 *     ?EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A0170 (-EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0002B28 (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0004E44 (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0043CFC (--$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposi.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A005C (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A17B8 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A32BC (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C01E7D04 (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C01E7E10 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperties(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // al

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)this + 9);
        if ( (*(_DWORD *)(v6 + 8 * v5 + 4) & 0xE0000000) != 0 )
          break;
LABEL_9:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
          goto LABEL_10;
      }
      switch ( *(_DWORD *)(v6 + 8 * v5) )
      {
        case 0x11:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetBooleanValue,bool>(
                 this,
                 a2,
                 (unsigned int)v5);
          break;
        case 0x12:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetScalarValue,float>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 0x23:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector2Value,D2DVector2>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 0x34:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector3Value,D2DVector3>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 0x45:
          goto LABEL_24;
        case 0x46:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 0x47:
LABEL_24:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetQuaternionValue,D2DQuaternion>(
                 this,
                 a2,
                 (unsigned int)v5);
          break;
        case 0x68:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
                 this,
                 a2,
                 (unsigned int)v5);
          break;
        case 0x109:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                 this,
                 a2,
                 (unsigned int)v5);
          break;
        default:
LABEL_8:
          if ( !v4 )
            return v4;
          goto LABEL_9;
      }
      v4 = v7;
      goto LABEL_8;
    }
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  return v4;
}
