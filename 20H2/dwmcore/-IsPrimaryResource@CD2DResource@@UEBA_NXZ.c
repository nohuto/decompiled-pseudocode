/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@UEBA_NXZ @ 0x1800DE348
 * Callers:
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ @ 0x1800F0460 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ @ 0x1800F0480 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F11A0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x1800F19A0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F1A10 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x1800F1A80 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x1800F24D0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(CD2DResource *this)
{
  return *((_BYTE *)this - 71);
}
