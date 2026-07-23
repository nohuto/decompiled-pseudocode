/*
 * XREFs of MmFreeSecureKernelPages @ 0x140553944
 * Callers:
 *     MmAllocateSecureKernelPages @ 0x140553614 (MmAllocateSecureKernelPages.c)
 *     PspIumAllocatePhysicalPages @ 0x140583A84 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x140583F20 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x140583FFC (PspIumFreePhysicalPages.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiFreeSmallPageFromMdl @ 0x14030ABF4 (MiFreeSmallPageFromMdl.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MmFreeSecureKernelPages(PMDL MemoryDescriptorList, int a2)
{
  PMDL v3; // r14
  ULONG_PTR *v4; // rdi
  unsigned __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _BYTE MemoryDescriptorLista[176]; // [rsp+38h] [rbp-89h] BYREF

  v3 = MemoryDescriptorList;
  memset(MemoryDescriptorLista, 0, sizeof(MemoryDescriptorLista));
  v4 = (ULONG_PTR *)&v3[1];
  v5 = (unsigned __int64)&v3[1] + 8 * ((unsigned __int64)v3->ByteCount >> 12);
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C4E688
                              + 8 * ((*(_QWORD *)(48 * (__int64)v3[1].Next - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL))
                  + 4LL) & 8) != 0 )
  {
    v6 = 0;
    if ( (unsigned __int64)v4 < v5 )
    {
      do
      {
        v7 = 48 * *v4 - 0x58000000000LL;
        if ( MiIsPfnFromSlabAllocation(v7) )
        {
          if ( !a2 )
          {
            v11 = (unsigned __int8)MiLockPageInline(v7, v8, v9, SchedulerAssist);
            *(_QWORD *)(v7 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
                  v15 = (v14 & SchedulerAssist[5]) == 0;
                  v9 = (unsigned int)v14 & SchedulerAssist[5];
                  SchedulerAssist[5] = v9;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v11);
          }
          _InterlockedDecrement64(&qword_140C4E040);
          MiFreeSmallPageFromMdl(*v4, 0LL, v9, SchedulerAssist);
        }
        else
        {
          v16 = v6++;
          *(_QWORD *)&MemoryDescriptorLista[8 * v16 + 48] = *v4;
          if ( v6 == 16 )
          {
            *(_QWORD *)MemoryDescriptorLista = 0LL;
            *(_DWORD *)&MemoryDescriptorLista[8] = 131248;
            *(_QWORD *)&MemoryDescriptorLista[32] = 0LL;
            *(_QWORD *)&MemoryDescriptorLista[40] = 0x10000LL;
            MmFreePagesFromMdl((PMDL)MemoryDescriptorLista);
            v6 = 0;
          }
        }
        ++v4;
      }
      while ( (unsigned __int64)v4 < v5 );
      v3 = MemoryDescriptorList;
      if ( v6 )
      {
        v17 = v6 << 12;
        *(_QWORD *)MemoryDescriptorLista = 0LL;
        *(_QWORD *)&MemoryDescriptorLista[32] = 0LL;
        *(_WORD *)&MemoryDescriptorLista[8] = 8 * ((v17 >> 12) + 6);
        *(_WORD *)&MemoryDescriptorLista[10] = 2;
        *(_DWORD *)&MemoryDescriptorLista[44] = 0;
        *(_DWORD *)&MemoryDescriptorLista[40] = v17;
        MmFreePagesFromMdl((PMDL)MemoryDescriptorLista);
      }
    }
    v3->MdlFlags &= ~2u;
  }
  else
  {
    MmFreePagesFromMdl(v3);
  }
}
