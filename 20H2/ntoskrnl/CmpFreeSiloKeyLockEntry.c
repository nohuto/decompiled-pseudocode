/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x140874F64
 * Callers:
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1408750C8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140874FA4 (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
