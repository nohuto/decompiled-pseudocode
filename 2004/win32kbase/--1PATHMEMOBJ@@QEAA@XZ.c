/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0041C40
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
