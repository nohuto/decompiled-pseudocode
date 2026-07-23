/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x1409AE518
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1409AC894 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1409ACE10 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409AD1BC (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14050A2A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14050A354 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpUnLockPages @ 0x14050A518 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409AD888 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v6 = *a1;
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 5LL, &v18, a4);
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 8LL, &v19, v7);
  if ( (*(_DWORD *)(v6 + 80) & 0x100) == 0 )
    IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 6LL, &v20, v8);
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 0xFFFFFFFFLL, &v17, v8);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)a1 + 6);
  if ( a2 == 1 )
  {
    v9 = *((unsigned __int8 *)a1 + 88);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  IopLiveDumpUnLockPages();
  *((_DWORD *)a1 + 2) &= ~1u;
  IopLiveDumpTraceSystemQuiesceEnd();
  v15 = *(_DWORD *)(v6 + 80);
  if ( (v15 & 0x80u) != 0 )
    LOBYTE(v15) = IopLiveDumpTraceUncorralProcessorsDuration((const GUID *)*a1, v17, v20, v19, v18);
  return v15;
}
