/*
 * XREFs of PopPdcCsDeviceNotification @ 0x1408EB794
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A6FF98 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x1407B7888 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1408EBAEC (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x1408ED5D0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408ED80C (PopNetNonCompliantDeviceUpdate.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  _OWORD *PoolWithTag; // rax
  _OWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  void **v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v4 = PopPdcDeviceList;
  v5 = 0LL;
  v6 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        *((_QWORD *)PoolWithTag + 4) = 0LL;
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)a1;
        *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(a1 + 8);
        *((_BYTE *)PoolWithTag + 32) = *(_BYTE *)(a1 + 13);
        *((_DWORD *)PoolWithTag + 7) = 1;
        v9 = off_140C0EDC0;
        if ( *off_140C0EDC0 == (_UNKNOWN *)&PopPdcDeviceList )
        {
          *(_QWORD *)v8 = &PopPdcDeviceList;
          *((_QWORD *)v8 + 1) = v9;
          *v9 = v8;
          off_140C0EDC0 = (_UNKNOWN **)v8;
          goto LABEL_20;
        }
        goto LABEL_28;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
      {
        v11 = (void **)*((_QWORD *)v4 + 1);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v10[1] = v11;
          ExFreePoolWithTag(v5, 0x6F435343u);
LABEL_20:
          PopPdcUpdateDeviceCompliance();
          PopAcquirePolicyLock(v12);
          v14 = *(int *)(a1 + 8);
          if ( (((_DWORD)v14 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 3 )
          {
            v15 = PopCsDeviceCompliance;
            if ( PopCsDeviceCompliance[v14] == -1 )
            {
              LOBYTE(v15) = *(_BYTE *)(a1 + 12);
              PopNetNonCompliantDeviceUpdate(v15);
            }
          }
          else
          {
            if ( *(_BYTE *)(a1 + 13) )
            {
              LOBYTE(v13) = *(_BYTE *)(a1 + 12);
              PopNetCompliantNicUpdate(v13);
            }
            PopNetUpdateCsConsumptionFlags();
          }
          PopReleasePolicyLock(v15, v14);
          goto LABEL_30;
        }
      }
LABEL_28:
      __fastfail(3u);
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  return v1;
}
