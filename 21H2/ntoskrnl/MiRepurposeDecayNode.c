/*
 * XREFs of MiRepurposeDecayNode @ 0x14038EE6C
 * Callers:
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

unsigned __int8 __fastcall MiRepurposeDecayNode(PSLIST_ENTRY ListEntry)
{
  char v2; // al
  unsigned int v3; // edi
  unsigned __int8 result; // al

  MiUnlinkPageFromListEx((ULONG_PTR)ListEntry, 1);
  v2 = BYTE3(ListEntry[2].Next);
  if ( (v2 & 8) != 0 )
  {
    result = v2 & 0xF7;
    BYTE3(ListEntry[2].Next) = result;
  }
  else
  {
    v3 = -1431655765 * ((__int64)&ListEntry[0x22000000000LL] >> 4) - qword_140C52CE0;
    if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v3) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, v3);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    }
    return (unsigned __int8)RtlpInterlockedPushEntrySList(&stru_140C52CF0, ListEntry);
  }
  return result;
}
