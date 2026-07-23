/*
 * XREFs of CmpDoFlushNextHive @ 0x140667540
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  unsigned __int64 v6; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 UnbiasedInterruptTime; // r11

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v8 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 104) || *(_BYTE *)(NextActiveHive + 191) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v6 = *(_QWORD *)(NextActiveHive + 4176) + 10000000LL * (unsigned int)dword_140C00400;
          if ( UnbiasedInterruptTime >= v6 )
          {
            if ( (int)CmpFlushHive(NextActiveHive) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v8 = 10000000LL * (unsigned int)dword_140C0040C;
            }
          }
          else
          {
            v3 = 1;
            v8 = v6 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4264) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry(v11, v10);
        UNLOCK_HIVE_LOAD();
      }
      if ( v8 >= v2 )
        v8 = v2;
      v2 = v8;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v8;
  }
  return v3;
}
