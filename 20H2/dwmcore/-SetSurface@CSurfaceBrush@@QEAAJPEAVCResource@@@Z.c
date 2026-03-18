/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800AB78C
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001E734 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800AB63C (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
