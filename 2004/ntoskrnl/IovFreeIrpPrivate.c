/*
 * XREFs of IovFreeIrpPrivate @ 0x1409C21C0
 * Callers:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1, v2, v3);
}
