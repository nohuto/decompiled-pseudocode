/*
 * XREFs of IsPciBusAsync @ 0x1C001B660
 * Callers:
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0025240 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 * Callees:
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall IsPciBusAsync(volatile signed __int32 *a1, KSPIN_LOCK a2, KSPIN_LOCK a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  KSPIN_LOCK *Pool2; // rbx
  char v11; // al
  KIRQL v13; // al
  __int64 v14; // rcx
  _BYTE *v15; // rdx

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return 0LL;
  Pool2 = (KSPIN_LOCK *)ExAllocatePool2(64LL, 136LL, 1181770561LL);
  if ( Pool2 )
    goto LABEL_5;
  v13 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
  v14 = 0LL;
  v15 = &unk_1C0080EA8;
  while ( *v15 )
  {
    v14 = (unsigned int)(v14 + 1);
    v15 += 144;
    if ( (unsigned int)v14 >= 4 )
      goto LABEL_15;
  }
  LOBYTE(gPreAllocPciPool[18 * v14 + 17]) = 1;
  Pool2 = &gPreAllocPciPool[18 * v14];
LABEL_15:
  KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v13);
  if ( !Pool2 )
    return 3221225626LL;
LABEL_5:
  memset(Pool2 + 1, 0, 0x80uLL);
  v11 = gdwfAMLI;
  *Pool2 = (KSPIN_LOCK)a1;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (v11 & 4) != 0 )
    _InterlockedIncrement(a1 + 2);
  *((_DWORD *)Pool2 + 10) = -1;
  Pool2[6] = a2;
  Pool2[7] = a3;
  Pool2[8] = (KSPIN_LOCK)a4;
  return IsPciBusAsyncWorker((__int64)a1, 0, 0, Pool2);
}
