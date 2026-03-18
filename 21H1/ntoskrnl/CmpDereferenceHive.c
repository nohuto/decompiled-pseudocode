/*
 * XREFs of CmpDereferenceHive @ 0x14065B4D0
 * Callers:
 *     CmpDoFlushAll @ 0x14037B05C (CmpDoFlushAll.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1068, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
