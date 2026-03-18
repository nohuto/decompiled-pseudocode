/*
 * XREFs of CcNotifyWriteBehindEx @ 0x14037F530
 * Callers:
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140312440 (CcNotifyWriteBehindInternal.c)
 */

LONG __fastcall CcNotifyWriteBehindEx(LONG a1, __int64 a2)
{
  LONG result; // eax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, result);
  return result;
}
