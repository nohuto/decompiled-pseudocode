/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C001B140
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001B170 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C0075770 (PopThreadGuardedObject.c)
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
