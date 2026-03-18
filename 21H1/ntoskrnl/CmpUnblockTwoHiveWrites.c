/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1406913B8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x14069124C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14086C7D8 (CmpVirtualPathPresent.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(char *P, char *a2)
{
  char *v4; // rsi
  char v5; // al

  if ( P )
  {
    v4 = P + 72;
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
      ExfTryToWakePushLock(P + 72);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 72);
    KeAbPostRelease((ULONG_PTR)(a2 + 72));
  }
  if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 1068) )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2 + 1068) )
      CmpDeleteHive(a2);
  }
}
