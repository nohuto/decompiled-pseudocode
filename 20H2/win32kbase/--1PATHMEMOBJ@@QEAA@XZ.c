/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0060FB0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
