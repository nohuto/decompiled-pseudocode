/*
 * XREFs of ViResourceAcquireSanityChecks @ 0x1409E55E0
 * Callers:
 *     VerifierExAcquireResourceExclusiveLite @ 0x1409E4AF0 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x1409E4B80 (VerifierExAcquireResourceExclusiveLiteNoReboot.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1409E4BC0 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireResourceSharedLiteNoReboot @ 0x1409E4C50 (VerifierExAcquireResourceSharedLiteNoReboot.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1409E4C90 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x1409E4D20 (VerifierExAcquireSharedStarveExclusiveNoReboot.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1409E4D60 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1409E4DF0 (VerifierExAcquireSharedWaitForExclusiveNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
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
