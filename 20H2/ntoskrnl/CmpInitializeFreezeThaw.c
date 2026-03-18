/*
 * XREFs of CmpInitializeFreezeThaw @ 0x14079B490
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeFreezeThaw()
{
  __int64 *result; // rax

  CmpFreezeListLock = 0LL;
  result = &CmpFreezeThawWaitListHead;
  qword_140C47D38 = (__int64)&CmpFreezeThawWaitListHead;
  CmpFreezeThawWaitListHead = (__int64)&CmpFreezeThawWaitListHead;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
