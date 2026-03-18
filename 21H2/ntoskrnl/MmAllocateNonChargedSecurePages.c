/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x14058A110
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x1405E29C8 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140264ED0 (MiPartitionObjectToPartition.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeMdlPfn @ 0x140589CEC (MiInitializeMdlPfn.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, __int64 a2, __int64 *a3)
{
  unsigned int *v4; // r14
  ULONG_PTR *v5; // rdi
  unsigned int v6; // ebp
  signed __int32 v7; // ecx
  unsigned int v8; // ebx
  __int64 Page; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v4 = (unsigned int *)a2;
  LOBYTE(a2) = 1;
  v18 = 0LL;
  v5 = MiPartitionObjectToPartition(a1, a2, &v19);
  v6 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v18);
  if ( *v4 )
  {
    do
    {
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 1u);
      v8 = DWORD2(v18) & v7 | HIDWORD(v18);
      if ( (*((_DWORD *)v5 + 1) & 8) == 0
        || (Page = MiGetSlabPage((__int64)v5, 2, v8, 2, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0), Page == -1) )
      {
        Page = MiGetPage((__int64)v5, v8, 0);
        if ( Page == -1 )
          break;
      }
      v10 = 48 * Page - 0x220000000000LL;
      v11 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = ZeroPte;
      *(_QWORD *)(v10 + 40) = v11 & 0x7FFFFF0000000000LL | 0x3FFFFFFFFELL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 54);
      v12 = (unsigned __int8)MiLockPageInline(v10);
      MiInitializeMdlPfn(v10, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
      *a3 = Page;
      ++v6;
      ++a3;
    }
    while ( v6 < *v4 );
  }
  v17 = v19 == 0;
  *v4 = v6;
  if ( !v17 )
    PsDereferencePartition(v5[22]);
}
