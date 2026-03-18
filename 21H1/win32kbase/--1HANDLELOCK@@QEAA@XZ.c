/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x1C0084A8C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0078 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0170 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  if ( *((_DWORD *)this + 2) )
    HANDLELOCK::vUnlock(this);
}
