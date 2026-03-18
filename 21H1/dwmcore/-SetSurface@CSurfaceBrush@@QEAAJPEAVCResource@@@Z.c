/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x18007E49C
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18000663C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18007E34C (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // edi
  int v6; // eax
  __int64 v7; // rcx
  struct CResource *v8; // rax
  __int64 v9; // rcx

  v2 = 0;
  if ( a2 != this[12] )
  {
    if ( a2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 40LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 200LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 83LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 127LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x425u, 0LL);
        return v2;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x428u, 0LL);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
    v8 = *this;
    this[12] = a2;
    (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v8 + 9))(this, 0LL, this);
  }
  return v2;
}
