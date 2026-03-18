/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14028C14C
 * Callers:
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x14028B8B0 (MiBuildMappedCluster.c)
 *     MiFillNoReservationCluster @ 0x14037E554 (MiFillNoReservationCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140385584 (MmStoreProbeAndLockPages.c)
 *     MiGetPageForWriteCluster @ 0x14045C0E8 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14059AAF8 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x140282160 (MiChargeForWriteInProgressPage.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  int v9; // r8d
  char v10; // dl

  v4 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v6 = *(_BYTE *)(BugCheckParameter2 + 34);
    ++*(_WORD *)(BugCheckParameter2 + 32);
    v7 = v6 | 8;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) = v7 & 0xEF;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(BugCheckParameter2) & 0x10) != 0 )
      MiClearPfnImageVerified(BugCheckParameter2, 28);
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
