/*
 * XREFs of HalpInterruptSetLineSpecificOverride @ 0x140509344
 * Callers:
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptSetLineSpecificOverride(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // esi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v2 = HalpInterruptGsiToLine(a1, &v14);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)HalpMmAllocCtxAlloc(v1, 40LL);
    v4 = (__int64)v3;
    if ( !v3 )
      return 3221225626LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v6 = v14;
    *(_QWORD *)(v4 + 16) = v14;
    *(_QWORD *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 36) = 2;
    *(_DWORD *)(v4 + 32) = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
    v8 = (__int64 *)qword_140C4AD88;
    if ( *(__int64 **)qword_140C4AD88 != &HalpInterruptOverrides )
      __fastfail(3u);
    *(_QWORD *)v4 = &HalpInterruptOverrides;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    qword_140C4AD88 = v4;
    KxReleaseSpinLock(&HalpInterruptOverridesLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return (unsigned int)v2;
}
