/*
 * XREFs of ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1800D0DE4
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18001D8B8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1800D0D84 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CResource *v7; // rax

  if ( a2 != this[10] )
  {
    if ( a2 )
    {
      v4 = CResource::RegisterNotifier((CResource *)this, a2);
      v6 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x178u, 0LL);
        return v6;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    v7 = *this;
    this[10] = a2;
    (*((void (__fastcall **)(struct CResource **, __int64))v7 + 9))(this, 14LL);
  }
  return 0;
}
