/*
 * XREFs of Amd64EnableMonitoring @ 0x1404DDB60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     Amd64AllocateCounter @ 0x1404DD968 (Amd64AllocateCounter.c)
 *     Amd64ConfigureCounter @ 0x1404DDA4C (Amd64ConfigureCounter.c)
 */

__int64 __fastcall Amd64EnableMonitoring(int a1, int a2, int *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  int ProfileDescriptor; // ebx
  _DWORD *v9; // rsi
  int v10; // ecx
  char v11; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  _DWORD *v18; // [rsp+38h] [rbp-20h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0;
  v6 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, (_QWORD **)&Amd64ProfileSourceDescriptorListHead, &v18);
  if ( ProfileDescriptor >= 0 )
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v9 = v18;
    if ( ((*(_QWORD *)&v18[2 * ((unsigned int)KiProcessorIndexToNumberMappingTable[v7] >> 6) + 10] >> (KiProcessorIndexToNumberMappingTable[v7] & 0x3F)) & 1) != 0 )
    {
      ProfileDescriptor = Amd64AllocateCounter(a1, v18, &v19);
      if ( ProfileDescriptor >= 0 )
      {
        v10 = v19;
        if ( a1 )
        {
          v11 = 0;
          *a3 = v19;
        }
        else
        {
          v11 = 1;
        }
        Amd64ConfigureCounter(v10, 1, v9[6], v9[52], v11);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return (unsigned int)ProfileDescriptor;
}
