/*
 * XREFs of CmpQuitNextHive @ 0x140769B50
 * Callers:
 *     CmpDoFlushAll @ 0x14037DB0C (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 */

void __fastcall CmpQuitNextHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
