/*
 * XREFs of SmpLookupControlBlock @ 0x1400035E4
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x1400059C0 (SmpStopCsr.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x140003634 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
