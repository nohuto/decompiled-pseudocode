/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x14086F414
 * Callers:
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086F578 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086F454 (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
