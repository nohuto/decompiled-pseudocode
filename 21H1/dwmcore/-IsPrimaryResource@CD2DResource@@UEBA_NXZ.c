/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@UEBA_NXZ @ 0x1800DCC68
 * Callers:
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ @ 0x1800ED880 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ @ 0x1800ED8A0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EE5C0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x1800EEDC0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800EEE30 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x1800EEEA0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x1800EF8F0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(CD2DResource *this)
{
  return *((_BYTE *)this - 71);
}
