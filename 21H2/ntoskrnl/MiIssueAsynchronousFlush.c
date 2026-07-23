/*
 * XREFs of MiIssueAsynchronousFlush @ 0x14053D528
 * Callers:
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 * Callees:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushComplete @ 0x14053D3A0 (MiFlushComplete.c)
 */

unsigned __int64 __fastcall MiIssueAsynchronousFlush(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7,
        __int64 a8)
{
  struct _MDL *v10; // r15
  unsigned __int64 v11; // rbx
  _DWORD *v12; // r9
  NTSTATUS v13; // r12d
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  bool v19; // zf
  int v21; // r14d
  unsigned __int8 v22; // si
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax

  *(_BYTE *)(a2 + 50) = 6;
  *(_WORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  *(_DWORD *)(a2 + 52) = 0;
  v10 = *(struct _MDL **)(a2 + 72);
  v11 = a2;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v10 + 8 * ((unsigned __int64)v10->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v13 = IoAsynchronousPageWrite(
          a1,
          v10,
          &a5,
          (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiFlushComplete,
          (void *)a2,
          a7,
          0,
          a6,
          a8,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  if ( (v13 & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)v11 = v13;
    *(_QWORD *)(v11 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiFlushComplete(v11, v11, 0LL, v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v13;
    v10->ByteCount = 0;
  }
  else
  {
    v21 = 0;
    v22 = KeGetCurrentIrql();
    __writecr8(1uLL);
    do
    {
LABEL_16:
      v11 += 264LL;
      if ( v11 >= a3 + 2112 )
        v11 = a3;
      if ( !*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 52) == 1 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && v22 <= 0xFu && v27 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = v28->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (v22 + 1));
              v19 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
        }
        __writecr8(v22);
        return v11;
      }
      ++v21;
    }
    while ( v21 != 8 );
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && v22 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v22 + 1));
          v19 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
    }
    __writecr8(v22);
    KeWaitForMultipleObjects(8u, (PVOID *)(a3 + 2112), WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
    v11 = a3;
    while ( *(int *)v11 >= 0 )
    {
      v11 += 264LL;
      if ( !--v21 )
      {
        v22 = KeGetCurrentIrql();
        __writecr8(1uLL);
        goto LABEL_16;
      }
    }
    *(_DWORD *)(*(_QWORD *)(v11 + 72) + 40LL) = 0;
  }
  return 0LL;
}
