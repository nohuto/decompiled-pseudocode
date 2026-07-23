/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x140664940
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406647D4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140870FB0 (CmpVirtualPathPresent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
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
