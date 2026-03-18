/*
 * XREFs of IopDequeueIrpFromThread @ 0x1402543D0
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *result; // rax
  _QWORD *v10; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1[19];
  CurrentIrql = 0;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v3 + 1416, a2, a3);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v7[6];
          v7[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 1416), 0LL) )
      {
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v13[6] - 1;
            v13[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(v3 + 1416, a2, a3);
      }
    }
  }
  v8 = a1[4];
  result = a1 + 4;
  v10 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v8 + 8) != a1 + 4 || (_QWORD *)*v10 != result )
    __fastfail(3u);
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  a1[5] = a1 + 4;
  *result = result;
  if ( v3 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3 + 1416, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 1416), 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v17 = v12[6] - 1;
        v12[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
