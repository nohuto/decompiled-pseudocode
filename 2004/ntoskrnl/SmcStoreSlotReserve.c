/*
 * XREFs of SmcStoreSlotReserve @ 0x14092AE68
 * Callers:
 *     SmcStoreCreate @ 0x14092A558 (SmcStoreCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SSHSupportAllocateNonPaged @ 0x14030D838 (SSHSupportAllocateNonPaged.c)
 *     SmcStorePlacementGet @ 0x14092A960 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x14092AD2C (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // r12
  struct _PRIVILEGE_SET *NonPaged; // rax
  struct _PRIVILEGE_SET *v8; // r14
  struct _PRIVILEGE_SET *p_Control; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  int v12; // eax

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5;
  v6 = 0LL;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged(4 * v4, 0x72436D73u);
  v8 = NonPaged;
  if ( !NonPaged )
    return v6;
  p_Control = NonPaged;
  if ( v4 )
  {
    if ( ((unsigned __int8)NonPaged & 4) != 0 )
    {
      NonPaged->PrivilegeCount = -1;
      if ( !--v4 )
        goto LABEL_8;
      p_Control = (struct _PRIVILEGE_SET *)&NonPaged->Control;
    }
    memset(p_Control, 0xFFu, 8 * (v4 >> 1));
    if ( (v4 & 1) != 0 )
      *((_DWORD *)p_Control + v4 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v11 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  while ( v11 < a1 + 552 )
  {
    if ( *(_DWORD *)v11 == -1 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( (v12 & 4) == 0 )
      {
        *(_QWORD *)(v11 + 8) = v8;
        *(_DWORD *)(v11 + 4) = v12 | 4;
        v8 = 0LL;
        if ( (int)SmcStorePlacementGet(a1, a3, v11) >= 0 )
        {
          v6 = v11;
          v11 = 0LL;
        }
        if ( v11 )
        {
          SmcStoreSlotAbort(a1, v11, 1);
          return v6;
        }
        break;
      }
    }
    v11 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v8 )
    CmSiFreeMemory(v8);
  return v6;
}
