/*
 * XREFs of CmpUnblockHiveWrites @ 0x1406919AC
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140691804 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14086C5B8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
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
