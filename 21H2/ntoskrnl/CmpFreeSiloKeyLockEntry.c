/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x1409192C8
 * Callers:
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140919308 (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
