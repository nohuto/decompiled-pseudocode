/*
 * XREFs of ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801EBBCC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801BDB20 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801EB9F0 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetViewBox(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETVIEWBOX *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  CVectorShape *v12; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
         ResourceWithoutType,
         193LL) )
  {
    v8 = CShapeVisual::EnsureShapeTree(this, &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v11 = 23;
    }
    else
    {
      v8 = CVectorShape::SetTransform(v12, v5);
      v7 = v8;
      if ( v8 >= 0 )
        return v7;
      v11 = 24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v11, 0LL);
    return v7;
  }
  v7 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x13u, 0LL);
  return v7;
}
