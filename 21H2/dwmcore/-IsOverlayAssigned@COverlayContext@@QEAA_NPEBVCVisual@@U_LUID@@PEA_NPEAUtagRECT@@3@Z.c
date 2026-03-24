/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEA_NPEAUtagRECT@@3@Z @ 0x18017CB00
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x18006858C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017CE38 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3,
        bool *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v6; // rbx
  char v7; // di
  unsigned int i; // r11d
  __int64 v10; // rax
  __int64 v11; // rdx
  bool v12; // al
  bool *v13; // r9

  v6 = *((_QWORD *)this + 914);
  v7 = 0;
  for ( i = 0; i < (unsigned int)((*((_QWORD *)this + 915) - v6) / 224); ++i )
  {
    v10 = 224LL * i;
    if ( *(const struct CVisual **)(v10 + v6 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v10 + v6 + 16) + 40LL) == a3 )
    {
      if ( i != -1 )
      {
        v11 = (int)i;
        v7 = 1;
        if ( a4 )
        {
          v12 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane((COverlayContext::OverlayPlaneInfo *)(v6 + 224LL * (int)i));
          *v13 = v12;
        }
        if ( a5 )
          *a5 = *(struct tagRECT *)(224 * v11 + v6 + 68);
        if ( a6 )
          *a6 = *(struct tagRECT *)(224 * v11 + *((_QWORD *)this + 914) + 52);
      }
      return v7;
    }
  }
  return v7;
}
