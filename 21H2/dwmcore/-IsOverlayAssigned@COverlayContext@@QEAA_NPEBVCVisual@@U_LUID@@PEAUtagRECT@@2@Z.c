/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@2@Z @ 0x1800103B4
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3,
        struct tagRECT *a4,
        struct tagRECT *a5)
{
  __int64 v5; // r11
  char v6; // di
  unsigned int i; // r10d
  __int64 v9; // rax

  v5 = *((_QWORD *)this + 913);
  v6 = 0;
  for ( i = 0; i < -1227133513 * (unsigned int)((*((_QWORD *)this + 914) - v5) >> 5); ++i )
  {
    v9 = 224LL * i;
    if ( *(const struct CVisual **)(v9 + v5 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v9 + v5 + 16) + 40LL) == a3 )
    {
      if ( i != -1 )
      {
        v6 = 1;
        if ( a4 )
          *a4 = *(struct tagRECT *)(224LL * (int)i + v5 + 68);
        if ( a5 )
          *a5 = *(struct tagRECT *)(224LL * (int)i + *((_QWORD *)this + 913) + 52);
      }
      return v6;
    }
  }
  return v6;
}
