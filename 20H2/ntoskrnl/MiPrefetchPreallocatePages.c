/*
 * XREFs of MiPrefetchPreallocatePages @ 0x140537B20
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140537EA0 (MiPrefetchReleasePreallocatedPages.c)
 */

void __fastcall MiPrefetchPreallocatePages(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int *v13; // rsi
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  int v19; // r9d
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  signed __int32 v23; // eax
  unsigned int v24; // r9d
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r10
  __int64 LargePage; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  __int128 v33; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v34 = 0;
  v6 = a6;
  v33 = 0LL;
  if ( a4 != 1 && (*(_BYTE *)(a4 + 184) & 7) == 0 )
  {
    v11 = *a1;
    v12 = a6 & 0xFFFFFFFFFFE00000uLL;
    if ( v11 && v12 == v11 )
      goto LABEL_41;
    if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v12 == a6 && *a5 + a5[1] - a6 >= 0x200000 )
    {
      *a1 = 0LL;
      if ( v6 >= a1[3] && v6 <= a1[4] )
      {
        v13 = (int *)(a1 + 5);
        goto LABEL_18;
      }
      v14 = MiObtainReferencedVadEx(v6, 2, &v34);
      v15 = v14;
      if ( !v14 )
        goto LABEL_41;
      v16 = *((_DWORD *)v14 + 12);
      v17 = (((*((unsigned int *)v14 + 7) | ((unsigned __int64)*((unsigned __int8 *)v14 + 33) << 32)) << 12) | 0xFFF)
          + 1;
      if ( (v16 & 0x100000) != 0
        && (v16 & 0x70) == 0
        && v17 - v6 >= 0x200000
        && ((v16 >> 12) & 0x3F) != 0
        && (unsigned int)MiProtectionToCacheAttribute((v16 >> 7) & 0x1F) == 1 )
      {
        v13 = (int *)(a1 + 5);
        v20 = *((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32);
        a1[4] = v18;
        a1[3] = v20 << 12;
        *((_DWORD *)a1 + 10) = v19;
        MiUnlockAndDereferenceVadShared((char *)v15);
LABEL_18:
        v21 = *(_QWORD *)(a2 + 88);
        if ( v21 )
        {
          if ( v21 == a1[1] )
          {
            v13 = (int *)(a1 + 5);
            if ( *((_DWORD *)MiSearchNumaNodeTable((v21 + 0x58000000000LL) / 48) + 2) == *((_DWORD *)a1 + 10) - 1 )
            {
              *a1 = v6;
              goto LABEL_41;
            }
          }
          MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
        }
        a1[1] = 0LL;
        if ( *((_DWORD *)a1 + 4)
          || (v22 = MiAcquireNonPagedResources(a3, 0x200uLL, 1024LL, 6u), (*((_DWORD *)a1 + 4) = v22 >= 0) != 0) )
        {
          MiInitializePageColorBase(a4, *v13, (__int64)&v33);
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v33, 1u);
          v24 = DWORD2(v33) & v23 | HIDWORD(v33);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          LargePage = MiGetLargePage(a3, 1u, 1, v24, 4, 0LL);
          *(_QWORD *)(a2 + 88) = LargePage;
          if ( LargePage )
            MiConvertEntireLargePageToSmall(LargePage, 1, 2LL, 1LL, 0LL, 0LL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v28 = KeGetCurrentIrql();
              if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v30 = CurrentPrcb->SchedulerAssist;
                v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v32 = (v31 & v30[5]) == 0;
                v30[5] &= v31;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          a1[1] = *(_QWORD *)(a2 + 88);
          *a1 = v6;
        }
        goto LABEL_41;
      }
      MiUnlockAndDereferenceVadShared((char *)v15);
    }
    else
    {
      *a1 = 0LL;
    }
LABEL_41:
    if ( !*a1 )
      MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
  }
}
