/*
 * XREFs of CmpDoFlushNextHive @ 0x140690D90
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14069107C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  unsigned __int64 v6; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
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
            if ( (int)CmpFlushHive(NextActiveHive, 0x12u) < 0 )
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
          CmpFlushHive(NextActiveHive, 0x22u);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
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
