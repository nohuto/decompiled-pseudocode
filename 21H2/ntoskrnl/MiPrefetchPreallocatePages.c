/*
 * XREFs of MiPrefetchPreallocatePages @ 0x140594C08
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140594F80 (MiPrefetchReleasePreallocatedPages.c)
 */

void __fastcall MiPrefetchPreallocatePages(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r10
  __int64 LargePage; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0;
  v6 = a6;
  if ( a4 != 1 && (*(_BYTE *)(a4 + 184) & 7) == 0 )
  {
    v10 = *a1;
    v11 = a6 & 0xFFFFFFFFFFE00000uLL;
    if ( v10 && v11 == v10 )
      goto LABEL_42;
    if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v11 == a6 && *a5 + a5[1] - a6 >= 0x200000 )
    {
      *a1 = 0LL;
      if ( v6 >= a1[3] && v6 <= a1[4] )
      {
LABEL_16:
        v18 = *(_QWORD *)(a2 + 88);
        if ( v18 )
        {
          if ( v18 == a1[1]
            && *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4)) + 2) == *((_DWORD *)a1 + 10) - 1 )
          {
            *a1 = v6;
            goto LABEL_42;
          }
          MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
        }
        a1[1] = 0LL;
        if ( *((_DWORD *)a1 + 4)
          || (v19 = MiAcquireNonPagedResources(a3, 512LL, 1024LL, 6u), (*((_DWORD *)a1 + 4) = v19 >= 0) != 0) )
        {
          v20 = *((_DWORD *)a1 + 10);
          if ( v20 )
            v21 = v20 - 1;
          else
            v21 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          LargePage = MiGetLargePage(a3, v6, 1u, v21, 1u, 4, 0LL);
          *(_QWORD *)(a2 + 88) = LargePage;
          if ( LargePage )
            MiConvertEntireLargePageToSmall(LargePage, 1, 2, 1, 0LL, 0LL, 0LL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v25 = KeGetCurrentIrql();
              if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v27 = CurrentPrcb->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v29 = (v28 & v27[5]) == 0;
                v27[5] &= v28;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          a1[1] = *(_QWORD *)(a2 + 88);
          *a1 = v6;
        }
        goto LABEL_42;
      }
      v12 = MiObtainReferencedVadEx(v6, 2, &v30);
      v13 = v12;
      if ( !v12 )
        goto LABEL_42;
      v14 = *(_DWORD *)(v12 + 48);
      if ( (v14 & 0x70) == 0
        && (v14 & 0x200000) != 0
        && (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
         + 1
         - v6 >= 0x200000
        && ((v14 >> 12) & 0x7F) != 0
        && (unsigned int)MiProtectionToCacheAttribute((v14 >> 7) & 0x1F) == 1 )
      {
        v17 = *(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32);
        a1[4] = v16;
        a1[3] = v17 << 12;
        *((_DWORD *)a1 + 10) = v15;
        MiUnlockAndDereferenceVadShared((char *)v13);
        goto LABEL_16;
      }
      MiUnlockAndDereferenceVadShared((char *)v13);
    }
    else
    {
      *a1 = 0LL;
    }
LABEL_42:
    if ( !*a1 )
      MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
  }
}
