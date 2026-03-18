/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800353DC
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800353A0 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18009747C (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CAsyncFlushResponse *this)
{
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  ReleaseInterface<CProcessAttribution>((char *)this + 40);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
