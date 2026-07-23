/*
 * XREFs of EmonQueryInformation @ 0x140376740
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpQueryProfileSourceList @ 0x1404BF250 (HalpQueryProfileSourceList.c)
 */

__int64 __fastcall EmonQueryInformation(int a1, unsigned int a2, int *a3, _DWORD *a4)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned int ProfileSourceList; // ebx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int64 v15; // rbp
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  __int64 v29[3]; // [rsp+30h] [rbp-18h] BYREF

  v29[0] = 0LL;
  v7 = a1 - 1;
  if ( !v7 )
  {
    if ( a2 < 0x18 )
      goto LABEL_24;
    v12 = (unsigned __int8)HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
    if ( (int)HalpGetProfileDescriptor((unsigned int)*a3, &EmonProfileSourceDescriptorListHead, v29) >= 0 )
    {
      v13 = v29[0];
      *((_BYTE *)a3 + 4) = (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v29[0] + 32)) == 0;
      if ( *(_DWORD *)v13 )
      {
        v14 = *(_DWORD *)(v13 + 24);
      }
      else
      {
        v13 = v29[0];
        v14 = *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
      }
      a3[2] = v14;
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v13 + 200);
      KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v20 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
      *a4 = 24;
      return 0;
    }
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(v12);
    *a4 = 0;
    return (unsigned int)-1073741637;
  }
  v8 = v7 - 19;
  if ( v8 )
  {
    if ( v8 == 24 )
    {
      if ( a2 >= 4 )
      {
        v9 = EmonNumberCounters;
        *a4 = 4;
        *a3 = v9;
        return 0;
      }
LABEL_24:
      *a4 = 0;
      return (unsigned int)-1073741820;
    }
    *a4 = 0;
    return (unsigned int)-1073741637;
  }
  v15 = (unsigned __int8)HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
  ProfileSourceList = HalpQueryProfileSourceList(
                        (unsigned int)&EmonProfileSourceDescriptorListHead,
                        (unsigned int)EmonProfileIntervalLimits,
                        EmonProfileSourceDescriptorCount,
                        a2,
                        (__int64)a3,
                        (__int64)a4);
  KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v15);
  return ProfileSourceList;
}
