/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x14053454C
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x1405841A8 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiInitializeMdlPfn @ 0x140294B14 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  signed __int32 v10; // ecx
  unsigned int v11; // ebx
  __int64 SlabPage; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0;
  v19 = 0LL;
  v5 = MiPartitionObjectToPartition(a1, 1, &v20);
  v6 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v19);
  if ( *a2 )
  {
    do
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v19, 1u);
      v11 = DWORD2(v19) & v10 | HIDWORD(v19);
      if ( (*((_DWORD *)v5 + 1) & 8) != 0 )
        SlabPage = MiGetSlabPage((__int64)v5, 0x18u, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      else
        SlabPage = -1LL;
      if ( SlabPage == -1 )
      {
        SlabPage = MiGetPage((__int64)v5, v11, 0LL);
        if ( SlabPage == -1 )
          break;
      }
      v13 = 48 * SlabPage - 0x58000000000LL;
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 16) = ZeroPte;
      *(_QWORD *)(v13 + 40) = *(_QWORD *)(v13 + 40) & 0x7FFFFFF000000000LL | 0xFFFFFFFFDLL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 54);
      v14 = (unsigned __int8)MiLockPageInline(v13, v7, v8, SchedulerAssist);
      MiInitializeMdlPfn(v13, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = -1LL << ((unsigned __int8)v14 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)v7;
            v18 = (v17 & SchedulerAssist[5]) == 0;
            v8 = (unsigned int)v17 & SchedulerAssist[5];
            SchedulerAssist[5] = v8;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      *a3 = SlabPage;
      ++v6;
      ++a3;
    }
    while ( v6 < *a2 );
  }
  v18 = v20 == 0;
  *a2 = v6;
  if ( !v18 )
    PsDereferencePartition(v5[22]);
}
