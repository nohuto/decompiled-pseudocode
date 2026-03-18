/*
 * XREFs of ViResourceAcquireSanityChecks @ 0x1409DF5C0
 * Callers:
 *     VerifierExAcquireResourceExclusiveLite @ 0x1409DEAD0 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x1409DEB60 (VerifierExAcquireResourceExclusiveLiteNoReboot.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1409DEBA0 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireResourceSharedLiteNoReboot @ 0x1409DEC30 (VerifierExAcquireResourceSharedLiteNoReboot.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1409DEC70 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x1409DED00 (VerifierExAcquireSharedStarveExclusiveNoReboot.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1409DED40 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1409DEDD0 (VerifierExAcquireSharedWaitForExclusiveNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

struct _KTHREAD *__fastcall ViResourceAcquireSanityChecks(__int64 a1, char a2, int a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // dl

  if ( (a1 & 7) != 0 && (MmVerifierData & 0x800) != 0 )
    result = (struct _KTHREAD *)VerifierBugCheckIfAppropriate(0xC4u, 0x3DuLL, 0LL, 0LL, a1);
  if ( !a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
    {
      result = KeGetCurrentThread();
      if ( (result->MiscFlags & 0x400) == 0 )
      {
        result = KeGetCurrentThread();
        if ( !result->WaitBlock[3].SpareLong && (CurrentIrql != 2 || a2) && (MmVerifierData & 0x800) != 0 )
          return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                      0xC4u,
                                      0x37uLL,
                                      CurrentIrql,
                                      KeGetCurrentThread()->CombinedApcDisable,
                                      a1);
      }
    }
  }
  return result;
}
