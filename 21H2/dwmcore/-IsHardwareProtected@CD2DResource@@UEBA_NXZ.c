/*
 * XREFs of ?IsHardwareProtected@CD2DResource@@UEBA_NXZ @ 0x1800FC000
 * Callers:
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x180108230 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x180109350 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x180109450 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsHardwareProtected(CD2DResource *this)
{
  return *((_BYTE *)this - 70);
}
