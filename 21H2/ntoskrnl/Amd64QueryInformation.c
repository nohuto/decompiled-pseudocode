/*
 * XREFs of Amd64QueryInformation @ 0x1404DDFE0
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

__int64 __fastcall Amd64QueryInformation(int a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rbp
  unsigned int ProfileSourceList; // ebx
  unsigned __int8 v11; // cl
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int64 v16; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  __int64 v21; // rbp
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v28[3]; // [rsp+30h] [rbp-18h] BYREF

  v28[0] = 0LL;
  v7 = a1 - 1;
  if ( !v7 )
  {
    if ( a2 >= 0x18 )
    {
      v16 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
      if ( (int)HalpGetProfileDescriptor(*(_DWORD *)a3, (_QWORD **)&Amd64ProfileSourceDescriptorListHead, v28) < 0 )
      {
        KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
              v15 = (v20 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v20;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v16);
        *a4 = 0;
        return (unsigned int)-1073741637;
      }
      v21 = v28[0];
      *(_BYTE *)(a3 + 4) = (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v28[0] + 32)) == 0;
      if ( *(_DWORD *)v21 )
      {
        v22 = *(_DWORD *)(v21 + 24);
      }
      else
      {
        v21 = v28[0];
        v22 = *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
      }
      *(_DWORD *)(a3 + 8) = v22;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(v21 + 200);
      KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v15 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v16);
      *a4 = 24;
      return 0;
    }
    goto LABEL_16;
  }
  v8 = v7 - 19;
  if ( v8 )
  {
    if ( v8 != 24 )
    {
      *a4 = 0;
      return (unsigned int)-1073741637;
    }
    if ( a2 >= 4 )
    {
      *a4 = 4;
      *(_DWORD *)a3 = 4;
      return 0;
    }
LABEL_16:
    *a4 = 0;
    return (unsigned int)-1073741820;
  }
  v9 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
  ProfileSourceList = HalpQueryProfileSourceList(
                        &Amd64ProfileSourceDescriptorListHead,
                        (__int64)Amd64ProfileIntervalLimits,
                        Amd64ProfileSourceDescriptorCount,
                        a2,
                        a3,
                        a4);
  KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  __writecr8(v9);
  return ProfileSourceList;
}
