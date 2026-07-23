/*
 * XREFs of CmpUnblockHiveWrites @ 0x140666288
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870D88 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  char *v6; // rsi
  char v7; // al
  __int64 i; // rax
  ULONG_PTR v9; // rsi

  v5 = (volatile signed __int32 *)P;
  if ( P )
  {
    v6 = (char *)(P + 9);
    v7 = _InterlockedExchangeAdd64(P + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(P + 9);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  else
  {
    for ( i = CmpGetNextHive(0LL); ; i = CmpGetNextHive((PVOID)v5) )
    {
      v5 = (volatile signed __int32 *)i;
      if ( !a2 || (a2 & *(_DWORD *)(i + 4152)) == a2 || (PVOID)i == CmpMasterHive )
      {
        v9 = i + 72;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(i + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9);
        KeAbPostRelease(v9);
        if ( _InterlockedExchangeAdd(v5 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
    }
  }
  if ( !_InterlockedDecrement(v5 + 1068) )
    CmpDeleteHive(v5);
}
