/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14034474C
 * Callers:
 *     MiFillNoReservationCluster @ 0x14031E248 (MiFillNoReservationCluster.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x140345BF8 (MiBuildMappedCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140351898 (MmStoreProbeAndLockPages.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140386F74 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14038715C (MiAddToReservationCluster.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiChargeForWriteInProgressPage @ 0x1403441A0 (MiChargeForWriteInProgressPage.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  int v9; // r8d
  char v10; // dl

  v4 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
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
      MiClearPfnImageVerified(BugCheckParameter2, 28LL);
    }
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  v10 = v9 | 2;
  if ( (a2 & 2) == 0 )
    v10 = v9;
  result = MiChargeForWriteInProgressPage(v4, v10);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
