/*
 * XREFs of MiDecrementHugeContext @ 0x140397F68
 * Callers:
 *     MiGetHugePageToZero @ 0x1402D4500 (MiGetHugePageToZero.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140397E40 (MiGetUltraHugeAlreadyActive.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054FEA0 (MiDereferenceAnyActiveHugeContext.c)
 * Callees:
 *     MiRemoveFaultNode @ 0x1402458FC (MiRemoveFaultNode.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargeZeroingVa @ 0x1405500B8 (MiReleaseLargeZeroingVa.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDecrementHugeContext(char *P, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax

  v4 = (*((_DWORD *)P + 47))-- == 1;
  if ( v4 )
  {
    v7 = (__int64 *)(P + 72);
    v8 = *v7;
    if ( *v7 )
    {
      v9 = (__int64 **)v7[1];
      if ( *(__int64 **)(v8 + 8) != v7 || *v9 != v7 )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( *((_DWORD *)P + 48) != 512 )
      {
        if ( !P[69] )
        {
          v10 = *((_QWORD *)P + 3);
          if ( v10 )
          {
            v11 = (unsigned __int8)MiLockPageInline(*((_QWORD *)P + 3), (__int64)v9, a3, a4);
            *(_BYTE *)(v10 + 34) &= ~8u;
            v12 = *(_QWORD *)(v10 + 16);
            *(_QWORD *)(v12 + 24) = 0LL;
            *(_BYTE *)(v12 + 69) = 1;
            *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
                  v4 = (v16 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v16;
                  if ( v4 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v11);
          }
        }
        if ( a2 )
          MiReleaseLargeZeroingVa(a2, 1LL);
      }
    }
    if ( P[68] )
      MiRemoveFaultNode((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
