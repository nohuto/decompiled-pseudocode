/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14
 * Callers:
 *     GreOffsetRgn @ 0x1C0037F80 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCopyVisRgn @ 0x1C00900F0 (GreCopyVisRgn.c)
 *     bDeleteRegion @ 0x1C00926B0 (bDeleteRegion.c)
 *     GreRectInRegion @ 0x1C0092E60 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C0096390 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C00978B0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C00A10E0 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00B20D0 (GreIsValidRegion.c)
 *     EngDeleteRgn @ 0x1C014CC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014CCB0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0293010 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
