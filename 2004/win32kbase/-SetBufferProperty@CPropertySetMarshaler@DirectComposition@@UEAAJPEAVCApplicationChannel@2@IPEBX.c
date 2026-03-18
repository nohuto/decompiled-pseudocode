/*
 * XREFs of ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0028830
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C0028A30 (--$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C0028AC0 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C0028B4C (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C0028BD8 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySe.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C0028C54 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C0028CE0 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUProperty.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C0028D70 (--$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C0028DFC (--$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValu.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C00C42B4 (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00C4340 (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C01E7C74 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x1C01E7F20 (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C01E7FA4 (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C01E802C (--$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C01E80B8 (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetBufferProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v8; // xmm0_8
  int updated; // eax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]

  v6 = 0;
  if ( a3 > 1 || a5 - 12 > 0x40 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a4;
  v12 = a4[2];
  v11 = v8;
  switch ( v12 )
  {
    case 17:
      if ( (_DWORD)a5 != 16 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<bool>(this, &v11, a4 + 3);
      break;
    case 18:
      if ( (_DWORD)a5 == 16 )
      {
        if ( a3 )
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(this, &v11, a4 + 3);
        else
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<float>(this, &v11, a4 + 3);
        break;
      }
      return (unsigned int)-1073741811;
    case 35:
      if ( (_DWORD)a5 != 20 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector2>(this, &v11, a4 + 3);
      break;
    case 52:
      if ( (_DWORD)a5 != 24 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector3>(this, &v11, a4 + 3);
      break;
    case 69:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        goto LABEL_40;
      goto LABEL_23;
    case 70:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
      {
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<_D3DCOLORVALUE>(this, &v11, a4 + 3);
        break;
      }
      goto LABEL_23;
    case 71:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
      {
LABEL_40:
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(this, &v11, a4 + 3);
        break;
      }
LABEL_23:
      updated = DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(this, &v11, a4 + 3);
      break;
    case 104:
      if ( (_DWORD)a5 != 36 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
      break;
    case 265:
      if ( (_DWORD)a5 != 76 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(this, &v11, a4 + 3);
      break;
    default:
      goto LABEL_9;
  }
  v6 = updated;
  if ( updated >= 0 )
  {
LABEL_9:
    *((_DWORD *)this + 4) |= 0x80u;
    *a6 = 1;
  }
  return v6;
}
