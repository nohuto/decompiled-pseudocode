/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1405C89A0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x1406EC4F8 (PspGetStorageArray.c)
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
    v2 = qword_140D24980;
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
      ExfTryToWakePushLock(v4);
    KeAbPostRelease(v4);
  }
  return (unsigned int)StorageArray;
}
