/*
 * XREFs of CmpDereferenceHive @ 0x1406A5F0C
 * Callers:
 *     CmpDoFlushAll @ 0x14022EA80 (CmpDoFlushAll.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
