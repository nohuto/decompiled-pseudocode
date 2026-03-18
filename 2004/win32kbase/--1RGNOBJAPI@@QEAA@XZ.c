/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0082264
 * Callers:
 *     GreCopyVisRgn @ 0x1C0026650 (GreCopyVisRgn.c)
 *     GreRectInRegion @ 0x1C0028EB0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00304D0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C00320B0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C003DCC0 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C0051610 (GreIsValidRegion.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C00C0D10 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C014F0D0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014F140 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
