/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1405CFF30
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x1406A0CF8 (PspGetStorageArray.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int StorageArray; // edi
  ULONG_PTR v4; // rbx
  char v5; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
    v2 = *(_QWORD *)(a1 + 1304);
  else
    v2 = qword_140D24990;
  v7 = 0;
  v8 = 0LL;
  StorageArray = PspGetStorageArray(v2, a2, &v7, &v8);
  if ( StorageArray >= 0 )
  {
    v4 = v8 + 16LL * v7;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    if ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      *(_QWORD *)(v4 + 8) = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      StorageArray = -1073741811;
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease(v4);
  }
  return (unsigned int)StorageArray;
}
