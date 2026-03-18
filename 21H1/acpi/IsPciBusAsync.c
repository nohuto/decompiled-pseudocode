/*
 * XREFs of IsPciBusAsync @ 0x1C00173B0
 * Callers:
 *     IsPciDeviceWorker @ 0x1C0016480 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00174B0 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028970 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsNsobjPciBus @ 0x1C009D720 (IsNsobjPciBus.c)
 * Callees:
 *     IsPciBusAsyncWorker @ 0x1C00174B0 (IsPciBusAsyncWorker.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall IsPciBusAsync(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  char *PoolWithTag; // rbx
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x46706341u);
  if ( PoolWithTag )
    goto LABEL_5;
  v13 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
  v14 = 0LL;
  v15 = &unk_1C0081CC8;
  while ( *v15 )
  {
    v14 = (unsigned int)(v14 + 1);
    v15 += 144;
    if ( (unsigned int)v14 >= 4 )
      goto LABEL_15;
  }
  *((_BYTE *)&gPreAllocPciPool + 144 * v14 + 136) = 1;
  PoolWithTag = (char *)&gPreAllocPciPool + 144 * v14;
LABEL_15:
  KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v13);
  if ( !PoolWithTag )
    return 3221225626LL;
LABEL_5:
  memset(PoolWithTag + 8, 0, 0x80uLL);
  v11 = gdwfAMLI;
  *(_QWORD *)PoolWithTag = a1;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (v11 & 4) != 0 )
    _InterlockedIncrement(a1 + 2);
  *((_DWORD *)PoolWithTag + 10) = -1;
  *((_QWORD *)PoolWithTag + 6) = a2;
  *((_QWORD *)PoolWithTag + 7) = a3;
  *((_QWORD *)PoolWithTag + 8) = a4;
  return IsPciBusAsyncWorker(a1, 0LL, 0LL, PoolWithTag);
}
