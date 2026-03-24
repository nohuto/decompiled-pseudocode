/*
 * XREFs of CmpUnblockHiveWrites @ 0x14066FDA8
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140654F90 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14066FC00 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870C28 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     CmpGetNextHive @ 0x140670E04 (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  char *v6; // rsi
  char v7; // al
  __int64 result; // rax
  __int64 i; // rax
  ULONG_PTR v10; // rsi

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
      if ( !a2 || (a2 & *(_DWORD *)(i + 4152)) == a2 || i == CmpMasterHive )
      {
        v10 = i + 72;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(i + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        KeAbPostRelease(v10);
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
