/*
 * XREFs of IopSetLockOperationProcess @ 0x14036245C
 * Callers:
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x140234E58 (IopVerifierExAllocatePool_0.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  char v4; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _QWORD *Pool_0; // rax
  __int64 v12; // rsi
  KIRQL v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  _QWORD *v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  char v22; // [rsp+78h] [rbp+10h]
  __int64 FileObjectExtension; // [rsp+88h] [rbp+20h] BYREF

  FileObjectExtension = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v10 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v12 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &FileObjectExtension, 0LL);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    Pool_0 = IopVerifierExAllocatePool_0(v9, 0x10uLL);
    v12 = FileObjectExtension;
    v3 = Pool_0;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v14 = *(_QWORD *)(v12 + 16);
  v15 = v13;
  v22 = *(_BYTE *)(a1 + 72);
  if ( v14 )
  {
    v16 = *(_QWORD **)(v12 + 16);
    while ( v16[1] != a2 )
    {
      v16 = (_QWORD *)*v16;
      if ( !v16 )
        goto LABEL_18;
    }
    v4 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v3 )
      {
        *v3 = v14;
        *(_QWORD *)(v12 + 16) = v3;
        v3[1] = a2;
      }
      else
      {
        v10 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  if ( v4 && v3 )
    ExFreePoolWithTag(v3, 0);
  if ( a3 )
  {
    if ( v22 && v4 )
      return 0LL;
    return 3221225473LL;
  }
  return v10;
}
