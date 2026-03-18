/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x180050A8C
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x180050A50 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800425C8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CDrawListEntry **this)
{
  *this = (CDrawListEntry *)&CAsyncFlushResponse::`vftable';
  ReleaseInterface<CProcessAttribution>(this + 5);
  *this = (CDrawListEntry *)&CResponseItem::`vftable';
}
