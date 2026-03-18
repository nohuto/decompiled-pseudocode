/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1402F771C
 * Callers:
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x1402F5CD0 (MiBuildMappedCluster.c)
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 *     MiFillNoReservationCluster @ 0x14034D2C8 (MiFillNoReservationCluster.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140384DC8 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x140384FB0 (MiAddToReservationCluster.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F9038 (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx

  v4 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v6 = *(_BYTE *)(BugCheckParameter2 + 34);
    ++*(_WORD *)(BugCheckParameter2 + 32);
    v7 = v6 | 8;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) = v7 & 0xEF;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      MiClearPfnImageVerified(BugCheckParameter2, 28);
    }
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2u;
  if ( (a2 & 2) == 0 )
    v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  result = MiChargeForWriteInProgressPage(v4, v9);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
