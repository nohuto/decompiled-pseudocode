/*
 * XREFs of ?IsHardwareProtected@CD2DResource@@UEBA_NXZ @ 0x1800DF070
 * Callers:
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1190 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x1800F1990 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F1A00 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x1800F1A70 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsHardwareProtected(CD2DResource *this)
{
  return *((_BYTE *)this - 70);
}
