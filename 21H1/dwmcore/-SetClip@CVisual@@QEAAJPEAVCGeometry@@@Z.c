/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800BFBC4
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800BFB74 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007F37C (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800BFC78 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  char v5; // bp
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( a2 != this[30] )
  {
    v5 = 0;
    if ( a2 )
      v5 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 216LL))(a2);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xAFBu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
      this[30] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags((__int64)this, 5u);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v3;
}
