/*
 * XREFs of CmpUnblockHiveWrites @ 0x14063F860
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14063F6B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14086D908 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  char *v6; // rsi
  char v7; // al
  __int64 result; // rax
  __int64 *i; // rax
  volatile signed __int64 *v10; // rsi

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
    for ( i = CmpGetNextHive(0LL); ; i = CmpGetNextHive(v5) )
    {
      v5 = (volatile signed __int32 *)i;
      if ( !a2 || (a2 & (_DWORD)i[519]) == a2 || i == (__int64 *)CmpMasterHive )
      {
        v10 = i + 9;
        if ( (_InterlockedExchangeAdd64(i + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        KeAbPostRelease((ULONG_PTR)v10);
        if ( _InterlockedExchangeAdd(v5 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v5);
      }
      if ( v5 == a3 )
        break;
    }
  }
  result = (unsigned int)_InterlockedDecrement(v5 + 1068);
  if ( !(_DWORD)result )
    return CmpDeleteHive((PVOID)v5);
  return result;
}
