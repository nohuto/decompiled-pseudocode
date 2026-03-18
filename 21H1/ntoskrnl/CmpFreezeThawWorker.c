/*
 * XREFs of CmpFreezeThawWorker @ 0x14086D6B0
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
