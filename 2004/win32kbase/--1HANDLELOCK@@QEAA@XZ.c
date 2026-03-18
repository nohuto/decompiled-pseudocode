/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x1C008BB60
 * Callers:
 *     HmgFree @ 0x1C007FE20 (HmgFree.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0A78 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0B70 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  if ( *((_DWORD *)this + 2) )
    HANDLELOCK::vUnlock(this);
}
