/*
 * XREFs of CmpQuitNextHive @ 0x14076DD54
 * Callers:
 *     CmpDoFlushAll @ 0x14037D9EC (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 */

void __fastcall CmpQuitNextHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
