/*
 * XREFs of MiIncrementLargeSubsections @ 0x140541480
 * Callers:
 *     MiReferenceDataSubsections @ 0x1402FD12C (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFCB0 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x140357480 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 *v5; // r12
  volatile LONG *v6; // r13
  unsigned __int64 v7; // r14
  int v8; // eax
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // edx
  int v20; // ebx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+2Ch] [rbp-24h]
  _DWORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v35[3]; // [rsp+38h] [rbp-18h] BYREF
  char v37; // [rsp+A0h] [rbp+50h]
  __int64 v38; // [rsp+A8h] [rbp+58h]

  v2 = (__int64)a1;
  v38 = *a1;
  v4 = 0;
  v5 = 0LL;
  v6 = (volatile LONG *)(*a1 + 72);
  v7 = ExAcquireSpinLockExclusive(v6);
  v37 = v7 + 1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v2 + 48) >> 30;
    if ( !v8 )
      break;
    if ( v8 == 1 && !v4 )
      v4 = 1;
    v9 = *(_DWORD *)(v2 + 108);
    if ( v9 == -1 )
      break;
    if ( v9 == 1 )
    {
      v33 = 0;
      v34[1] = 0;
      v35[1] = v35;
      v35[0] = v35;
      v31 = *(_QWORD *)(v38 + 80);
      *(_QWORD *)(v38 + 80) = &v31;
      v34[0] = 393479;
      v32 = 512;
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << v37);
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      KeWaitForGate((__int64)v34, 19);
    }
    else
    {
      v15 = v9 + 1;
      *(_DWORD *)(v2 + 108) = v15;
      if ( v15 == 1 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << v37);
              v14 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v17);
            }
          }
        }
        __writecr8(v7);
        v20 = MiEnableLargeSubsection(v2);
        ExAcquireSpinLockExclusive(v6);
        v21 = MiBuildWakeList(v38, 512);
        MiReleaseControlAreaWaiters(v21, v22, v23, v24);
        if ( !v20 )
        {
          v4 = -1;
          --*(_DWORD *)(v2 + 108);
          goto LABEL_34;
        }
        ++*(_DWORD *)(v2 + 108);
      }
      v5 = (__int64 *)v2;
      if ( a2 )
      {
        v25 = *(unsigned int *)(v2 + 44);
        if ( a2 <= v25 )
          goto LABEL_34;
        a2 -= v25;
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    if ( !v2 )
      goto LABEL_34;
  }
  v4 = -1;
LABEL_34:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << v37);
        v14 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v27);
      }
    }
  }
  __writecr8(v7);
  if ( v4 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v4;
}
