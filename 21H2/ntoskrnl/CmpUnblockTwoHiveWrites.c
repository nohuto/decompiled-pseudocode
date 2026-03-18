/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x14071A784
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140718CA8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140917930 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(volatile signed __int32 *P, volatile signed __int32 *a2)
{
  if ( P )
    HvUnlockHiveFlusherExclusive(P);
  if ( a2 )
    HvUnlockHiveFlusherExclusive(a2);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd(a2 + 1058, 0xFFFFFFFF) == 1 )
      CmpDeleteHive(a2);
  }
}
