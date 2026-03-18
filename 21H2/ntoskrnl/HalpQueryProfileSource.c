/*
 * XREFs of HalpQueryProfileSource @ 0x140376F58
 * Callers:
 *     HalpQueryProfileInformation @ 0x1407FCE14 (HalpQueryProfileInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x14038A10C (HalpGetProfileDescriptor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpQueryProfileSource(unsigned int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0LL;
  if ( a1 < 0x18 )
  {
    v3 = -1073741820;
LABEL_7:
    *a3 = 24;
    return v3;
  }
  v6 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( (int)HalpGetProfileDescriptor(*a2, v7, &v20) >= 0 )
  {
    v8 = v20;
    *((_BYTE *)a2 + 4) = (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v20 + 32)) == 0;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v8 + 24);
    }
    else
    {
      v8 = v20;
      v9 = *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
    }
    a2[2] = v9;
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v8 + 296);
    KxReleaseSpinLock(&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    goto LABEL_7;
  }
  KxReleaseSpinLock(&HalpProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
  }
  __writecr8(v6);
  *a3 = 0;
  return 3221225659LL;
}
