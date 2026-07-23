/*
 * XREFs of KiInitializeProcessor @ 0x14099A064
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1409AB6C0 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeInitializeGate @ 0x140322400 (KeInitializeGate.c)
 *     KiInitializeDpcList @ 0x1403232D8 (KiInitializeDpcList.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     KeInitializeThreadedDpc @ 0x1403AB3E0 (KeInitializeThreadedDpc.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v2; // ecx
  ULONG v3; // r9d
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  PVOID PoolWithTag; // rax
  size_t v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 31616);
    KiInitializeDpcList((_QWORD *)(a1 + 12520));
    *(_QWORD *)(a1 + 12536) = 0LL;
    *(_DWORD *)(a1 + 12544) = 0;
  }
  if ( KeDpcWatchdogPeriod )
  {
    KeInitializeThreadedDpc((PRKDPC)(a1 + 33368), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
    v2 = *(_DWORD *)(a1 + 36);
    *(_BYTE *)(a1 + 33369) = 2;
    if ( !*(_QWORD *)(a1 + 33424) )
      *(_WORD *)(a1 + 33370) = v2 + 1280;
    KeInitializeTimerEx((PKTIMER)(a1 + 33432), NotificationTimer);
    v3 = KeMaximumIncrement;
    v4 = KeMaximumIncrement;
    v5 = (KeMaximumIncrement + 10000 * (unsigned __int64)(unsigned int)KeDpcWatchdogPeriod - 1) / KeMaximumIncrement;
    if ( v5 > 0xFFFFFFFF )
      v5 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 31724) = 0;
    *(_DWORD *)(a1 + 31788) = 0;
    *(_DWORD *)(a1 + 31720) = v5;
    v6 = v5 * v4 / 0x4E20;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    KeSetCoalescableTimer((PKTIMER)(a1 + 33432), (LARGE_INTEGER)-v3, v6, 0xFAu, (PKDPC)(a1 + 33368));
  }
  if ( KiDPCTimeout )
  {
    v7 = (10000LL * (unsigned int)KiDPCTimeout + (unsigned __int64)KeMaximumIncrement - 1) / KeMaximumIncrement;
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = -1;
    *(_DWORD *)(a1 + 32416) = v7;
  }
  if ( KiDpcWatchdogProfileArrayLength )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    8LL * (unsigned int)KiDpcWatchdogProfileArrayLength,
                    0x5057694Bu);
    *(_QWORD *)(a1 + 33960) = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 33968) = PoolWithTag;
      memset(PoolWithTag, 0, v9);
      v10 = KeMaximumIncrement;
      v11 = (10000LL * (unsigned int)KiDpcWatchdogProfileCumulativeDpcThreshold
           + (unsigned __int64)KeMaximumIncrement
           - 1)
          / KeMaximumIncrement;
      if ( v11 > 0xFFFFFFFF )
        LODWORD(v11) = -1;
      *(_DWORD *)(a1 + 31732) = v11;
      v12 = (10000LL * (unsigned int)KiDpcWatchdogProfileSingleDpcThreshold + v10 - 1) / v10;
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      *(_DWORD *)(a1 + 32512) = v12;
    }
    else
    {
      *(_DWORD *)(a1 + 31732) = 0;
      *(_DWORD *)(a1 + 32512) = 0;
      *(_QWORD *)(a1 + 33968) = 0LL;
    }
  }
  return 0LL;
}
