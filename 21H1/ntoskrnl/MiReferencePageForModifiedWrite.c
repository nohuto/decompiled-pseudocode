/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1403536FC
 * Callers:
 *     MiFillNoReservationCluster @ 0x14030FC38 (MiFillNoReservationCluster.c)
 *     MmStoreProbeAndLockPages @ 0x1403458AC (MmStoreProbeAndLockPages.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x140351CB0 (MiBuildMappedCluster.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140383E5C (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x140384044 (MiAddToReservationCluster.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x140355018 (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9

  v4 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
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
      MiClearPfnImageVerified(BugCheckParameter2, 28LL, v10, v11);
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
