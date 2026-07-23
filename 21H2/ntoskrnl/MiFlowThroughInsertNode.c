/*
 * XREFs of MiFlowThroughInsertNode @ 0x14024E3EC
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403251BC (MiFinishMdlForMappedFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  _QWORD *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v10; // rbx
  KIRQL v11; // al
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = a2[2];
  v3 = v23;
  if ( (v23 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  else
  {
    PagingFileOffset = MiGetPagingFileOffset(&v23, a2, a3);
    v10 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((a2[5] >> 39) & 0x3FFLL)) + 8LL * (v3 >> 12) + 6944);
    *(_QWORD *)(a1 + 336) = v10;
    *(_QWORD *)(a1 + 344) = PagingFileOffset;
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 232));
    v12 = *(_QWORD **)(v10 + 240);
    v13 = a1 + 352;
    LOBYTE(v14) = 0;
    v15 = v11;
    if ( v12 )
    {
      v16 = *(_QWORD *)(a1 + 344);
      while ( 1 )
      {
        if ( v16 > *(v12 - 1) || v16 >= *(v12 - 1) && v13 > (unsigned __int64)v12 )
        {
          v17 = (_QWORD *)v12[1];
          if ( !v17 )
          {
            LOBYTE(v14) = 1;
            break;
          }
        }
        else
        {
          v17 = (_QWORD *)*v12;
          if ( !*v12 )
            break;
        }
        v12 = v17;
      }
    }
    RtlAvlInsertNodeEx(v10 + 240, v12, v14, v13);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
  }
  *(_DWORD *)(a1 + 192) |= 0x10u;
  result = (_QWORD *)(a1 + 16);
  v7 = *a2 - 32LL;
  v8 = *(_QWORD **)(v7 + 24);
  if ( *v8 != v7 + 16 )
    __fastfail(3u);
  *result = v7 + 16;
  *(_QWORD *)(a1 + 24) = v8;
  *v8 = result;
  *(_QWORD *)(v7 + 24) = result;
  *(_QWORD *)(a1 + 328) = v7;
  return result;
}
