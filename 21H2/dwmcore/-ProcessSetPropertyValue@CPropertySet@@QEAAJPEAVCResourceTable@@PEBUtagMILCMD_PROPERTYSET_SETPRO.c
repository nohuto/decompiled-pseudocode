/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180044E94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x1800190C4 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180044FD0 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x1800E17DC (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800E45F0 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800E7478 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800EBAAC (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x1802379C4 (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180237A98 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180237B6C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        __int64 a4,
        unsigned int a5)
{
  int updated; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_DWORD *)a3 + 4) )
  {
    case 0x11:
      if ( a5 != 4 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x59u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<bool>(this, a3, a4);
      v7 = updated;
      if ( updated < 0 )
      {
        v9 = 90;
        goto LABEL_49;
      }
      break;
    case 0x12:
      if ( a5 != 4 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x5Eu, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<float>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 95;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, v9, 0LL);
      return v7;
    case 0x23:
      if ( a5 != 8 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x63u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, (__int64)a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 100;
      goto LABEL_49;
    case 0x34:
      if ( a5 != 12 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x68u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 105;
      goto LABEL_49;
    case 0x45:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x6Du, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 110;
      goto LABEL_49;
    case 0x46:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x72u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 115;
      goto LABEL_49;
    case 0x47:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x77u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DQuaternion>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 120;
      goto LABEL_49;
    case 0x68:
      if ( a5 != 24 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x7Cu, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 125;
      goto LABEL_49;
    case 0x109:
      if ( a5 != 64 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x81u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
      v7 = updated;
      if ( updated < 0 )
      {
        v9 = 130;
        goto LABEL_49;
      }
      break;
    default:
      ModuleFailFastForHRESULT(2291663875LL, retaddr);
  }
  return 0;
}
