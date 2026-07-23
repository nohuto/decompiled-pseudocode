/*
 * XREFs of IovFreeIrpPrivate @ 0x1409C61D0
 * Callers:
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x1409D224C (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1, v2);
}
