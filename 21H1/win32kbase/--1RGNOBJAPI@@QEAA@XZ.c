/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944
 * Callers:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     GreRectInRegion @ 0x1C0019130 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C001C210 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C001E180 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C002F4A0 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C0043B50 (GreIsValidRegion.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C008CE0C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C00A9EB0 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C0155420 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0155490 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
