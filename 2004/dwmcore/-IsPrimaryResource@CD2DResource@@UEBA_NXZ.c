/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@UEBA_NXZ @ 0x1800DE0C8
 * Callers:
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ @ 0x1800F0810 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ @ 0x1800F0830 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1550 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x1800F1D50 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F1DC0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x1800F1E30 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x1800F2880 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(CD2DResource *this)
{
  return *((_BYTE *)this - 71);
}
