/*
 * XREFs of ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1800454DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180045550 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVectorShape::ProcessSetTransform(
        CVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VECTORSHAPE_SETTRANSFORM *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rbx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
          ResourceWithoutType,
          27LL) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x3Au, 0LL);
  }
  else
  {
    v7 = CVectorShape::SetTransform(this, v5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Du, 0LL);
  }
  return v9;
}
