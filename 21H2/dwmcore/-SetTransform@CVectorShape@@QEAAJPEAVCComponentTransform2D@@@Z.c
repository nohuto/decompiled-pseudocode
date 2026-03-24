/*
 * XREFs of ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801BE5A0
 * Callers:
 *     ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801BE508 (-ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFO.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801EC90C (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVectorShape::SetTransform(CVectorShape *this, struct CComponentTransform2D *a2)
{
  unsigned int v3; // esi
  struct CResource *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 8);
  if ( a2 != v4 )
  {
    if ( !a2 )
    {
LABEL_6:
      CResource::UnRegisterNotifierInternal(this, v4);
      *((_QWORD *)this + 8) = a2;
      (*(void (__fastcall **)(CVectorShape *, __int64))(*(_QWORD *)this + 72LL))(this, 2LL);
      return v3;
    }
    v6 = CResource::RegisterNotifier(this, a2);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v4 = (struct CResource *)*((_QWORD *)this + 8);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Du, 0LL);
  }
  return v3;
}
