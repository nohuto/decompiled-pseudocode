/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00F8DDC
 * Callers:
 *     AllocateAndLinkHidTLCInfo @ 0x1C0005938 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0006F10 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateProcessHidTable @ 0x1C00F7D44 (AllocateProcessHidTable.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00F80E4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     SearchHidTLCInfo @ 0x1C00F8D6C (SearchHidTLCInfo.c)
 *     CleanupHidRequestList @ 0x1C01D5A80 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C01D5B30 (FreeHidTLCInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
