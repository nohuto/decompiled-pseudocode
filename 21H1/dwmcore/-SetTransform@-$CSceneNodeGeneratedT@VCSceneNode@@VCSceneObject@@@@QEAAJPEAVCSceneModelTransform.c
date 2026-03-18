/*
 * XREFs of ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x180177D9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1801EF2BC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetTransform(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  bool v7; // zf

  v2 = 0;
  if ( a2 != this[7] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC62u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
      v7 = this[16] == 0LL;
      this[7] = a2;
      if ( !v7 )
      {
        CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)this);
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
