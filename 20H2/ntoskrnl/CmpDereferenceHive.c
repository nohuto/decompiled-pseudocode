/*
 * XREFs of CmpDereferenceHive @ 0x1406A32E0
 * Callers:
 *     CmpDoFlushAll @ 0x14037DB0C (CmpDoFlushAll.c)
 *     CmpLateUnloadHiveWorker @ 0x1406A2B40 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1068, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
