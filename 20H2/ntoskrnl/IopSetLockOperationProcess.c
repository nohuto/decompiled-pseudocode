/*
 * XREFs of IopSetLockOperationProcess @ 0x1403056F8
 * Callers:
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x14029FE88 (IopVerifierExAllocatePool_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  _QWORD *Pool_0; // rax
  __int64 v13; // rsi
  KIRQL v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  _QWORD *v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  char v23; // [rsp+78h] [rbp+10h]
  __int64 FileObjectExtension; // [rsp+88h] [rbp+20h] BYREF

  FileObjectExtension = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v11 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v13 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, &FileObjectExtension, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool_0 = IopVerifierExAllocatePool_0(v10, 0x10uLL);
    v13 = FileObjectExtension;
    v4 = Pool_0;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v15 = *(_QWORD *)(v13 + 16);
  v16 = v14;
  v23 = *(_BYTE *)(a1 + 72);
  if ( v15 )
  {
    v17 = *(_QWORD **)(v13 + 16);
    while ( v17[1] != a2 )
    {
      v17 = (_QWORD *)*v17;
      if ( !v17 )
        goto LABEL_18;
    }
    v5 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v4 )
      {
        *v4 = v15;
        *(_QWORD *)(v13 + 16) = v4;
        v4[1] = a2;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( v5 && v4 )
    ExFreePoolWithTag(v4, 0);
  if ( a3 )
  {
    if ( v23 && v5 )
      return 0LL;
    return 3221225473LL;
  }
  return v11;
}
