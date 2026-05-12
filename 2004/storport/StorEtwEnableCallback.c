/*
 * XREFs of StorEtwEnableCallback @ 0x1C004DF88
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0032F30 (McGenControlCallbackV2.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000CB24 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleasePortData @ 0x1C000CE94 (RaidReleasePortData.c)
 *     RaidGetPortData @ 0x1C000CEB4 (RaidGetPortData.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     StorEtwAdapterNeedsUpdate @ 0x1C004DEE4 (StorEtwAdapterNeedsUpdate.c)
 *     StorEtwEnableAdapter @ 0x1C004DF10 (StorEtwEnableAdapter.c)
 */

void __fastcall StorEtwEnableCallback(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  char *PortData; // rax
  char *v8; // r13
  char *v9; // r12
  char *i; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 *v13; // r14
  __int64 *v14; // r8
  char v15; // al
  __int64 **v16; // r8
  unsigned int v17; // ecx
  __int64 *PoolWithTag; // rax
  __int64 v19; // rbp
  __int64 *v20; // r15
  __int64 *v21; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v6 = a2;
  StorEtwLoggingEnabled = a2 != 0;
  StorRequestThresholdTime = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    StorRequestThresholdTime = **(_QWORD **)a6;
  PortData = RaidGetPortData();
  v8 = PortData;
  if ( PortData )
  {
    v9 = PortData + 8;
    for ( i = (char *)*((_QWORD *)PortData + 1); i != v9; i = *(char **)i )
    {
      v11 = 0LL;
      v12 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)i + 7, &LockHandle);
      if ( *((_DWORD *)i + 12) )
      {
        v13 = (__int64 *)(i + 32);
        v14 = (__int64 *)*((_QWORD *)i + 4);
        if ( v14 != (__int64 *)(i + 32) )
        {
          do
          {
            v15 = StorEtwAdapterNeedsUpdate((__int64)(v14 - 8), v6);
            v14 = *v16;
            v17 = v12 + 1;
            if ( !v15 )
              v17 = v12;
            v12 = v17;
          }
          while ( v14 != v13 );
          if ( v17 )
          {
            PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v17, 0x54456152u);
            v11 = PoolWithTag;
            if ( PoolWithTag )
            {
              v19 = 0LL;
              memset(PoolWithTag, 0, 8LL * (unsigned int)v12);
              v20 = (__int64 *)*v13;
              if ( (__int64 *)*v13 != v13 )
              {
                do
                {
                  if ( (unsigned int)v19 >= (unsigned int)v12 )
                    break;
                  if ( StorEtwAdapterNeedsUpdate((__int64)(v20 - 8), v23)
                    && (int)RaidAcquireAdapterRemoveLock((__int64)(v20 - 8)) >= 0 )
                  {
                    v11[v19] = (__int64)(v20 - 8);
                    v19 = (unsigned int)(v19 + 1);
                  }
                  v20 = (__int64 *)*v20;
                }
                while ( v20 != v13 );
                v9 = v8 + 8;
              }
              v12 = (unsigned int)v19;
              v6 = v23;
            }
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v11 )
      {
        if ( (_DWORD)v12 )
        {
          v21 = v11;
          do
          {
            StorEtwEnableAdapter(*v21, v6);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v21++ + 264));
            --v12;
          }
          while ( v12 );
        }
        ExFreePoolWithTag(v11, 0x54456152u);
      }
    }
    RaidReleasePortData(v8);
  }
}
