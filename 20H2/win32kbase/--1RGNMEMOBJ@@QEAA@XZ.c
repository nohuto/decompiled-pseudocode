/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C950
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateRectRgn @ 0x1C0090EC0 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(REGION **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(*this);
    *this = 0LL;
  }
}
